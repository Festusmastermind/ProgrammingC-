#include <iostream>
using namespace std;
main()// a c++ program that outputs to ten names 
{
	int myscores[10];
	for(int i=0; i<10; i++)
	{
		cout<<"\n\tEnter Score "<<i+1<<":";
		cin>>myscores[i];
	}
	return 0;
}
