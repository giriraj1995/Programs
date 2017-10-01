#include <iostream>
using namespace std;
int main()
{
	int k=4;
	int *const p=&k;
	int r=3;
	p=&r;
	cout<<p;
	return 0;
}