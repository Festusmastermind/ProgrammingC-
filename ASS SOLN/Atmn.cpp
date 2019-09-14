#include<iostream>
using namespace std;
main()
{
 int initial_amount,deposite,withdraw, recharge, dstv_subscription,transfer, pin;
 int A,B,C,D,E; 
 char request;
 pin= 2014;
 cout<<"\t\t******YOU ARE WELCOME TO UNSTOPPABLE BANK LIMITED*****\n\n";
 cout<<"\t\tTHE ONLY BANK THAT SATISFY THE NEED OF THE CUSTOMER\n\n";
 cout<<"\t\tTHIS IS TO REMIND YOU THAT HIV IS REAL AND GET PROTECTED\n\n";
 cout<<"\t\tplease follow the following instruction\n\n";
//capturing pin for your ATM CARD
 cout<<"INSERT YOUR ATM CARD\n\n\n";
 cout<<"INPUT YOUR PIN=";
 cin>>pin;
 cout<<"\n\n";
 if (pin<2014 || pin>2014){
 cout<<"invalid pin, please re-entered your pin";
 cin>>pin;}
 cout<<"\t\tThe available request are:\n\n";
 cout<<"a=initial_amount\t\t\t\tb=deposite\n\nc=withdraw\t\t\t\t\td=recharge\n\ne=dstv_subscription\t\t\t\tf=transfer\n\n";
 cout<<"\t\tkindly request here:";
 cin>>request;
 initial_amount=6800;
 
 switch(request){
 	
		case 'A': case 'a': 
			cout<<"you opted for initial_amount\n\n";
			cout<<"your initial_balance is \n\n";
			cout<<initial_amount<<"naira";
			break;
		case 'B': case'b':
			cout<<"you opted for deposite\n";
			cout<<"indicate the amount you are depositing\n\n";
			cin>>deposite;
		  	cout<<"The amount you deposited is"<<" = "<<deposite<<" naira\n\n";
		  	cout<<"your main account balance is"<<"= "<<initial_amount+deposite<<"naira"<<endl;
		  	break;
		case'C': case'c':
		 	cout<<"you opted for withdraw\n\n";
			cout<<"indicate the amount you want to withdraw\n\n";
			cin>>withdraw;
			if(withdraw>6800 || withdraw ==6800){
			cout<<"insufficient amount\n"; 
			cout<<"please re-enter amount below 6800\n";
			cin>>withdraw;}
			cout<<"the amount withdraw is"<<" = "<<withdraw<<"naira\n\n";
			cout<<"your main account balance is"<<"= "<<initial_amount-withdraw<<"naira";
			break;
		case'D': case'd':
			cout<<"you opted for recharge\n\n";
			cout<<"list of avaliable airtime are\n";
			//Capturing values for Airtime 
			cout<<"A FOR MTN, B FOR ZAIN, C FOR GLO, D FOR ETISALAT\n";
			cout<<"list of avaliable amount are\n";
			cout<<"100\n200\n300\n400\n500\n750\n1000\n"; 
			cout<<"indicate the amount you want to recharge\n\n";
			cin>>recharge;
			if (recharge>6800 || recharge>200){
			cout<<"insufficient amount\n"; 
			cout<<"please re-enter amount below 75000 or 100 to 1000\n";
			cin>>recharge;}
			cout<<"the amount recharge is"<<" = "<<recharge<<"naira\n\n";
			cout<<"your main account balance is"<<"= "<<initial_amount-recharge<<"naira";
			break;
		case'E': case'e':
			cout<<"you opted for dstv subscription \n\n";
			cout<<"specify the amount subscription you need \n\n";
			cin>>dstv_subscription;
			cout<<"The amount you subscrible is"<<" = "<<dstv_subscription<<" naira\n\n";
		  	cout<<"your main account balance is"<<"= "<<initial_amount-dstv_subscription<<"naira"<<endl;
		  	break;
		case'F': case 'f':
			cout<<"you opted for Tranfer\n\n";
			cout<<"specify the amount you want to transfer \n\n";
			cin>>transfer;
			cout<<"The amount you transfer is "<<" = "<<transfer<<" naira\n\n";
			cout<<"your main accout balance is"<<" = "<<initial_amount-transfer<<"naira"<<endl;
			break;
			
		default:
			cout<<"pls enter in APHABET INDICATED above"<<endl;
			
		}
		cout<<"\n\n\n\n";
	
		cout<<"............................................\n\n";
		cout<<"For any complain pls call 07081065978:\n\n";
			cout<<"Thanks for your patronage\n\n";
	}
		 
	
