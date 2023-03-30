struct Node
{
    int row;
    int col;
    const char *name;
    char *charval;
    double realval;
    int intval;
    struct Node *cldArray[20];
    int ncld;
};
void freeTree(struct Node* root);
struct Node *createNode(int row, int col, const char *name,char *charval, double realval, int intval, int ncld, struct Node *a[]);
void treePrintLevel(struct Node *nd, int lvl);
void treePrint(struct Node * root);

