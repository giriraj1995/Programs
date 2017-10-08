#include <iostream>
using namespace std;
struct BSTNode
{
	int item;
	struct BSTNode *left;
	struct BSTNode *right;
};
struct BSTNode* newnode(int data)
{
	struct BSTNode *temp=(struct BSTNode*)malloc(sizeof(struct BSTNode)) ;
	temp->item=data;
	temp->left=NULL;
	temp->right=NULL;

	return temp;a
}
struct BSTNode* insert(struct BSTNode* node,int data)
{
	if (node==NULL)
		return newnode(data);


	if(node->item > data)
		 node->left=insert(node->left,data);
	else if(node->item < data)
		 node->right=insert(node->right,data);
	return node;
}
struct BSTNode* minValNode(struct BSTNode* node)
{
	struct BSTNode* current=node;

	while(current->left!=NULL)
	{
		current=current->left;
	}

	return current;
}
struct BSTNode* delete(struct BSTNode* root,int data)
{
	if(root==NULL)
		return root;

	if(data > root->item)
		root->right=delete(root->right,data);
	else if(data < root->item)
		root->left=delete(root->left,data);
	else
	{
		if(root->left==NULL)
		{
			struct BSTNode* temp=root->right;
			free(root);
			return temp;
		}
		if(root->right==NULL)
		{
			struct BSTNode* temp=root->left;
			free(root);
			return temp;
		}
	}

}
void print_tree(struct BSTNode* node)
{
	if(node!=NULL)
	{	
		print_tree(node->left);
		cout<<node->item<<" ";
		print_tree(node->right);
	}
}
int main()
{
	int a[10]={3,6,5,8,1,9,0,2,4,7};
	struct BSTNode *root=NULL;
	for(int i=0;i<10;i++)
	{
		root=insert(root,a[i]);
	}
	print_tree(root);
	return 0;
}