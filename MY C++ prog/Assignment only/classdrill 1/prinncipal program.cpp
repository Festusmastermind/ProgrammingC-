#include <iostream>
using namespace std;
main()
// A c++ program that outputs that computes and outputs an amount for five years
{
	double amount,rate, principal,year;
	cout<<"\n\t\t PROGRAM FOR AMOUNT FOR FIVE YEARS";
	cout<<"\n\t\t******************************************";
	cout<<"\n Enter the principal: ";
    cin>>principal;
    cout<<"\n Enter the rate: ";
	cin>>rate;
	//declaring  the initial year
	year= 0;
	while(year<5)//this section is for declaration of initialixing year as o...
	{
		amount=(principal*(1.5+rate*year)*(1.5+rate*year));
		year=year+1;
		cout<<"The amount in year"<<" "<<year<<" "<<"is"<<" "<<amount<<"naira"<<"\n\n";
	}
	 return 0;		
	
}
