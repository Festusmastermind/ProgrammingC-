/* NAME:SUNKANMI ADU
   DEPARTMENT-COMPUTER SCIENCE
   MATRIC NO- 130404107
   A C++ PROGRAM THAT CALCULATE THE AREA OF TRIANGLE */
#include <iostream>
using namespace std;
main()
{
	int B;
	int H;
	float A;
	/* this section declares the contents of the variables
	  B which is the base 
	  H which is the height
	  A which is the area of the triangle*/
	// inputing the values of the variable
	cout<<"enter the value for B: ";
	cin>>B;
	cout<<"enter the value for H: ";
	cin>>H;
	A=(B*H)/2.0;
	cout<<"print the area of the triangle: " <<A;
	return 0;
	
	
}
