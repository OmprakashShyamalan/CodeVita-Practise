typedef struct node
{
int data;
struct node *left,*right,*parent;
}node;
void createleft(node *root)
{
	root->left=(node*)malloc(sizeof(node));
	root->left->left=NULL;
	root->left->right=NULL;
	root->left->parent=root;
	root->left->data = root->data -1;
	createtree(root->left);
}
void createtree(node *root)
{
	if(root->data>1)
	{	
		createleft(root);
		createright(root);
	}
	else if(root->data==1)
		createleft(root);
	else
	{

	}
}