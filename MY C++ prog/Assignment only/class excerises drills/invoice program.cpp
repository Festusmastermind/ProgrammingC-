#include<iostream>
using namespace std;
main()
// A c++ program that outputs an invoice for clients 
{
	int unit_price=97.00,qty_purch,total_price;
	float discount, amount_payable;
	// this section captures the invoice for client 1 with the discount of 0.05
	cout<<"\n\t\t\t*****AN INVOICE PROGRAM****\n";
    cout<<"\n Invoice client #1";
    cout<<"\n Unit Price 97.00";
    cout<<"\n Qty Purch 12";
    total_price=unit_price*12;
    cout<<"\n Total price: "<<"#"<<total_price<<endl;
    discount=0.05*total_price;
    cout<<" Discount: "<<discount<<endl;
    amount_payable=total_price-discount;
    cout<<" Amount Payable: " <<"#"<<amount_payable<<endl<<endl;
    // this section captures the discount for client 2 with the discount of 0.1 
    
	cout<<"\n Invoice client #2";
    cout<<"\n Unit Price 97.00";
    cout<<"\n Qty Purch 25";
    total_price=unit_price*25;
    cout<<"\n Total price: "<<"#"<<total_price<<endl;
    discount=0.1*total_price;
    cout<<" Discount: "<<discount<<endl;
    amount_payable=total_price-discount;
    cout<<" Amount Payable: " <<"#"<<amount_payable<<endl<<endl;
    
    // this section captures the invoice for client 3 with the discount of 0.2
    cout<<"\n Invoice client #3";
    cout<<"\n Unit Price 97.00";
    cout<<"\n Qty Purch 12";
    total_price=unit_price*75;
    cout<<"\n Total price: "<<"#"<<total_price<<endl;
    discount=0.2*total_price;
    cout<<" Discount: "<<discount<<endl;
    amount_payable=total_price-discount;
    cout<<" Amount Payable: " <<"#"<<amount_payable<<endl<<endl;
    
    // this section captures the invoice for client 4 with the discount of 0.15
    cout<<"\n Invoice client #4";
    cout<<"\n Unit Price 97.00";
    cout<<"\n Qty Purch 43";
    total_price=unit_price*43;
    cout<<"\n Total price: "<<"#"<<total_price<<endl;
    discount=0.15*total_price;
    cout<<" Discount: "<<discount<<endl;
    amount_payable=total_price-discount;
    cout<<" Amount Payable: " <<"#"<<amount_payable<<endl<<endl;
    
    // this section captures the invoice for client 5 with the discount of 0.05
    cout<<"\n Invoice client #5";
    cout<<"\n Unit Price 97.00";
    cout<<"\n Qty Purch 9";
    total_price=unit_price*9;
    cout<<"\n Total price: "<<"#"<<total_price<<endl;
    discount=0.05*total_price;
    cout<<" Discount: "<<discount<<endl;
    amount_payable=total_price-discount;
    cout<<" Amount Payable: " <<"#"<<amount_payable<<endl<<endl;
    
    // this sections captures the invoice for client 6 with the discount of 0.05
    cout<<"\n Invoice client #6";
    cout<<"\n Unit Price 97.00";
    cout<<"\n Qty Purch 17";
    total_price=unit_price*17;
    cout<<"\n Total price: "<<"#"<<total_price<<endl;
    discount=0.05*total_price;
    cout<<" Discount: "<<discount<<endl;
    amount_payable=total_price-discount;
    cout<<" Amount Payable: " <<"#"<<amount_payable<<endl<<endl;
     
     // this section captures the value for the invoice for client 7 with the discount of 0.1
    cout<<"\n Invoice client #7";
    cout<<"\n Unit Price 97.00";
    cout<<"\n Qty Purch 28";
    total_price=unit_price*28;
    cout<<"\n Total price: "<<"#"<<total_price<<endl;
    discount=0.1*total_price;
    cout<<" Discount: "<<discount<<endl;
    amount_payable=total_price-discount;
    cout<<" Amount Payable: " <<"#"<<amount_payable<<endl<<endl;
    
    // this section captures the invoice for the client 8 8 with the discount of 0.05
    cout<<"\n Invoice client #8";
    cout<<"\n Unit Price 97.00";
    cout<<"\n Qty Purch 18";
    total_price=unit_price*18;
    cout<<"\n Total price: "<<"#"<<total_price<<endl;
    discount=0.05*total_price;
    cout<<" Discount: "<<discount<<endl;
    amount_payable=total_price-discount;
    cout<<" Amount Payable: " <<"#"<<amount_payable<<endl<<endl;
    
    return 0;
	
		
}
