#include <iostream>
using namespace std;
main()
// A c++ program that calculates the summation of the first ten integers,even and odd integers in a program..
{ 
  //declaration by initialization....
    int numb=1;
    int sumnumb=0;
    int even=2;
    int sumeven=0;
    int odd=1;
    int sumodd=0;
    int count=1;
    //  this section use the do while control loop for the programming 
    do
    {
    	sumnumb=sumnumb+numb;
    	numb=numb+1;
    	sumeven=sumeven+even;
    	even=even+2;
    	sumodd=sumodd+odd;
    	odd=odd+2;
    	count=count+1;
    }
	while(count<=10);
	cout<<endl;
	// this section captures the output of the program
    cout<<"\n The total sum for the first ten numb is : " <<sumnumb<<endl;
	cout<<"\n The total sum for the first ten even integers is : "<<sumeven<<endl;
	cout<<"\n The total sum for the first ten odd integers is: " <<sumodd<<endl;
	return 0;
}
