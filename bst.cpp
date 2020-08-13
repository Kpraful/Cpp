#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *left,*right;
};
struct node *root=NULL;
int insert(int item)
{
	if(root==NULL)
	{
		struct node *temp=new node;
		temp->data=item;
		temp->left=NULL;
		temp->right=NULL;
		root=temp;
		cout<<"Entered node is root node and the data is " <<root->data<<endl;
		return 0;
	}
	else
	{
		struct node *curr=new node;
		struct node *p=new node;
		curr=root;
		while(curr)
		{
			p=curr;
			if(item > curr->data)
			{
				curr=curr->right;
			}
			else
			curr=curr->left;
		}
		if( item > p->data )
		{
		
			struct node *temp=new node;
			temp->data = item;
			temp->right =NULL;
			temp->left = NULL;
			p->right=temp;
			cout<<"data is inserted on the right and the data is "<<p->right->data<< " with parent node "<<  p->data<<endl;
			return 0;
		}
		else
		{
			struct node *temp=new node;
			temp->data = item;
			temp->right =NULL;
			temp->left = NULL;
			p->left=temp;
			cout<<"data is inserted on the left and the data is "<< p->left->data <<" with parent node "<< p->data <<endl;
			return 0;
		}
		
	}
	
}
int main()
{
	insert(10);
	
	insert(20);
	insert(40);
	insert(2);
	return 0;
}
