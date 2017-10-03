#include<iostream>
using namespace std;
int run(){
	int static num=7;
	return num--;
}
int main()
{
   for (run();run();run())
   {
   	cout<<run()<<endl;
   }
    return 0;
}