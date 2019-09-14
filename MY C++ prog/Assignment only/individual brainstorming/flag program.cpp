#include <iostream>
using namespace std;
int main()
/* A c++ switch case program that examine the value of an integer variable called flag in which 
 prints out some messages depending on the value selected*/
 {
 	int flag;
 	/* computing the body of the program 
 	cout<<"\n         FLAG PROGRAM   "<<endl;
 	cout<<"      ......................"<<endl;
 	cout<<"\n Enter Button 1, if HOT\n\n";
 	cout<<"\n Enter Button 2, if LUKEWARM\n\n";
 	cout<<"\n Enter Button 3, if COLD\n\n"; */
 	cout<<"\n\t\tFlAG PROGRAM ";
 	cout<<"\n\nEnter a value for a flag: ";
 	cin>>flag;
 	// the switch case is implemented int this section 
 	switch(flag)
 	{
 		case 1: cout<<"\n Button 1 is entered\n\n";
 		        cout<<"\n Printed message declared is HOT";
 		        break;
     	case 2: cout<<"\n Button 2 is entered\n\n";
 		        cout<<"\n  printed message is LUKEWARM";
 		        break;
 	 	case 3: cout<<"\n Button 3 is entered\n\n";
 		        cout<<"\n Printed message is COLD ";
 		        break;
 	    default: cout<<"\n Your input is out of ramge";
 		         cout<<"\n Try again later ";
 		         break;
 		return 0;
 		
 	}
 	
 	
 	
 	
 	
 	
 }
