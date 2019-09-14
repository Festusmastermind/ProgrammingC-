#include <iostream>
using namespace std;
main()
// the computation of the first odd intgers summation program
{
	int odd=1;
	int sum=0;
	int count=1;
	// implementing the control statement 
	while (count<=5)
	{
		sum=sum+odd;
		odd=odd+2;
		count=count+1;
	}
	 cout<<"\n The total summation of the first five odd integers is= "<<" "<<sum;
	 return 0;
	
}

