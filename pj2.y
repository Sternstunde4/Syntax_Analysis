%{
#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include<stddef.h>
#include "tree.h"
using namespace std;
extern int yylineno;
extern char* yytext; 
int yylex();

void yyerror (const char *err){
	fprintf(stderr,"\nError: %s at line %d\n",err,yylineno);
	fprintf(stderr, "does not accept '%s'\n",yytext);
	return ;
}
%}

%define api.value.type {struct Node *}
%define parse.error verbose
%locations

%token AND ARRAY BEGIN_1 BY DIV DO ELSE ELSIF END EXIT FOR IF IN IS LOOP MOD NOT OF OR OUT PROCEDURE PROGRAM READ RECORD RETURN THEN TO TYPE VAR WHILE WRITE
%token ID REAL STRING INTEGER 
%token COLON SEMICOLON COMMA DOT LB RB LSB RSB LCB RCB LAB RAB
%token ASSIGN ADD SUB MULT DIVD LT LE GT GE EQ NEQ
%token BADCHAR UNTERSTR UNTERCOM ORINT OLSTR TABSSTR TABSTR ORREAL OLID
%type program body declarations declaration var_decls var_decl type_decls type_decl procedure_decls procedure_decl type components component formal_params semi_fp_sections fp_section comma_IDs comma_l_values statement statements ELSIF_expression_THEN_statements write_params comma_write_exprs write_expr expression l_value comma_expressions actual_params comp_values semi_ID_assign_expressions array_values comma_array_values array_value

/*priority*/
%right ASSIGNOP
%left OR
%left AND
%left GT LT GE LE EQ NEQ
%left ADD SUB
%left MOD
%left MULT DIVD DIV
%right NOT 
%left LB RB
  
%%
program:PROGRAM IS body SEMICOLON 
	{struct Node *cldArray[20];cldArray[0]=$3;$$=createNode($4->row, $4->col, "program", NULL,0,0,1,cldArray);treePrint($$);}
  ;
body:BEGIN_1 END 
	{struct Node *cldArray[20];cldArray[0]=NULL;$$=createNode($2->row, $2->col, "body", NULL,0,0,0,cldArray);}
  | BEGIN_1 statements END 
  	{struct Node *cldArray[20];cldArray[0]=$2;$$=createNode($3->row, $3->col, "body", NULL,0,0,1,cldArray);}
  | declarations BEGIN_1 END 
  	{struct Node *cldArray[20];cldArray[0]=$1;$$=createNode($3->row, $3->col, "body", NULL,0,0,1,cldArray);}
  | declarations BEGIN_1 statements END 
  	{struct Node *cldArray[20];cldArray[0]=$1;cldArray[1]=$3;$$=createNode($4->row, $4->col, "body", NULL,0,0,2,cldArray);}
  ;
declarations:declaration 
	{struct Node *cldArray[20];cldArray[0]=$1;$$=createNode($1->row, $1->col, "declarations", NULL,0,0,1,cldArray);}
  | declarations declaration 
  	{struct Node *cldArray[20];int temp=$1->ncld;for(int i=0;i<temp;i++){cldArray[i]=$1->cldArray[i];}cldArray[temp]=$2;$$=createNode($2->row, $2->col, "declarations", NULL,0,0,temp+1,cldArray);}
  ;
declaration:VAR 
	{struct Node *cldArray[20];cldArray[0]=NULL;$$=createNode($1->row, $1->col, "declaration", NULL,0,0,0,cldArray);}
  | VAR var_decls 
  	{struct Node *cldArray[20];cldArray[0]=$2;$$=createNode($2->row, $2->col, "declaration", NULL,0,0,1,cldArray);}
  | TYPE 
  	{struct Node *cldArray[20];$$=createNode($1->row, $1->col, "declaration", NULL,0,0,0,cldArray);}
  | TYPE type_decls 
  	{struct Node *cldArray[20];cldArray[0]=$2;$$=createNode($2->row, $2->col, "declaration", NULL,0,0,1,cldArray);}
  | PROCEDURE 
  	{struct Node *cldArray[20];cldArray[0]=NULL;$$=createNode($1->row, $1->col, "declaration", NULL,0,0,0,cldArray);}
  | PROCEDURE procedure_decls 
  	{struct Node *cldArray[20];cldArray[0]=$2;$$=createNode($2->row, $2->col, "declaration", NULL,0,0,1,cldArray);}
  ;
var_decls:var_decl 
	{struct Node *cldArray[20];cldArray[0]=$1;$$=createNode($1->row, $1->col, "var_decls", NULL,0,0,1,cldArray);}
  | var_decls var_decl 
  	{struct Node *cldArray[20];int temp=$1->ncld;for(int i=0;i<temp;i++){cldArray[i]=$1->cldArray[i];}cldArray[temp]=$2;$$=createNode($2->row+1, $2->col+1, "var_decls", NULL,0,0,temp+1,cldArray);}
  ;
var_decl:ID ASSIGN expression SEMICOLON 
	{struct Node *cldArray[20];cldArray[0]=$1;cldArray[1]=$3;$$=createNode($4->row, $4->col, "var_decl", NULL,0,0,2,cldArray);}
  | ID COLON type ASSIGN expression SEMICOLON 
  	{struct Node *cldArray[20];cldArray[0]=$1;cldArray[1]=$3;cldArray[2]=$5;$$=createNode($6->row, $6->col, "var_decl", NULL,0,0,3,cldArray);}
  | ID comma_IDs ASSIGN expression SEMICOLON 
  	{struct Node *cldArray[20];cldArray[0]=$1;cldArray[1]=$2;cldArray[2]=$4;$$=createNode($5->row, $5->col, "var_decl", NULL,0,0,3,cldArray);}
  | ID comma_IDs COLON type ASSIGN expression SEMICOLON 
  	{struct Node *cldArray[20];cldArray[0]=$1;cldArray[1]=$2;cldArray[2]=$4;cldArray[3]=$6;$$=createNode($7->row, $7->col, "var_decl", NULL,0,0,4,cldArray);}
  ;
type_decls:type_decl 
	{struct Node *cldArray[20];cldArray[0]=$1;$$=createNode($1->row, $1->col, "type_decls", NULL,0,0,1,cldArray);}
  | type_decls type_decl 
  	{struct Node *cldArray[20];int temp=$1->ncld;for(int i=0;i<temp;i++){cldArray[i]=$1->cldArray[i];}cldArray[temp]=$2;$$=createNode($2->row, $2->col, "type_decls", NULL,0,0,temp+1,cldArray);}
  ;
type_decl:ID IS type SEMICOLON 
	{struct Node *cldArray[20];cldArray[0]=$1;cldArray[1]=$3;$$=createNode($4->row, $4->col, "type_decl", NULL,0,0,2,cldArray);}
  ;
procedure_decls:procedure_decl 
	{struct Node *cldArray[20];cldArray[0]=$1;$$=createNode($1->row, $1->col, "procedure_decls", NULL,0,0,1,cldArray);}
  | procedure_decls procedure_decl 
  	{struct Node *cldArray[20];int temp=$1->ncld;for(int i=0;i<temp;i++){cldArray[i]=$1->cldArray[i];}cldArray[temp]=$2;$$=createNode($2->row, $2->col, "procedure_decls", NULL,0,0,temp+1,cldArray);}
  ;
procedure_decl:ID formal_params IS body SEMICOLON 
	{struct Node *cldArray[20];cldArray[0]=$1;cldArray[1]=$2;cldArray[2]=$4;$$=createNode($5->row, $5->col, "procedure_decl", NULL,0,0,3,cldArray);}
  | ID formal_params COLON type IS body SEMICOLON 
  	{struct Node *cldArray[20];cldArray[0]=$1;cldArray[1]=$2;cldArray[2]=$4;cldArray[3]=$6;$$=createNode($7->row, $7->col, "procedure_decl", NULL,0,0,4,cldArray);}
  ;
type:ID 
	{struct Node *cldArray[20];cldArray[0]=$1;$$=createNode($1->row, $1->col, "type", NULL,0,0,1,cldArray);}
  | ARRAY OF type 
  	{struct Node *cldArray[20];cldArray[0]=$3;$$=createNode($3->row, $3->col, "type", NULL,0,0,1,cldArray);}
  | RECORD components END 
  	{struct Node *cldArray[20];cldArray[0]=$2;$$=createNode($3->row, $3->col, "type", NULL,0,0,1,cldArray);}
  ;
components:component 
	{struct Node *cldArray[20];cldArray[0]=$1;$$=createNode($1->row, $1->col, "components", NULL,0,0,1,cldArray);}
  | components component 
  	{struct Node *cldArray[20];int temp=$1->ncld;for(int i=0;i<temp;i++){cldArray[i]=$1->cldArray[i];}cldArray[temp]=$2;$$=createNode($2->row, $2->col, "components", NULL,0,0,temp+1,cldArray);}
  ;
component:ID COLON type SEMICOLON 
	{struct Node *cldArray[20];cldArray[0]=$1;cldArray[1]=$3;$$=createNode($4->row, $4->col, "component", NULL,0,0,2,cldArray);}
  ;
formal_params:LB fp_section RB 
	{struct Node *cldArray[20];cldArray[0]=$2;$$=createNode($3->row, $3->col, "formal_params", NULL,0,0,1,cldArray);}
  | LB fp_section semi_fp_sections RB 
  	{struct Node *cldArray[20];cldArray[0]=$2;cldArray[1]=$3;$$=createNode($4->row, $4->col, "formal_params", NULL,0,0,2,cldArray);}
  | LB RB {struct Node *cldArray[20];cldArray[0]=NULL;$$=createNode($2->row, $2->col, "formal_params", NULL,0,0,0,cldArray);}
  ;
semi_fp_sections:SEMICOLON fp_section 
	{struct Node *cldArray[20];cldArray[0]=$2;$$=createNode($2->row, $2->col, "semi_fp_sections", NULL,0,0,1,cldArray);}
  | semi_fp_sections SEMICOLON fp_section 
  	{struct Node *cldArray[20];int temp=$1->ncld;for(int i=0;i<temp;i++){cldArray[i]=$1->cldArray[i];}cldArray[temp]=$3;$$=createNode($3->row, $3->col, "semi_fp_sections", NULL,0,0,temp+1,cldArray);}
  ;
fp_section:ID COLON type 
	{struct Node *cldArray[20];cldArray[0]=$1;cldArray[1]=$3;$$=createNode($3->row, $3->col, "fp_section", NULL,0,0,2,cldArray);}
  | ID comma_IDs COLON type 
  	{struct Node *cldArray[20];cldArray[0]=$1;cldArray[1]=$2;cldArray[2]=$4;$$=createNode($4->row, $4->col, "fp_section", NULL,0,0,3,cldArray);}
  ;
comma_IDs:COMMA ID 
	{struct Node *cldArray[20];cldArray[0]=$2;$$=createNode($2->row, $2->col, "comma_IDs", NULL,0,0,1,cldArray);}
  | comma_IDs COMMA ID 
  	{struct Node *cldArray[20];int temp=$1->ncld;for(int i=0;i<temp;i++){cldArray[i]=$1->cldArray[i];}cldArray[temp]=$3;$$=createNode($3->row, $3->col, "comma_IDs", NULL,0,0,temp+1,cldArray);}
  ;
comma_l_values:COMMA l_value 
	{struct Node *cldArray[20];cldArray[0]=$2;$$=createNode($2->row, $2->col, "comma_l_values", NULL,0,0,1,cldArray);}
  | comma_l_values COMMA l_value 
  	{struct Node *cldArray[20];int temp=$1->ncld;for(int i=0;i<temp;i++){cldArray[i]=$1->cldArray[i];}cldArray[temp]=$3;$$=createNode($3->row, $3->col, "comma_l_values", NULL,0,0,temp+1,cldArray);}
  ;
statement:l_value ASSIGN expression SEMICOLON 
	{struct Node *cldArray[20];cldArray[0]=$1;cldArray[1]=$3;$$=createNode($4->row, $4->col, "statement", NULL,0,0,2,cldArray);}
  | ID actual_params SEMICOLON 
 	{struct Node *cldArray[20];cldArray[0]=$1;cldArray[1]=$2;$$=createNode($3->row, $3->col, "statement", NULL,0,0,2,cldArray);}
  | READ LB l_value RB SEMICOLON 
  	{struct Node *cldArray[20];cldArray[0]=$3;$$=createNode($5->row, $5->col, "statement", NULL,0,0,1,cldArray);}
  | READ LB l_value comma_l_values RB SEMICOLON 
  	{struct Node *cldArray[20];cldArray[0]=$3;cldArray[1]=$4;$$=createNode($6->row, $6->col, "statement", NULL,0,0,2,cldArray);}
  | WRITE write_params SEMICOLON 
  	{struct Node *cldArray[20];cldArray[0]=$2;$$=createNode($3->row, $3->col, "statement", NULL,0,0,1,cldArray);}
 /* | WRITE write_params 
  	{const char *err=(char*)"expected SEMICOLON";yyerror(err);struct Node *cldArray[20];cldArray[0]=$2;$$=createNode($2->row, $2->col, "statement", NULL,0,0,1,cldArray);}*/
  | IF expression THEN END SEMICOLON 
  	{struct Node *cldArray[20];cldArray[0]=$2;$$=createNode($5->row, $5->col, "statement", NULL,0,0,1,cldArray);}
  | IF expression THEN ELSE END SEMICOLON 
  	{struct Node *cldArray[20];cldArray[0]=$2;$$=createNode($6->row, $6->col, "statement", NULL,0,0,1,cldArray);}
  | IF expression THEN ELSE statements END SEMICOLON 
  	{struct Node *cldArray[20];cldArray[0]=$2;cldArray[1]=$5;$$=createNode($7->row, $7->col, "statement", NULL,0,0,2,cldArray);}
  | IF expression THEN statements END SEMICOLON 
  	{struct Node *cldArray[20];cldArray[0]=$2;cldArray[1]=$4;$$=createNode($6->row, $6->col, "statement", NULL,0,0,2,cldArray);}
  | IF expression THEN statements ELSE END SEMICOLON 
  	{struct Node *cldArray[20];cldArray[0]=$2;cldArray[1]=$4;$$=createNode($7->row, $7->col, "statement", NULL,0,0,2,cldArray);}
  | IF expression THEN statements ELSE statements END SEMICOLON 
  	{struct Node *cldArray[20];cldArray[0]=$2;cldArray[1]=$4;cldArray[2]=$6;$$=createNode($8->row, $8->col, "statement", NULL,0,0,3,cldArray);}
  | IF expression THEN ELSIF_expression_THEN_statements END SEMICOLON 
  	{struct Node *cldArray[20];cldArray[0]=$2;cldArray[1]=$4;$$=createNode($6->row, $6->col, "statement", NULL,0,0,2,cldArray);}
  | IF expression THEN ELSIF_expression_THEN_statements ELSE END SEMICOLON 
  	{struct Node *cldArray[20];cldArray[0]=$2;cldArray[1]=$4;$$=createNode($7->row, $7->col, "statement", NULL,0,0,2,cldArray);}
  | IF expression THEN ELSIF_expression_THEN_statements ELSE statements END SEMICOLON 
  	{struct Node *cldArray[20];cldArray[0]=$2;cldArray[1]=$4;cldArray[2]=$6;$$=createNode($8->row, $8->col, "statement", NULL,0,0,3,cldArray);}
  | IF expression THEN statements ELSIF_expression_THEN_statements END SEMICOLON 
  	{struct Node *cldArray[20];cldArray[0]=$2;cldArray[1]=$4;cldArray[2]=$5;$$=createNode($7->row, $7->col, "statement", NULL,0,0,3,cldArray);}
  | IF expression THEN statements ELSIF_expression_THEN_statements ELSE END SEMICOLON 
  	{struct Node *cldArray[20];cldArray[0]=$2;cldArray[1]=$4;cldArray[2]=$5;$$=createNode($8->row, $8->col, "statement", NULL,0,0,3,cldArray);}
  | IF expression THEN statements ELSIF_expression_THEN_statements ELSE statements END SEMICOLON 
  	{struct Node *cldArray[20];cldArray[0]=$2;cldArray[1]=$4;cldArray[2]=$5;cldArray[3]=$7;$$=createNode($9->row, $9->col, "statement", NULL,0,0,4,cldArray);}
  | WHILE expression DO END SEMICOLON 
  	{struct Node *cldArray[20];cldArray[0]=$2;$$=createNode($5->row, $5->col, "statement", NULL,0,0,1,cldArray);}
  | WHILE expression DO statements END SEMICOLON 
  	{struct Node *cldArray[20];cldArray[0]=$2;cldArray[1]=$4;$$=createNode($6->row, $6->col, "statement", NULL,0,0,2,cldArray);}
  | LOOP END SEMICOLON 
  	{struct Node *cldArray[20];cldArray[0]=NULL;$$=createNode($3->row, $3->col, "statement", NULL,0,0,0,cldArray);}
  | LOOP statements END SEMICOLON 
  	{struct Node *cldArray[20];cldArray[0]=$2;$$=createNode($4->row, $4->col, "statement", NULL,0,0,1,cldArray);}
  | FOR ID ASSIGN expression TO expression DO END SEMICOLON 
  	{struct Node *cldArray[20];cldArray[0]=$2;cldArray[1]=$4;cldArray[2]=$6;$$=createNode($9->row, $9->col, "statement", NULL,0,0,3,cldArray);}
  | FOR ID ASSIGN expression TO expression DO statements END SEMICOLON 
  	{struct Node *cldArray[20];cldArray[0]=$2;cldArray[1]=$4;cldArray[2]=$6;cldArray[3]=$8;$$=createNode($10->row, $10->col, "statement", NULL,0,0,4,cldArray);}
  | FOR ID ASSIGN expression TO expression BY expression DO END SEMICOLON 
  	{struct Node *cldArray[20];cldArray[0]=$2;cldArray[1]=$4;cldArray[2]=$6;cldArray[3]=$8;$$=createNode($11->row, $11->col, "statement", NULL,0,0,4,cldArray);}
  | FOR ID ASSIGN expression TO expression BY expression DO statements END SEMICOLON 
  	{struct Node *cldArray[20];cldArray[0]=$2;cldArray[1]=$4;cldArray[2]=$6;cldArray[3]=$8;cldArray[4]=$10;$$=createNode($12->row, $12->col, "statement", NULL,0,0,5,cldArray);}
  | EXIT SEMICOLON 
  	{$$=createNode($2->row, $2->col, "statement", NULL,0,0,0,NULL);}
  | RETURN expression SEMICOLON 
  	{struct Node *cldArray[20];cldArray[0]=$2;$$=createNode($3->row, $3->col, "statement", NULL,0,0,1,cldArray);}
  | RETURN SEMICOLON 
  	{$$=createNode($2->row, $2->col, "statement", NULL,0,0,0,NULL);}
  ;
statements:statement 
	{struct Node *cldArray[20];cldArray[0]=$1;$$=createNode($1->row, $1->col, "statements", NULL,0,0,1,cldArray);}
  | statements statement 
  	{struct Node *cldArray[20];int temp=$1->ncld;for(int i=0;i<temp;i++){cldArray[i]=$1->cldArray[i];}cldArray[temp]=$2;$$=createNode($2->row, $2->col, "statements", NULL,0,0,temp+1,cldArray);}
  ;
ELSIF_expression_THEN_statements: ELSIF_expression_THEN_statement 
	{struct Node *cldArray[20];cldArray[0]=$1;$$=createNode($1->row, $1->col, "ELSIF_expression_THEN_statements", NULL,0,0,1,cldArray);}
  | ELSIF_expression_THEN_statements ELSIF_expression_THEN_statement 
  	{struct Node *cldArray[20];int temp=$1->ncld;for(int i=0;i<temp;i++){cldArray[i]=$1->cldArray[i];}cldArray[temp]=$2;$$=createNode($2->row, $2->col, "ELSIF_expression_THEN_statements", NULL,0,0,temp+1,cldArray);}
  ;
ELSIF_expression_THEN_statement:ELSIF expression THEN 
	{struct Node *cldArray[20];cldArray[0]=$2;$$=createNode($3->row, $3->col, "ELSIF_expression_THEN_statement", NULL,0,0,1,cldArray);}
  | ELSIF expression THEN statements 
  	{struct Node *cldArray[20];cldArray[0]=$2;cldArray[1]=$4;$$=createNode($4->row, $4->col, "ELSIF_expression_THEN_statement", NULL,0,0,2,cldArray);}
  ;
write_params:LB write_expr RB 
	{struct Node *cldArray[20];cldArray[0]=$2;$$=createNode($3->row, $3->col, "write_params", NULL,0,0,1,cldArray);}
  | LB write_expr comma_write_exprs RB 
  	{struct Node *cldArray[20];cldArray[0]=$2;cldArray[1]=$3;$$=createNode($4->row, $4->col, "write_params", NULL,0,0,2,cldArray);}
  | LB RB 
  	{struct Node *cldArray[20];cldArray[0]=NULL;$$=createNode($2->row, $2->col, "write_params", NULL,0,0,0,cldArray);}
  ;
comma_write_exprs:COMMA write_expr 
	{struct Node *cldArray[20];cldArray[0]=$2;$$=createNode($2->row, $2->col, "comma_write_exprs", NULL,0,0,1,cldArray);}
  | comma_write_exprs COMMA write_expr 
  	{struct Node *cldArray[20];int temp=$1->ncld;for(int i=0;i<temp;i++){cldArray[i]=$1->cldArray[i];}cldArray[temp]=$3;$$=createNode($3->row, $3->col, "comma_write_exprs", NULL,0,0,temp+1,cldArray);}
  ;
write_expr:STRING 
	{struct Node *cldArray[20];cldArray[0]=$1;$$=createNode($1->row, $1->col, "write_expr", NULL, 0, 0, 1, cldArray);}
  | expression 
  	{struct Node *cldArray[20];cldArray[0]=$1;$$=createNode($1->row, $1->col, "write_expr", NULL, 0, 0, 1, cldArray);}
  ;
expression:REAL 
	{struct Node *cldArray[20];cldArray[0]=$1;$$=createNode($1->row, $1->col, "expression", NULL, 0, 0, 1, cldArray);}
  | INTEGER 
  	{struct Node *cldArray[20];cldArray[0]=$1;$$=createNode($1->row, $1->col, "expression", NULL, 0, 0, 1, cldArray);}
  | l_value 
  	{struct Node *cldArray[20];cldArray[0]=$1;$$=createNode($1->row, $1->col, "expression", NULL, 0, 0, 1, cldArray);}
  | LB expression RB 
  	{struct Node *cldArray[20];cldArray[0]=$2;$$=createNode($3->row, $3->col, "expression", NULL, 0, 0, 1, cldArray);}
  | expression ADD expression 
  	{struct Node *cldArray[20];cldArray[0]=$1;cldArray[1]=$2;cldArray[2]=$3;$$=createNode($3->row, $3->col, "expression", NULL, 0, 0, 3, cldArray);}
  | expression SUB expression 
  	{struct Node *cldArray[20];cldArray[0]=$1;cldArray[1]=$2;cldArray[2]=$3;$$=createNode($3->row, $3->col, "expression", NULL, 0, 0, 3, cldArray);}
  | expression MULT expression 
  	{struct Node *cldArray[20];cldArray[0]=$1;cldArray[1]=$2;cldArray[2]=$3;$$=createNode($3->row, $3->col, "expression", NULL, 0, 0, 3, cldArray);}
  | expression DIVD expression 
  	{struct Node *cldArray[20];cldArray[0]=$1;cldArray[1]=$2;cldArray[2]=$3;$$=createNode($3->row, $3->col, "expression", NULL, 0, 0, 3, cldArray);}
  | expression DIV expression 
  	{struct Node *cldArray[20];cldArray[0]=$1;cldArray[1]=$2;cldArray[2]=$3;$$=createNode($3->row, $3->col, "expression", NULL, 0, 0, 3, cldArray);}
  | expression MOD expression 
  	{struct Node *cldArray[20];cldArray[0]=$1;cldArray[1]=$2;cldArray[2]=$3;$$=createNode($3->row, $3->col, "expression", NULL, 0, 0, 3, cldArray);}
  | expression OR expression 
  	{struct Node *cldArray[20];cldArray[0]=$1;cldArray[1]=$2;cldArray[2]=$3;$$=createNode($3->row, $3->col, "expression", NULL, 0, 0, 3, cldArray);}
  | expression AND expression 
  	{struct Node *cldArray[20];cldArray[0]=$1;cldArray[1]=$2;cldArray[2]=$3;$$=createNode($3->row, $3->col, "expression", NULL, 0, 0, 3, cldArray);}
  | expression GT expression 
  	{struct Node *cldArray[20];cldArray[0]=$1;cldArray[1]=$2;cldArray[2]=$3;$$=createNode($3->row, $3->col, "expression", NULL, 0, 0, 3, cldArray);}
  | expression LT expression 
  	{struct Node *cldArray[20];cldArray[0]=$1;cldArray[1]=$2;cldArray[2]=$3;$$=createNode($3->row, $3->col, "expression", NULL, 0, 0, 3, cldArray);}
  | expression EQ expression 
  	{struct Node *cldArray[20];cldArray[0]=$1;cldArray[1]=$2;cldArray[2]=$3;$$=createNode($3->row, $3->col, "expression", NULL, 0, 0, 3, cldArray);}
  | expression GE expression 
  	{struct Node *cldArray[20];cldArray[0]=$1;cldArray[1]=$2;cldArray[2]=$3;$$=createNode($3->row, $3->col, "expression", NULL, 0, 0, 3, cldArray);}
  | expression LE expression 
  	{struct Node *cldArray[20];cldArray[0]=$1;cldArray[1]=$2;cldArray[2]=$3;$$=createNode($3->row, $3->col, "expression", NULL, 0, 0, 3, cldArray);}
  | expression NEQ expression 
  	{struct Node *cldArray[20];cldArray[0]=$1;cldArray[1]=$2;cldArray[2]=$3;$$=createNode($3->row, $3->col, "expression", NULL, 0, 0, 3, cldArray);}
  | NOT expression 
  	{struct Node *cldArray[20];cldArray[0]=$1;cldArray[1]=$2;$$=createNode($2->row, $2->col, "expression", NULL, 0, 0, 2, cldArray);}
  | ADD expression 
  	{struct Node *cldArray[20];cldArray[0]=$1;cldArray[1]=$2;$$=createNode($2->row, $2->col, "expression", NULL, 0, 0, 2, cldArray);}
  | SUB expression 
  	{struct Node *cldArray[20];cldArray[0]=$1;cldArray[1]=$2;$$=createNode($2->row, $2->col, "expression", NULL, 0, 0, 2, cldArray);}
  | ID actual_params 
  	{struct Node *cldArray[20];cldArray[0]=$1;cldArray[1]=$2;$$=createNode($2->row, $2->col, "expression", NULL, 0, 0, 2, cldArray);}
  | ID comp_values 
  	{struct Node *cldArray[20];cldArray[0]=$1;cldArray[1]=$2;$$=createNode($2->row, $2->col, "expression", NULL, 0, 0, 2, cldArray);}
  | ID array_values 
  	{struct Node *cldArray[20];cldArray[0]=$1;cldArray[1]=$2;$$=createNode($2->row, $2->col, "expression", NULL, 0, 0, 2, cldArray);}
  ;
l_value:ID 
	{struct Node *cldArray[20];cldArray[0]=$1;$$=createNode($1->row, $1->col, "l_value", NULL, 0, 0, 1, cldArray);}
  | l_value LSB expression RSB 
  	{struct Node *cldArray[20];cldArray[0]=$1;cldArray[1]=$3;$$=createNode($4->row, $4->col, "l_value", NULL, 0, 0, 2, cldArray);}
  | l_value DOT ID 
  	{struct Node *cldArray[20];cldArray[0]=$1;cldArray[1]=$3;$$=createNode($3->row, $3->col, "l_value", NULL, 0, 0, 2, cldArray);}
  ;
actual_params:LB expression RB 
	{struct Node *cldArray[20];cldArray[0]=$2;$$=createNode($3->row, $3->col, "actual_params", NULL, 0, 0, 1, cldArray);}
  | LB expression comma_expressions RB 
  	{struct Node *cldArray[20];cldArray[0]=$2;cldArray[1]=$3;$$=createNode($4->row, $4->col, "actual_params", NULL, 0, 0, 2, cldArray);}
  | LB RB 
  	{struct Node *cldArray[20];cldArray[0]=NULL;$$=createNode($2->row, $2->col, "actual_params", NULL,0,0,0,cldArray);}
  ;
comma_expressions:COMMA expression 
	{struct Node *cldArray[20];cldArray[0]=$2;$$=createNode($2->row, $2->col, "comma_expressions", NULL, 0, 0, 1, cldArray);}
  | comma_expressions COMMA expression 
  	{struct Node *cldArray[20];int temp=$1->ncld;for(int i=0;i<temp;i++){cldArray[i]=$1->cldArray[i];}cldArray[temp]=$3;$$=createNode($3->row, $3->col, "comma_expressions", NULL,0,0,temp+1,cldArray);}
  ;
comp_values:LCB ID ASSIGN expression RCB 
	{struct Node *cldArray[20];cldArray[0]=$2;cldArray[1]=$4;$$=createNode($5->row, $5->col, "comp_values", NULL, 0, 0, 2, cldArray);}
  | LCB ID ASSIGN expression semi_ID_assign_expressions RCB 
  	{struct Node *cldArray[20];cldArray[0]=$2;cldArray[1]=$4;cldArray[2]=$5;$$=createNode($6->row, $6->col, "comp_values", NULL, 0, 0, 3, cldArray);}
  ;
semi_ID_assign_expressions:SEMICOLON ID ASSIGN expression 
	{struct Node *cldArray[20];cldArray[0]=$2;cldArray[1]=$4;$$=createNode($4->row, $4->col, "semi_ID_assign_expressions", NULL, 0, 0, 2, cldArray);}
  | semi_ID_assign_expressions SEMICOLON ID ASSIGN expression 
  	{struct Node *cldArray[20];cldArray[0]=$1;cldArray[1]=$3;cldArray[2]=$5;$$=createNode($5->row, $5->col, "semi_ID_assign_expressions", NULL, 0, 0, 3, cldArray);}
  ;
array_values:LAB array_value RAB 
	{struct Node *cldArray[20];cldArray[0]=$2;$$=createNode($3->row, $3->col, "array_values", NULL, 0, 0, 1, cldArray);}
  | LAB array_value comma_array_values RAB 
  	{struct Node *cldArray[20];cldArray[0]=$2;cldArray[1]=$3;$$=createNode($4->row, $4->col, "array_values", NULL, 0, 0, 2, cldArray);}
  ;
comma_array_values:COMMA array_value 
	{struct Node *cldArray[20];cldArray[0]=$2;$$=createNode($2->row, $2->col, "comma_array_values", NULL, 0, 0, 1, cldArray);}
  | comma_array_values COMMA array_value 
  	{struct Node *cldArray[20];int temp=$1->ncld;for(int i=0;i<temp;i++){cldArray[i]=$1->cldArray[i];}cldArray[temp]=$3;$$=createNode($3->row, $3->col, "comma_array_values", NULL,0,0,temp+1,cldArray);}
  ;
array_value:expression 
	{struct Node *cldArray[20];cldArray[0]=$1;$$=createNode($1->row, $1->col, "array_value", NULL, 0, 0, 1, cldArray);}
  | expression OF expression 
  	{struct Node *cldArray[20];cldArray[0]=$1;cldArray[1]=$3;$$=createNode($3->row, $3->col, "array_value", NULL, 0, 0, 2, cldArray);}
  ;

%%
