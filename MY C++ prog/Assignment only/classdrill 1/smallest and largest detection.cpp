#include <iostream>
using namespace std;
main()
// A c++ program that compute and output the largest and the smallest between two intergers
{
	int x,y;
	cout<<"\n DETECTION OF LARGEST AND SMALLEST PROGRAM\n\n";
	cout<<" Enter the value for x: ";
	cin>>x;
	cout<<" Enter the value for y: ";
	cin>>y;
	// using if else control structure
	if (x<y){
		cout<<"\n Y is the largest number: ";
		cout<<"\n The output of Y is: "<<y<<endl;
	    cout<<"\n while x is the smallest number: ";
	    cout<<"\n The output of x is: "<<x<<endl;
	}
	
	else if(x>y){
		cout<<"\n Then X is the largest number: ";
		cout<<"\n The output of x is: "<<x;
		cout<<"\n While y is the smallest number: ";
		cout<<"\n The output of y is: "<<y;
	} 
	return 0;
		
	
}
