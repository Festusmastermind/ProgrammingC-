/* NAME- SUNKANMI ADU
  MATRIC NO-130404107
  DEPT- COMPUTER SCIENCE
  A C++ PROGRAM THAT CALCULATE THE PRODUCT AND AVERAGE OF TWO NUMBERS */
#include <iostream>
using namespace std;
int main()
// this section of the programming involves the declaration of the variables
{
	int num1;
	int num2;
	float prod;
	double avg;
	// this section captures data from the num1 and 2 
	cout<<"please enter the value for the first varialbe num1: ";
	cin>>num1;
	cout<<"\nplease enter the value for the first variable num2: ";
	cin>>num2;
	// this section declares the operation of the variables
	 prod=num1*num2;
	 avg=prod/2.0;
	 // this section displays the output of the two operatons stated above
	 cout<<"\ndispay the value for prod:"<<prod;
	 cout<<"\ndispaly the value for avg:"<<avg;
	 return 0;
	
}
