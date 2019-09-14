#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
main()
{
	int tossA, tossB, sum=0;
	int control = time(NULL);
	srand (control);
	cout<<"A SINGLE MARTIAL CHOICE APP";
	cout<<"The tosses are below: ";
	tossA = 1+rand()%6;
	tossB = 1+rand()%6;
	sum = tossA+tossB;
	cout<<tossA<<"and"<<tossB<<"and"<<"sum"<<"is"<<sum;
	// this section captures the value of the criteria....
	if(sum==1)
	{
		cout<<"It is prefer been single! Are u been forced into marriage propsal";
	}
	else if(sum==2)
	{
		cout<<"Too young for marriage propsal, make your study your priority at this time..";
	}
	else if ((sum>2)&&(sum<6))
	{
		cout<<"Incompatible study your priority at this time!!!";
	}
	else if (sum==6)
	{
		cout<<"Incompatible study your priority at this time!!!";
	}
	
	
	
	
	
}
