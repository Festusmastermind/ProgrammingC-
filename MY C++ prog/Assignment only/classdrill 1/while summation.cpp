#include <iostream>
using namespace std; 
main()
// A c++ program that outputs the calculate and output the sum of every third integer, begining with i=2 using while, do- while, for
{
	int sum=0;
	int count=2;
	while(count<100)
	{
		sum=sum+count;
		count=count+3;
		cout<<count<<endl;
	}
	cout<<"\n the output of the summation is :" <<sum<<endl;
}
