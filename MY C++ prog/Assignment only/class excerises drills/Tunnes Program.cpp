#include <iostream>
using namespace std;
main()
// A c++ program that accepts the number of tunes ordered and prints out the total cost of the order in the following style. 
{
	int unit_price= 1000, total_price, tunnes;
	float discount,amount_pay;
	// body of the program starts here 
	cout<<"\n\t***TUNNES ORDERING PROGRAM***\n\n";
	cout<<"\nEnter the number of tunnes ordered for: ";
	cin>>tunnes;
	 total_price = tunnes * unit_price;
	// using the if else if control structure for the programming
	if((tunnes>=25)&&(tunnes<50))
	discount = 0.05* total_price;
	else if ((tunnes>=50)&&(tunnes<100))
	discount=0.10* total_price;
	else if ((tunnes>=100)&&(tunnes<150))
	discount=0.15* total_price;
	else if ((tunnes>=150)&&(tunnes<200))
	discount=0.20* total_price;
	else if ((tunnes>=200)&&(tunnes<300))
	discount=0.25* total_price;
	else if (tunnes>=300)
	discount=0.30* total_price;
	// note that the original amountpaid after the discount is the total charge
	amount_pay= total_price-discount;
	cout<<"\n No of tunnes ordered: "<<tunnes<<"-"<<"#"<< total_price<<endl;
	cout<<"discount: "<<"#"<<discount<<endl;
	cout<<"\n Your Total Charge is: "<<"#"<<amount_pay<<endl;
	return 0;	
	
}
