#include <iostream>
using namespace std;
int main()
// A c++ program that calculates the cirlce
{
	int r,code;
	float  area,cir,dia,pie;
	pie=22/7;
	cout<<"\n\t\t\t****CIRCLE PROGRAMMING*****\n";
	cout<<"\n Enter the value for r: ";
	cin>>r;
	// this section captures the interface of  the program
	cout<<"\n click 1. for the area of a circle\n";
	cout<<"\n click 2. for the calculation of circumference of a circle\n";
	cout<<"\n click 3. for the calculation of the diameter of a cicle: "<<endl<<endl;
	cin>>code;
	// using switch case control structure for the implementation
	switch(code)
	{
		case 1: area = pie*r*r;
		        cout<<"\n The area of a cirle is: "<<area<<endl;
		        break;
	    case 2: cir = 2*pie*r*r;
	            cout<<"\n The ciricumference of a cirlce is: "<<cir<<endl;
	            break;
	    case 3: dia = 2*r;
	            cout<<"\n The diameter of a circle is: "<<dia<<endl;
	            break;
	  default: cout<<"\n Sorry input out of range";
	           cout<<"\n Tyr again later";
			   return 0;		
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
