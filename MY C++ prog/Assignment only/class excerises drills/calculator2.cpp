#include <iostream>
using namespace std;
main()
//A c++ program that runs a simple calculator
{
	int x,y,add,sub,multi;
	float div,mod;
	int opcode;
	// the body of the program starts here 
	cout<<"\n\t\t ****A SIMPLE CALCULATOR*****\n\n";
	// designing the interface of the program
    cout<<" PRESS 1. for ADDITION\n\n";
	cout<<" PRESS 2. for SUBTRACTION\n\n"; 	
	cout<<" PRESS 3. for DIVISION\n\n";
	cout<<" PRESS 4. for MULTIPICATION\n\n";
	cout<<" PRESS 5. for MODULOUS\n\n";
    cout<<" PRESS 6. TO TURN OFF THE CALCULATOR\n\n";
    cin>>opcode;
	
	// using switch controlstructure for the programming of the calculator
	switch(opcode)
	{
		case 1: cout<<"\nEnter the value for x: ";
		        cin>>x;
				cout<<"\nEnter the value for y: ";
				cin>>y;
				add=x+y; 
		        cout<<"\nThe addition of: "<<x<<"+"<<y<<"="<<add<<endl;
		        break;
		case 2: cout<<"\nEnter the vaue for x: ";
		        cin>>x;
		        cout<<"\nEnter the value for y: ";
		        sub=x-y;
		        cin>>y;
		        cout<<"\nThe subtraction of: "<<x<<"-"<<y<<"="<<sub<<endl;
		        break;
	   case 3:  cout<<"\nEnter the vaue for x: ";
		        cin>>x;
		        cout<<"\nEnter the value for y: ";
		        cin>>y;
		        div=x/y;
		        cout<<"\nThe division of: "<<x<<"/"<<y<<"="<<div<<endl;
		        break;
	   case 4:  cout<<"\nEnter the vaue for x: ";
		        cin>>x;
		        cout<<"\nEnter the value for y: ";
		        cin>>y;
		        multi=x*y;
		        cout<<"\nThe multiplication of: "<<x<<"-"<<y<<"="<<sub<<endl;
		        break;
	  case 5:   cout<<"\nEnter the vaue for x: ";
		        cin>>x;
		        cout<<"\nEnter the value for y: ";
		        cin>>y;
		        mod=x%y;
		        cout<<"\nThe modulous of: "<<x<<"%"<<y<<"="<<mod<<endl;
		        break;
	  case 6:   cout<<"\nSwitchiiiiingggg offffff!!!!!!\a";
	            break;
	 default:   cout<<"\nSorry input out of range";
	            break;
	            
		
	}	
	
	return 0;
	
	
	
}
