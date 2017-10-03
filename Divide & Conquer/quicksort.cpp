#include <iostream>
#define MAX 10
using namespace std;
int partition(int [],int,int);
void QuickSort(int arr[],int low,int high)
{
	if(low<high)
	{
		int pi;
		pi=partition(arr,low,high);
		QuickSort(arr,low,pi-1);
		QuickSort(arr,pi+1,high);
	}
}
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}	
int partition(int arr[],int low,int high)
{
	int i=low-1;
	int pivot=arr[high];
	for (int j = low; j < high; ++j)
	{
		if (arr[j]<=pivot)
		{
			i=i+1;
			swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[i+1],&arr[high]);
	return i+1;
}
void Print_array(int arr[])
{
	for(int i=0;i<MAX;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}
int main()
{	
	int arr[MAX];
	cout<<"Enter an Array to sort by QuickSort Algo : ";
	for(int i=0;i<MAX;i++)
		cin>>arr[i];
	Print_array(arr);
	QuickSort(arr,0,MAX-1);
	Print_array(arr);
	return 0;
}