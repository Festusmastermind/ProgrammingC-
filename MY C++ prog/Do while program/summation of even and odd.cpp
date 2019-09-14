#include <iostream>
using namespace std;
main()
// A c++ program that calculates the summation of the first ten even and odd integers 
{
	int even=2;
	int sumeven=0;
	int odd=1;
	int sumodd=0;
	int count=1;
// implementing the control statement
  while (count<=10){
  	sumeven=sumeven+even;
  	even=even+2;
  	sumodd=sumodd+odd;
  	odd=odd+2;
  	count=count+1;
  	
  }
	cout<<"\n the total sum of the first 10 even and odd integers is: " <<sumeven<<","<<sumodd;
	return 0;
	
	
}
