#include <iostream>
using namespace std;
int main()
// A c++ program that shortlist the type of the weight status a person is 
{
	float H,W;
	double BMI;
	
	//This section captures the data from the inputs
	cout<<"\nEnter the value for h:";
	cin>>H;
	cout<<"\nEnter the value for W: ";
	cin>>W;
	// this section captures the calculation
	H=H/100;// note that the weight is alraedy entered in kg..... 
	BMI=(W/(H*H));
	//using the control structure if else if for the programming
    if(BMI<18.5)
	{
	  cout<<"\nThe person is underweight:"<<BMI<<"m"<<"/"<<"kg";
    }
    else if((BMI>=18.5)&&(BMI<25))
	{
	  cout<<"\nThe person is of normal weight"<<BMI<<"m"<<"/"<<"kg";
	}
	else if((BMI>=25)&&(BMI<30))
	{
	  cout<<"\nThe person is of overweight "<<BMI<<"m"<<"/"<<"kg";
	}
	else if(BMI>30)
    {
	  cout<<"\nThe person is of obese:" <<BMI<<"m"<<"/"<<"kg";
	}
	return 0;
}
