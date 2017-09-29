#include <iostream>
using namespace std;
int linear_search(int *a,int n)
{
	for (int i = 0; i < 10; ++i)
	{
		if(a[i]==n)
			return i+1;
	
	}
	return 999;
}
int main()
{
	int a[10]={2,5,7,5,88,44,33,56,34,98};
	cout<<"The array is : ";
	for (int i = 0; i < 10; ++i)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	cout<<"Enter a No to search in array : ";
	int n;
	cin>>n;
	int index=linear_search(a,n);
	cout<<"Index of the array where the element resides : "<<index<<endl;
	return 0;
}

	/* linear_search.CPP HAS COMPLEXITY O(N) BECAUSE OF N ELEMENTS IN THE ARRAY 
	THIS IS NOT DIVIDE & CONQUER*/
