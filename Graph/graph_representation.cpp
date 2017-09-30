#include <iostream>
using namespace std;
struct AdjListNode{
	int des;
	struct AdjListNode* next;
};
struct AdjList{
	struct AdjListNode* head;
};
struct Graph{
	int V;
	struct AdjList* array;
};
struct AdjListNode* newNode(int d)
{
	struct AdListNode* node = (struct AdjListNode*)malloc(sizeof(struct AdjListNode));
	node->des=d;
	node->next=NULL;

	return node;
}
struct Graph* newGraph(int ver)
{
	struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
	graph->V=ver;

	graph->array = (struct AdjList*)malloc(sizeof(struct AdjList) * ver);

	for (int i = 0; i < graph->V; ++i)
		graph->array[i].head=NULL;

	return graph;
}
struct Graph* AddEdge(struct Graph*,int src,int des)
{
	struct AdListNode* newnode = newNode(des);
	newnode->next=graph->array[src].head;
	graph->array[src].head= newnode;


	newnode = newNode(src);
	newnode->next=graph->array[des].head;
	graph->array[des].head= newnode;

}
void printGraph(struct Graph* graph)
{
	struct AdjListNode* temp = (struct AdjListNode*)malloc(sizeof(struct AdjListNode));
	for (int i = 0; i < graph->V; ++i)
	{
		temp=graph->array[i].head;
		cout<<i<<endl;
		while(temp!=NULL)
		{
			cout<<" -- >"<<temp->des;
			temp=temp->next;
		}
	}

	free(temp);
}
int main()
{
	int V=5;
	struct Graph* graph = newGraph(V);
	AddEdge(graph, 0, 1);
    AddEdge(graph, 0, 4);
    AddEdge(graph, 1, 2);
    AddEdge(graph, 1, 3);
    AddEdge(graph, 1, 4);
    AddEdge(graph, 2, 3);
    AddEdge(graph, 3, 4);

    printGraph(graph);
return 0;
}