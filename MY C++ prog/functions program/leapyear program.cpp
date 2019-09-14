#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
main()
{
	int leapyear, year;
	cout<<"input any first year below: ";
	cin>>year;
	// this section implements the year above and detects its following leap year
	for(int leapyear=year+4; leapyear<=2020; leapyear+=4)
	{
		cout<<"\n The leapyear are: "<<leapyear<<endl;
	}
	 
	
}
