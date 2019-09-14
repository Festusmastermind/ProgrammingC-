#include <iostream>
using namespace std;
int main()
/* A c++ switch case program that examine the value of an integer variable called flag in which 
 prints out some messages depending on the value selected,,,,,!!!
 note that in this program there is no interface for the switch case
 the reason was that we have alredy declared flag as a int..thus recognises the cases because they are numeric...*/ 
{
	int flag;
	cout<<"\n\t\t\t***VALUE FLAG PROGRAM***";
	for(;;)//note that the use of this for is ifinite looping...
	{
		cout<<"\n\n\tAssigned a value for flag: ";
	cin>>flag;
	switch(flag)
    {
    	case 0: cout<<"\n\tThe message printed is";
		        cout<<"\n\tforgot to put fire ";
    	        break;
    	case 1: cout<<"\n\tThe messaage printed is";
    	        cout<<"\n\tHot";
    	        break;
    	case 2: cout<<"\n\tThe messaage printed is";
    	        cout<<"\nLukeWarm";
    	        break;
    	case 3: cout<<"\n\t\t\tThe messaage printed is";
    	        cout<<"\n\tCold";
    	        break;
    	default: if(flag<0)
    	         {
    	         	cout<<"\n\tThe message printed out is";
    	            cout<<"\n\tBad Water";
    	         }
    	         else {
    	         	  cout<<"\n\tSorry input out of range";
    	              cout<<"\n\tYou can re-enter any  appropriate value for flag here: ";
    	              cin>>flag;
    	              break;
    	         }
    	
    	
    	
     }
	
	
	
	
	
	
	
	}
	
	
	
	
	
	
	
	
	
	
}
