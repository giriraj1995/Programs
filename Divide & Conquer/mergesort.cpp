#include <iostream>
using namespace std;
void merge(int a[],int low,int mid,int high)
{
	int i,j,k;
	int n1=mid-low+1;
	int n2=high-mid;
	int L[n1],R[n2];

	for (i = 0; i < n1; ++i)
		L[i]=a[low+i];
	for(j=0; j < n2; ++j)
		R[j]=a[mid+1+j];

	i=0;
	j=0;
	k=low;
	while (i < n1 && j < n2)
	{
		if(L[i]<=R[j])
		{
			a[k]=L[i];
			i++;
		}		
		else
		{
			a[k]=R[j];
			j++;
		}
		k++;
	}

	while(i<n1)
	{
		a[k]=L[i];
		i++;
		k++;
	}
	while(j<n2)
	{
		a[k]=R[j];
		j++;
		k++;
	}
}
void Print_array(int arr[],int n)
{
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}
void mergesort(int a[],int low,int high)
{
	if(high>low)
	{
		int mid=low + (high-low)/2;
		mergesort(a,low,mid);
		mergesort(a,mid+1,high);
		merge(a,low,mid,high);
	}
		Print_array(a,high+1);

}

int main()
{
	int a[]={5,43,21,30,50,90,70};
	int size=sizeof(a)/sizeof(a[0]);
	Print_array(a,size);

	mergesort(a,0,size-1);
	return 0;
}