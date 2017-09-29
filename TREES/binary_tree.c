#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct node* newnode(int element)
{
	struct node* nnode=(struct node*)malloc(sizeof(struct node));
	nnode->data=element;
	nnode->left=NULL;
	nnode->right=NULL;
	return(nnode);
}
void traverse(struct node* node)
{
	if(node==NULL)
	{
		return;
	}
	else
	{
		traverse(node->left);
		printf("%d\n",node->data);
		traverse(node->right);
	}
}
struct node* insert(struct node* node,int element)
{
	if(node==NULL)
	{
		node=newnode(element);
		return node;
	}
	else
	{
		if(element>=node->data)
			node->right=insert(node->right,element);
		else
			node->left=insert(node->left,element);
		return node;
	}
}
int main()
{
	struct node *root;
	int n;
	printf("Enter no of elements in the tree to be inserted : ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		root=insert(root,a[i]);
	}
	traverse(root);
	return 0;
}