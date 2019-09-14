// A C++ PROGRAM THAT COMPUTES A QUADRACTIC EQUATION 
#include <iostream>
#include <cmath>
using namespace std;
int main()
// this section of the programming declares the variable
{
	int a,b,c;
	double r1,r2;
// this section computes the variables in the programming

 cout<<"\n Please enter the value for a: ";
 cin>>a;
 while(a<0)
 {
	cout<<"RE-enter the value for a: ";
	cout<<"It is must be greater that 0: ";
	cin>>a;
 }
 cout<<"\n Please enter the value for b: ";
 cin>>b;
 while(b<0)
 {
	cout<<"RE-enter the value for b: ";
	cout<<"It is must be greater that 0: ";
	cin>>b;
 }
 cout<<"\n Please enter the value for c: ";
 cin>>c;
 while(c<0)
 {
	cout<<"RE-enter the value for c: ";
	cout<<"It is must be greater that 0: ";
	cin>>c;
 }
// the quadratic funtion execution
 r1=(-b + (sqrt(pow(b,2)-4*a*c)))/(2*a);
 r2=(-b - (sqrt(pow(b,2)-4*a*c)))/(2*a);
// the root of the equation is displayed below
 cout<<"\n Displays the value for r1: "<<r1;
 cout<<"\n Dispalys the value for r2: "<<r2;
 return 0;
	
	
}
