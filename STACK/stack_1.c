#include <stdio.h>
#include <stdlib.h>

struct Stack{
	int top;
	unsigned capacity;
	int* array;
};

struct Stack* createstack(unsigned n)
{
	struct Stack* stack=(struct Stack*)malloc(sizeof(struct Stack));
	stack->top=-1;
	stack->capacity=n;
	stack->array=(int*)malloc(stack->capacity * sizeof(int));
	return stack;
}
int isFull(struct Stack* stack)
{
	return stack->top==stack->capacity-1;
}
int isEmpty(struct Stack* stack)
{
	return stack->top==-1;
}
void push(struct Stack* stack,int data)
{
	if(isFull(stack))
		return;
	stack->array[++stack->top]=data;
	printf("%d Pushed into Stack \n",data);
}
int pop(struct Stack* stack)
{
	if(isEmpty(stack))
		return 999;
	return stack->array[stack->top--];
}
int main()
{
	struct Stack* stack=createstack(1000);
	push(stack,10);
	push(stack,20);
	printf("%d popped\n",pop(stack));
	printf("%d popped\n",pop(stack));
	return 0;
}