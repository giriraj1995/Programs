#include <iostream>
using namespace std;

int binar_search(int arr[],int l,int r,int no)
{
	if(r>=1)
	{
		int mid=l+(r-1)/2;
		if(arr[mid]==no)
			return mid;
		else if(arr[mid]>no)
			return binar_search(arr,0,mid-1,no);
		else
			return binar_search(arr,mid+1,r,no);
	}
	return 999;
}
int main()
{
	int a[]={
		23,42,67,76,277,445,500,760,790,810,888,900
	};
	int size=sizeof(a)/sizeof(a[0]);
	for (int i = 0; i < size; ++i)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	cout<<"Enter a digit to find in the above array using binary search : ";
	int n;
	cin>>n;

	int result=binar_search(a,0,size-1,n);
	cout<<"Index is : "<<result<<endl;
	return 0;
}
/* binary_search.CPP HAS COMPLEXITY O(LOG(n)) */