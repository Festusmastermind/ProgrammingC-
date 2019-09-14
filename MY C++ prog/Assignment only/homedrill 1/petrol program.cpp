#include <iostream>
using namespace std;
main()
//A c++ program that indicate petrol dispencing gauge algorithm
{
	int req;
	float price=97.00;
	float amount,litre;
	cout<<"\n\t\tPETROl DISPENCING GAUGE ALGORITHM\n\n";
	// designinig the program interface 
	cout<<"\n \t\t\t THE CODE FOR THE MACHINE\n";
	cout<<"************************************************************\n";
	cout<<"\tPRESS 1 for specification of the amount of fuel needed\n\n";
	cout<<"\tPRESS 2 for Indicaton of numbers of litre needed\n\n";
	cout<<"\tPRESS 3 for Exit of the application\n\n";
	cout<<"************************************************************";
	for(;;)
	{
		cout<<"\nRequest for service by entering the code: ";
		cin>>req;
		cout<<endl;
		// implementing the switch case for the program
		switch(req)
		{
			
			case 1: 
			        cout<<"\nEnter the amount of fuel needed in naira:";
			        cin>>amount;                                                   
			        while(amount<0)
					{
			        	cout<<"\n Sorry it must be greater than 0";
						cout<<"\n Re-enter the amount of fuel needed: ";
						cin>>amount; 
			        }
			        litre=amount/price;
			        cout<<litre<<"Litres of fuel has just be dispensed\n";
			        break;
		   case 2: cout<<"\nEnter the amount of fuel needed in litre: ";
		           cin>>litre;
		           while(litre<0)
				   {
			        	cout<<"\n Sorry it must be greater than 0";
						cout<<"\n Re-enter the amount of fuel needed in litre: ";
						cin>>litre; 
			        }
			        //this section captures the output of the liter in both amount and litre
			        litre=amount/price;
			        amount=litre*price;
			        cout<<litre<<"litres of fuel has just be dispenced"<<"\n";
			        cout<<amount<<"naira of fuel has just be dispensed\n";
			        break;
		   case 3: cout<<"\n Exitiiiiiinggggg Application\a\a";
		           return 0;
		   default: cout<<"\n Enter within the specified range of code";
		            break;					
		}		
	}
	
	

	
	
	
	
	
	
	
	
	
	
	
	
}
