#include<stdio.h>
#include<stdlib.h>
typedef struct Steps node;
struct Steps
{
	int data;
	node* left;
	node* right;
	node* root;
};
void print(node*);
node* newnode(int n)
{
	node* temp=(node*)malloc(sizeof(node));
	temp->data=n;
	temp->left='\0';
	temp->right='\0';
	temp->root='\0';
	return temp;
}
void create(node* start)
{
	if((start->data)==0)
	{
		print(start);
	}
	else if((start->data)==1)
	{
		start->left=newnode((start->data)-1);
		start->left->root=start;
		create(start->left);
	}
	else
	{
		start->left=newnode((start->data)-1);
		start->left->root=start;
		create(start->left);
		start->right=newnode((start->data)-2);
		start->right->root=start;
		create(start->right);
	}
}
void print(node* end)
{
	node* temp=end;
	while(temp!='\0')
	{
		if(temp->data==0)
			printf("\nG ");
		else
			printf("%d ",temp->data);
		temp=temp->root;
	}
	
}
int main()
{
node* start;
int n;
printf("Enter The Steps Value:");
scanf("%d",&n);
start=newnode(n);
create(start);
getch();
return 0;
}
