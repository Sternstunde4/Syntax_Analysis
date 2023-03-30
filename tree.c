#include "pj2.tab.h"
#include "tree.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


void freeTree(struct Node* root)
{
       if (root) {
               if(root->charval)free(root->charval);
               if(root->ncld){
               	for(int i=0;i<root->ncld;i++){
                    		free((root->cldArray)[i]);
               	}
               }
		free(root);
	}

}

struct Node *createNode(int row, int col, const char *name,char *charval, double realval, int intval, int ncld, struct Node *a[20])
{
	struct Node *nd=(struct Node*)malloc(sizeof(struct Node));
	nd->ncld=ncld;
	nd->row=row;
	nd->col=col;
	nd->name=name;
	nd->charval=charval;
	if(charval){
		nd->charval=(char*)malloc(sizeof(char)*strlen(charval));
		strcpy(nd->charval,charval);
        }
        else nd->charval=NULL;
	nd->realval=realval;
	nd->intval=intval;
	if(ncld){
		for(int i=0; i<nd->ncld; i++)
			(nd->cldArray)[i]=a[i];
	}
	else nd->cldArray[0]=NULL;
	return nd;
}
    
void treePrintLevel(struct Node *nd, int lvl)
{
	if(nd!=NULL)
	{      
		for(int i=0; i<4*lvl; i++)
			printf("-");
		printf("<%d,%d,%s,", nd->row,nd->col,nd->name);
		if(nd->charval){
			printf("%s", nd->charval);
			printf(">\n");
			}
		else if(nd->realval){
			printf("%f>\n",nd->realval);
			}
		else if(nd->intval){
			printf("%d>\n",nd->intval);
		        }
		else {
			printf("->\n");
		        }
		if(nd->ncld){
			for (int i=0; i<nd->ncld; i++) {  
				treePrintLevel((nd->cldArray)[i], lvl+1);
			}
		}
		

	}
}
 
void treePrint(struct Node *root)
{
	treePrintLevel(root, 0);
	freeTree(root);
}
