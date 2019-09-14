#include <iostream>
using namespace std;
main()//tunnes ordering program......
{
/*	// the declaration section of the program 
	int tunnes, unitprice;
	float discount, totalprice, totalcharge;
	unitprice=1000;
	totalprice=unitprice*tunnes;
	totalcharge=totalprice-discount;// note that the totalcharge is also the amount the buyer will pay origianlly without discount...
	// the body of the program start here 
	cout<<"\n\n\t\t\tTUNNES PROGRAM*****";
	cout<<"\n\n\t Please Specify the number of tunnes you want to ordered for :" ;
	cin>>tunnes;
	//processing....section..i.e the ordering section
	if((tunnes>=25)&&(tunnes<50))
		discount=0.05*totalprice;
	  else if((tunnes>50)&&(tunnes<100))
	    discount=0.10*totalprice;
          else if((tunnes>100)&&(tunnes<150))
	        discount=0.15*totalprice;
             else if((tunnes>150)&&(tunnes<200))
	           discount=0.20*totalprice;
                 else if((tunnes>200)&&(tunnes<300))
	               discount=0.25*totalprice;
	               else if(tunnes>=300)
	               discount=0.30*totalprice;
	               // the section caputures the output of the program
	            cout<<"\n\tThe number of tunnes ordered for : "<<tunnes<<"-"<<"#"<<totalprice<<"\n";
	            cout<<"\n\tThe discount is : "<<discount<<endl;
	            cout<<"\n\tThe totalcharge is: "<<"#"<<totalcharge<<"\n";*/	


	
	
	// this section is for another programming entirely...
	int unitprice, totalprice, Qtypurch;
	float discount, amountpayable;
	unitprice=97.00;
	// this program outputs a screen invoice for different client...
	cout<<"\n\t\tA SCREEN INVOICE PROGRAM.....";
	cout<<"\n\n\t INVOICE  for client #1 ";
	cout<<"\n\tQty Purchased: 12";
	totalprice= 12 * unitprice;
	cout<<"\n\tTotal price: "<<totalprice;
	discount=0.05*totalprice;
	cout<<"\n\tDiscount: "<<discount<<"(i.e 5%)";
	
}

