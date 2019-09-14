#include <iostream>
using namespace std;
main()
//A c++ program that converts the fahrenheit to celsius and from celsius to kelvin
{
	float fah,celsius,kelvin,y;
	cout<<"\nEnter the value for fahrenheit for the conversion: ";
	cin>>fah;
	// thie section process the value inputed for the conversion
	y=fah-32;
	celsius=(5.0/9.0)*y;
	cout<<"\nThe value of the converted fahrenheit to celsius is: "<<celsius<<endl;
	// the section captures the data from cel and implemet it for the conversion
	cout<<"\nTo convert from celsius to kelvin\n";
	cout<<"\Enter the value for celsius that is to be converted: ";
	cin>>celsius;
	// the process is
	kelvin=celsius+273.15;
	cout<<"\nThe result of the converted celsius to kelvin is: "<<kelvin<<endl;
	return 0;
	
	
	
	
}
