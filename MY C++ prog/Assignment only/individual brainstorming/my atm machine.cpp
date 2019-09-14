#include <iostream>
using namespace std;
int main()
//A c++ program that specifies the use of an atm machine within its specified range and note this program answers the question specifically W
{
	int code, pin, dstv;
	float deposit,withdrawal,transfer, paybill,recharge,initial_balance,subsription,total_amount,current_balance;
	cout<<"\n\t*********SKILLS WORLD BANK*********\n\n";
	cout<<"\tWELCOME TO OUR INTERFACE DEAR USER\n\n";
	cout<<"PLEASE ENTER YOUR PIN: ";
	cin>>pin;
	cout<<"\n\n";
	// using the if else control statment to specify the validity of the pin inputed
	if (pin<2017||pin>2017){
		cout<<"\ninvalid pin, please kindly re-entered the specified pin: ";
	    cin>>pin;
	    cout<<endl;
	} 

  for(;;)
  {
  	 cout<<"\t\t***KINDLY CHOOSE YOUR DESIRED OPTION***\n\n";
// this section activates the menu above
   cout<<"PRESS 1=initial_balance\t\t\t\tPRESS 2=withdrawal\t\t\t\t\n\nPRESS 3=recharge\t\t\t\tPRESS 4=deposit\t\t\t\t\n\nPRESS 5=transfer\t\t\t\tPRESS 6=subsription\n\n";
   cout<<"\n\t\tPlease opted for any valid operation here:"; 
   cin>>code;
   initial_balance=6800; 
    
//using the  switch case for the implementation of the program
   cout<<"\n\t\tPLEASE NOTE THAT YOUR LEDGER BALANCE IS 2500NAIRA"<<endl;
   switch(code)
   {
   	case 1: cout<<"\n your requested balance is: "<<initial_balance<<"naira";
   	        break;
   	        
   	case 2: cout<<"\n Your request is been processed"<<endl;
   	        cout<<"\n Please enter the amount you want to withdrawal: ";
   	        cin>>withdrawal;
			   if(withdrawal>4300){
   	           cout<<"\n Sorry invalid input Your minimum balance must be 2500naira";
				cout<<"\n Re-enter within your range of money: ";
				cin>>withdrawal; 	
              }
   	        cout<<"\n You just withdrawal:"<<withdrawal<<"naira";
   	        current_balance = initial_balance-withdrawal;
   	        cout<<"\n Your total balance is\a\a =" <<current_balance<<endl;
   	        break;
   	        
    case 3:  cout<<"\n Please enter the amount you want to load: ";
   	         cin>>recharge;
   	         if(recharge<200||recharge>200){
   	         cout<<"\n Invalid input enter the specified amount required: ";
   	       	 cin>>recharge;
   	       	 cout<<"\n Dear customer your phone will be alerted any min from now\a\a";
   	         }
   	         else{
   	         	cout<<"\n Dear customer your phone will be alerted any min from now\a\a";
   	         }
   	         break;
    case 4: cout<<"\n Enter the amount you want to deposit: ";
            cin>>deposit;
             if(deposit>3000||deposit<3000)
			 {
               cout<<"\n Enter the specified amount of money to be deposit: ";
               cin>>deposit;
               cout<<"\n You deposited: "<<deposit<<"naira"<<endl;
			   current_balance = initial_balance+deposit;
			   cout<<"\n Your current balance is : "<<current_balance<<"naira"<<endl; 
             }
               else
               {
               	cout<<"\n You deposited: "<<deposit<<"naira"<<endl;// note that this else section works with the normal deposit....
			    current_balance = initial_balance+deposit;
			    cout<<"\n Your current balance is : "<<current_balance<<"naira"<<endl; 
               }
               break;
   case 5: cout<<"\n Enter the amount you want to transfer: ";
           cin>>transfer;
		   if(transfer>2500||transfer>2500)
		   {
		   	cout<<"\n Dear customer the amount you enter is invalid";
		   	cout<<"\n Re-enter the specified amount to be transfer: ";
		   	cin>>transfer;
		   	cout<<"\n You transfer: "<<transfer<<"naira"<<endl; 
		   	current_balance = initial_balance-transfer;
		   	cout<<"\n Your current balance is: "<<current_balance<<endl;
		   }            
            else
            {
              cout<<"\n You transfer: "<<transfer<<"naira"<<endl; 
		   	   current_balance = initial_balance-transfer;
		     	cout<<"\n Your current balance is: "<<current_balance<<endl;
            }
            break;
    
    case 6: cout<<"\n Enter the payment fee for subscription: ";
            cin>>subsription;
            if(subsription==3600)
            {
            	cout<<" Dear customer you have sucessfully subscribe for your dstv!!!!!ENJOY";
            	current_balance = initial_balance-dstv;
	            cout<<"\n Your current balance is: "<<current_balance<<endl;
            }
	        else {
	        	cout<<"\n Re-enter the specified fee for the subscription not more not less:";
	        	cin>>subsription;
	            cout<<" Dear customer you have sucessfully subscribe for your dstv!!!!!ENJOY";
	            current_balance = initial_balance-dstv;
	            cout<<"\n Your current balance is: "<<current_balance<<endl;
	        }
            break;
		
   default: cout<<"\n Sorry invalid input";
             cout<<"\n Try again later";			        	 
	    
   }
   
  }
 return 0;	
	
}
