#include <iostream>
using namespace std;
main()
// A C++ program that performs calculator basic operations.
{
	int x,y,add,sub,multi;
    float div,mod;	
	// The body of the program
	cout<<"\n\t\t****** A SIMPLE CALCULATOR******\n\n";
	cout<<"**THE OPERATIONS OF THE CALCULATOR ARE AS FOLLOWS**: "<<endl<<endl;
	cout<<"\t1. ADDITION\n\n";
	cout<<"\t2. SUBTRACTION\n\n";
	cout<<"\t3. MULTIPLICATION\n\n";
	cout<<"\t4. DIVISION\n\n";
	cout<<"\t5. MODULOUS\n\n";
	// The section captures the value of the variables
	cout<<"\n Enter the value for x: ";
	cin>>x;
	cout<<"\n Enter the value for y: ";
	cin>>y;
	//The section captures the operations carried out
	add=x+y;
	sub=x-y;
	multi=x*y;
	div=x/y;
	mod=x%y;
	// this section  displays the outputs of the operation 
	cout<<"\nThe addition of: "<<x<<"+"<<y<<"="<<add<<endl;
	cout<<"\nThe subtraction of: "<<x<<"-"<<y<<"="<<sub<<endl;
	cout<<"\nThe multipication of: "<<x<<"*"<<y<<"="<<multi<<endl;
	cout<<"\nThe division of: "<<x<<"/"<<y<<"="<<div<<endl; 
	cout<<"\nThe modulous of: "<<x<<"%"<<y<<"="<<mod<<endl;
	return 0; 	
	
}
