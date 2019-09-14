#include <iostream>
using namespace std;
main()
// A c++ program that computes the summation of the first five even five integers
{
	int even=2;
	int sum=0;
	int count=1;
	// implementing the control statement
	while (count<=5)
	{
		sum=sum+even;
		even=even+2;
		count=count+1;
	}
	// then the output is
	cout<<"\n The total sum of the first five even integers is displayed : "<<sum;
	return 0;
	
	
	
	
}
