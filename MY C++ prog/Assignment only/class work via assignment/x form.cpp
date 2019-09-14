/* NAME: SUNKANMI ADU
   MATRIC NO: 130404107
   DEPT: COMPUTER SCIENCE
   A C++ PROGRAM THAT OBTAIN A FORMULAR FOR X....*/
#include <iostream>
using namespace std;
main()
// The secion below computes the variable used 
{
	int v,h,c;
	double x;
	float num,den;
	// inputing the values of the variables used for the programming
	v=2;
	h=4;
	c=5;
	num=2/3.0*v*v*h;
	den=c*c;
	x=num/den;
	cout<<" \nThe result is x= " <<x;
	return 0; 	
}
