#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node* link;
};

struct Node* top=NULL;

void push(int x){
	struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
	newnode->data=x;
	newnode->link=top;
	top=newnode;
}

void pop()
{
	struct Node* temp;
	if(top==NULL)
		return;
	temp=top;
	top=top->link;
	free(temp);
}

void traverse()
{
	struct Node* temp;
	temp=top;
	while(temp){
		printf("%d\n",temp->data);
		temp=temp->link;
	}
}
int main()
{
	push(5);
	push(6);
	push(7);
	traverse();
	pop();
	pop();
	pop();
	traverse();
	return 0;
}