#include <iostream>
using namespace std;
main()
{
	int leapyear, year=1990,1991,1992,1993,1994,1995,1996,1997,1998,2000;
	//this section displays the year
	cout<<"\n The years are: "<<year<<endl;
	//using for statement for the specification of the leapyear
	for(int year=1990; year<=2000; year+=4)
	{
		cout<<"the leapyears are: "<<leapyear<<endl;
	}
}
