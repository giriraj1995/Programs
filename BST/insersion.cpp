#include <iosteam>
using namespace std;
struct BSTNode
{
	int item;
	struct BSTNode *left;
	struct BSTNode *right;
};
struct BSTNode* newnode(int data)
{
	struct BSTNode *temp=(struct BSTNode*)malloc(sizeof(struct BSTNode));
	temp->item=data;
	temp->left=NULL;
	temp->right=NULL;

	return temp;
}
struct BSTNode* insert(struct BSTNode* node,int data)
{
	if (node=NULL)
		return newnode(data);
	if(node->item > data)
		 node->left=insert(node->left,data);
	else if(node->item < data)
		 node->right=insert(node->right,data);
	return node;
}
int main()
{
	int a[10]={3,6,5,8,1,9,0,2,4,7};
	struct BSTNode *node=(struct BSTNode*)malloc(sizeof(struct BSTNode));
	node->left=NULL;
	node->right=NULL;
	node->item=a[0];
	for(int i=1;i<10;i++)
	{
		insert(node,a[i]);
	}
	return 0;
}