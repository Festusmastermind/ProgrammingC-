#include <iostream>
using namespace std;
main()
// A c++ program that calculates the factorial of N where is a positive integer 
{
	int facto_N=1;
	int N;
// the input  value for N 
    cout<<"Enter the value for N: ";
    cin>>N;
// impementing the control statement
   for (int i=1; i<=N; i++)
   {
   	facto_N=facto_N*i;
   }
	cout<<"\n The factorial of N: " <<N<<"is"<<facto_N;
	
	
	
	
}
