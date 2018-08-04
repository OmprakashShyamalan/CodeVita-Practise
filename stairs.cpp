#include <iostream>
#include<stdlib.h>
using namespace std;
class Stairs
{
	private:
		int data;
		Stairs *left;
		Stairs *right;
		Stairs *root;
	public:
		Stairs()
		{
			data=0;
			left='\0';
			right='\0';
			root='\0';
		}
		Stairs(int n)
		{
			data=n;
			left='\0';
			right='\0';
			root='\0';
		}
		void create()
		{
			if(data==0)
			{
				print();
			}
			else if(data==1)
			{
				left=new Stairs(data-1);
				left->root=this;
				left->create();
			}
			else
			{
				left=new Stairs(data-1);
				left->root=this;
				left->create();
				right=new Stairs(data-2);
				right->root=this;
				right->create();
			}
		}
		void print()
		{		
			Stairs *temp=this;
			while(temp!='\0')
			{
				if(temp->data==0)
					cout<<"\nG ";
				else
					cout<<temp->data<<" ";
				temp=temp->root;
			}
		}
};
int main()
{
	int n;
	Stairs *start;
	cout<<"Enter The No. of Steps:";
	cin>>n;
	start=new Stairs(n);
	start->create();
	return 0;
}