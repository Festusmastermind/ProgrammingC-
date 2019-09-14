#include <iostream>
using namespace std;
main()//an array examples that requies the inputting of and later shows its  displaying 10 number in an array size of 10........
{
	int myscores[10];
	for(int i=0; i<10; i++)
	{
		cout<<"\n\tEnter Score "<<i+1<<":";// this is will serve as the index for the value inputted
		cin>>myscores[i];
	}
}
