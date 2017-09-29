#include <stdio.h>
#include <iostream>
using namespace std;
#define n 6
int arr[n];
void _initialize()
{
	cout<<"Enter 6 digits : ";
	for(int i=0;i<n;i++)
		cin>>arr[i];
}
void bubble_sort()
{
	int j,i,temp=0;
	for(i = 0 ; i < n-1 ; i++)
	{
		for (j = 0; j < n-i-1; j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
void display()
{
	cout<<endl;
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<"  ";
	}
}
int main()
{
	_initialize();
	bubble_sort();
	display();
	return 0;
}