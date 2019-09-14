#include <iostream>
using namespace std;
main()
// A c++ program that calculates the summation of the first ten integers,even and odd integers in a program..
{
	int numb=1;// the first interger intitialization...
	int sumnumb=0;
	int even=2;// the first even number initialization..
	int sumeven=0;
	int odd=1;
	int sumodd=0;
	int count=1;
// implementing the control statement
   while (count<=10)
   {
   	sumnumb=sumnumb+numb;
   	numb=numb+1;
   	sumeven=sumeven+even;
   	even=even+2;
   	sumodd=sumodd+odd;
   	odd=odd+2;// note here that to get the second odd number which is 3 two must be added...
   	count=count+1;//note if these code is not there then the operation will never end..
   }
	// the output is 
	cout<<"\n The total sum for the first ten numb is : " <<sumnumb<<endl;
	cout<<"\n The total sum for the first ten even integers is : "<<sumeven<<endl;
	cout<<"\n The total sum for the first ten odd integers is: " <<sumodd<<endl;
	return 0;
	
	
	
} 
