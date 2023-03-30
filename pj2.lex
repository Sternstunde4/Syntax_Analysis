%{
#include "ctype.h"
#include <string.h>
#include "pj2.tab.h"
#include "tree.h"
using namespace std;

int lines=1;
int words=0;
int row=1;
int col=1;

void warning(const char *err,int row,int col){
    fprintf(stderr,"\nError: %s at (%d,%d)\n",err,row,col);
}

%}
%option     yylineno
%option     nounput
%option     noyywrap

DIGIT       [0-9]
INTEGER     {DIGIT}+
REAL        {DIGIT}+"."{DIGIT}*
KEYWORD     AND|ARRAY|BEGIN|BY|DIV|DO|ELSE|ELSIF|END|EXIT|FOR|IF|IN|IS|LOOP|MOD|NOT|OF|OR|OUT|PROCEDURE|PROGRAM|READ|RECORD|RETURN|THEN|TO|TYPE|VAR|WHILE|WRITE
STRING      \"[^"\n]*\"
ID          [a-zA-Z][a-zA-Z0-9]*
OPERATOR    ":="|"+"|"-"|"*"|"/"|"<"|"<="|">"|">="|"="|"<>"
DELIMITER   ":"|";"|","|"."|"("|")"|"["|"]"|"{"|"}"|"[<"|">]"
COMMENT     "(*"([^\*]|(\*)*[^\*\)])*(\*)*"*)"
UNTERSTR    \"[^"\t\n]*
UNTERCOM    "(*"([^\*]|(\*)*[^\*\)])*(\*)*
BADCHAR     [^DIGITa-zA-Z\t\nOPERATORDELIMITER"]

%%
"\n"        {++row;col=1;lines++;}
{KEYWORD}   {col+=yyleng;words++;
            if(strcmp(yytext,"AND")==0){yylval=createNode(row, col, "KEYWORD", yytext, 0, 0, 0, NULL);return AND;}
            else if(strcmp(yytext,"ARRAY")==0){yylval=createNode(row, col, "KEYWORD", yytext, 0, 0, 0, NULL);return ARRAY;}
            else if(strcmp(yytext,"BEGIN")==0){yylval=createNode(row, col, "KEYWORD", yytext, 0, 0, 0, NULL);return BEGIN_1;}
            else if(strcmp(yytext,"BY")==0){yylval=createNode(row, col, "KEYWORD", yytext, 0, 0, 0, NULL);return BY;}
            else if(strcmp(yytext,"DIV")==0){yylval=createNode(row, col, "KEYWORD", yytext, 0, 0, 0, NULL);return DIV;}
            else if(strcmp(yytext,"DO")==0){yylval=createNode(row, col, "KEYWORD", yytext, 0, 0, 0, NULL);return DO;}
            else if(strcmp(yytext,"ELSE")==0){yylval=createNode(row, col, "KEYWORD", yytext, 0, 0, 0, NULL);return ELSE;}
            else if(strcmp(yytext,"ELSIF")==0){yylval=createNode(row, col, "KEYWORD", yytext, 0, 0, 0, NULL);return ELSIF;}
            else if(strcmp(yytext,"END")==0){yylval=createNode(row, col, "KEYWORD", yytext, 0, 0, 0, NULL);return END;}
            else if(strcmp(yytext,"EXIT")==0){yylval=createNode(row, col, "KEYWORD", yytext, 0, 0, 0, NULL);return EXIT;}
            else if(strcmp(yytext,"FOR")==0){yylval=createNode(row, col, "KEYWORD", yytext, 0, 0, 0, NULL);return FOR;}
            else if(strcmp(yytext,"IF")==0){yylval=createNode(row, col, "KEYWORD", yytext, 0, 0, 0, NULL);return IF;}
            else if(strcmp(yytext,"IN")==0){yylval=createNode(row, col, "KEYWORD", yytext, 0, 0, 0, NULL);return IN;}
            else if(strcmp(yytext,"IS")==0){yylval=createNode(row, col, "KEYWORD", yytext, 0, 0, 0, NULL);return IS;}
            else if(strcmp(yytext,"LOOP")==0){yylval=createNode(row, col, "KEYWORD", yytext, 0, 0, 0, NULL);return LOOP;}
            else if(strcmp(yytext,"MOD")==0){yylval=createNode(row, col, "KEYWORD", yytext, 0, 0, 0, NULL);return MOD;}
            else if(strcmp(yytext,"NOT")==0){yylval=createNode(row, col, "KEYWORD", yytext, 0, 0, 0, NULL);return NOT;}
            else if(strcmp(yytext,"OF")==0){yylval=createNode(row, col, "KEYWORD", yytext, 0, 0, 0, NULL);return OF;}
            else if(strcmp(yytext,"OR")==0){yylval=createNode(row, col, "KEYWORD", yytext, 0, 0, 0, NULL);return OR;}
            else if(strcmp(yytext,"OUT")==0){yylval=createNode(row, col, "KEYWORD", yytext, 0, 0, 0, NULL);return OUT;}
            else if(strcmp(yytext,"PROCEDURE")==0){yylval=createNode(row, col, "KEYWORD", yytext, 0, 0, 0, NULL);return PROCEDURE;}
            else if(strcmp(yytext,"PROGRAM")==0){yylval=createNode(row, col, "KEYWORD", yytext, 0, 0, 0, NULL);return PROGRAM;}
            else if(strcmp(yytext,"READ")==0){yylval=createNode(row, col, "KEYWORD", yytext, 0, 0, 0, NULL);return READ;}
            else if(strcmp(yytext,"RECORD")==0){yylval=createNode(row, col, "KEYWORD", yytext, 0, 0, 0, NULL);return RECORD;}
            else if(strcmp(yytext,"RETURN")==0){yylval=createNode(row, col, "KEYWORD", yytext, 0, 0, 0, NULL);return RETURN;}
            else if(strcmp(yytext,"THEN")==0){yylval=createNode(row, col, "KEYWORD", yytext, 0, 0, 0, NULL);return THEN;}
            else if(strcmp(yytext,"TO")==0){yylval=createNode(row, col, "KEYWORD", yytext, 0, 0, 0, NULL);return TO;}
            else if(strcmp(yytext,"TYPE")==0){yylval=createNode(row, col, "KEYWORD", yytext, 0, 0, 0, NULL);return TYPE;}
            else if(strcmp(yytext,"VAR")==0){yylval=createNode(row, col, "KEYWORD", yytext, 0, 0, 0, NULL);return VAR;}
            else if(strcmp(yytext,"WHILE")==0){yylval=createNode(row, col, "KEYWORD", yytext, 0, 0, 0, NULL);return WHILE;}
            else if(strcmp(yytext,"WRITE")==0){yylval=createNode(row, col, "KEYWORD", yytext, 0, 0, 0, NULL);return WRITE;}
            else ;
            }

{ID}        {
            if (yyleng>255)
                 {warning("an overly long identifier",row,col);col+=yyleng;return OLID;}
            else {col+=yyleng;words++;yylval=createNode(row, col, "ID",yytext, 0, 0, 0, NULL);
             return ID;}            
            } 

":"         {col+=yyleng;words++;yylval=createNode(row, col, "DELIMITER",yytext, 0, 0, 0, NULL);return COLON;}
";"         {col+=yyleng;words++;yylval=createNode(row, col, "DELIMITER",yytext, 0, 0, 0, NULL);return SEMICOLON;}
","         {col+=yyleng;words++;yylval=createNode(row, col, "DELIMITER",yytext, 0, 0, 0, NULL);return COMMA;}
"."         {col+=yyleng;words++;yylval=createNode(row, col, "DELIMITER",yytext, 0, 0, 0, NULL);return DOT;}
"("         {col+=yyleng;words++;yylval=createNode(row, col, "DELIMITER",yytext, 0, 0, 0, NULL);return LB;}
")"         {col+=yyleng;words++;yylval=createNode(row, col, "DELIMITER",yytext, 0, 0, 0, NULL);return RB;}
"[<"         {col+=yyleng;words++;yylval=createNode(row, col, "DELIMITER",yytext, 0, 0, 0, NULL);return LSB;}
">]"         {col+=yyleng;words++;yylval=createNode(row, col, "DELIMITER",yytext, 0, 0, 0, NULL);return RSB;}
"{"         {col+=yyleng;words++;yylval=createNode(row, col, "DELIMITER",yytext, 0, 0, 0, NULL);return LCB;}
"}"         {col+=yyleng;words++;yylval=createNode(row, col, "DELIMITER",yytext, 0, 0, 0, NULL);return RCB;}
"[<"         {col+=yyleng;words++;yylval=createNode(row, col, "DELIMITER",yytext, 0, 0, 0, NULL);return LAB;}
">]"         {col+=yyleng;words++;yylval=createNode(row, col, "DELIMITER",yytext, 0, 0, 0, NULL);return RAB;}

":="        {col+=yyleng;words++;yylval=createNode(row, col, "OPERATOR",yytext, 0, 0, 0, NULL);return ASSIGN;}
"+"         {col+=yyleng;words++;yylval=createNode(row, col, "OPERATOR",yytext, 0, 0, 0, NULL);return ADD;}
"-"         {col+=yyleng;words++;yylval=createNode(row, col, "OPERATOR",yytext, 0, 0, 0, NULL);return SUB;} 
"*"         {col+=yyleng;words++;yylval=createNode(row, col, "OPERATOR",yytext, 0, 0, 0, NULL);return MULT;}
"/"         {col+=yyleng;words++;yylval=createNode(row, col, "OPERATOR",yytext, 0, 0, 0, NULL);return DIVD;}
"<"         {col+=yyleng;words++;yylval=createNode(row, col, "OPERATOR",yytext, 0, 0, 0, NULL);return LT;}
"<="        {col+=yyleng;words++;yylval=createNode(row, col, "OPERATOR",yytext, 0, 0, 0, NULL);return LE;}
">"         {col+=yyleng;words++;yylval=createNode(row, col, "OPERATOR",yytext, 0, 0, 0, NULL);return GT;}
">="        {col+=yyleng;words++;yylval=createNode(row, col, "OPERATOR",yytext, 0, 0, 0, NULL);return GE;}
"="         {col+=yyleng;words++;yylval=createNode(row, col, "OPERATOR",yytext, 0, 0, 0, NULL);return EQ;}
"<>"        {col+=yyleng;words++;yylval=createNode(row, col, "OPERATOR",yytext, 0, 0, 0, NULL);return NEQ;}
{REAL}      {
            if (yyleng-1<32)
                 {col+=yyleng;yylval=createNode(row, col, "REAL",NULL, atof(yytext), 0, 0, NULL);
            return REAL;}
            else {warning("an out of range real",row,col);col+=yyleng;return ORREAL;}
      
            }
{STRING}    {
	    int tab_count=0;
            for(int i=0;i<yyleng;i++){
                 if(yytext[i]=='\t')
                 tab_count++;
             }
            if(tab_count==1){warning("an invalid string with tab in it",row,col);col+=yyleng;return TABSTR;}
            else if(tab_count>1){warning("an invalid string with many tabs in it",row,col);col+=yyleng;return TABSSTR;}
            else{
            	if(yyleng>255+2){warning("an overly long string",row,col);col+=yyleng;return OLSTR;}
            	else {col+=yyleng;yylval=createNode(row, col, "STRING",yytext, 0, 0, 0, NULL);
            return STRING;}
            }
            }
{INTEGER}   {
            if (yyleng>8)
                 {warning("an out of range integer",row,col);col+=yyleng;return ORINT;}
            else {col+=yyleng;yylval=createNode(row, col, "INTEGER",NULL, 0, atoi(yytext), 0, NULL);
            return INTEGER;}
            }
"\t"        {col+=4;}
" "         {col+=1;}
{COMMENT}   {
	     for(int i=0;i<yyleng;i++){
	     	 if(yytext[i]=='\n'){row++;col=1;lines++;} 
	     }
	     /*ignore*/
	     }
{BADCHAR}   {warning("a bad character (bell)",row,col);col+=yyleng;return BADCHAR;}
{UNTERSTR}  {warning("an unterminated string",row,col);col=1;return UNTERSTR;}
{UNTERCOM}  {warning("an unterminated comment",row,col);col+=yyleng;return UNTERCOM;}

%%
