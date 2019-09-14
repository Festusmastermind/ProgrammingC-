#include <iostream>
using namespace std;
main()// A c++ program that calculates and specifies its requirements for a possible admission into the university
{
	int utme,putme,dept;
	int cutoffmark;
	cout<<"\n\t\tMY ADMISION SCHEME\n\n";
	cout<<" Enter your utme score:";
	cin>>utme;
	// implementing the use of the if else if control statement for specifications of the requirements 
	if((utme<180)||(utme>400))
	{
	 cout<<"\n You are not qualified for the putme\n";
	 cout<<"\n Try again next year\n";
    }
	else if((utme>=180)&&(utme<=400))
	{
	cout<<"\nYou are qualified for the putme"<<endl;
	//the section captures the student putme mark with the if cocntrol structure for specifications
	cout<<"\nEnter your putme score:";
	cin>>putme;
    }
	//the section captures the requirements for the putmescore 
	 if((putme>=40)&&(putme<=100))
	  {
		cout<<"\n CONGRATS YOU ARE QUALIFIED FOR THE  ADMISSION SCREENING\n";
        cutoffmark=((utme/8)+(putme/2));
		cout<<"\n Your computed cutoffmarks is: "<<cutoffmark;
		cout<<"\n\nWAIT PATIENTLY FOR THE FOR THE RELEASE OF EACH DEPARTMENTAL ADMITABLE CUTOFFMARK";
	  }
     else {
     	cout<<"\nYOU ARE NOT QUALIFIED FOR THE SCREENING\n";
     	return 0;
          }
	// this section captures the specified departments avaialable and thier cutoffmarks
	cout<<"\n\tEnter 1 for BIOCHEMSTRY with CUTOFFMARK OF 57\n";
	cout<<"\n\tEnter 2 for CHEMSTRY with CUTOFFMARK OF 51\n";
	cout<<"\n\tEnter 3 for COMPUTER with CUTOFFMARK OF 54\n";
	cout<<"\n\tEnter 4 for ACCOUNTING with CUTOFFMARK OF 62\n";
	cout<<"\n\tEnter 5 for MASS COMM with CUTOFFMARK OF 67\n";
	cout<<"\n\tEnter 6 for LAW  with CUTOFFMARK OF 71\n";
	cout<<"\n\tEnter 7 for ENGLISH with CUTOFFMARK OF 56\n";
	cout<<"\n\t\tINPUT THE DEPARTMENT OF YOU REGISTERED"<<":"<<" ";
	cin>>dept;
	// the use of switch is captured in this section
	switch(dept)
	{
		case 1: cout<<"Dear student your computed cutofffmark is: "<<cutoffmark; 
		       if(cutoffmark>=57)
		        {
		         cout<<"\nCongratulations you are admitted to biochemistry department\n";
		        }
		        else
				{
		        	cout<<"\nTry again next year";
		        	cout<<"\nOr change of course is ADVISEABLE";
		        }
		         break;
	   case 2: cout<<"Dear student your computed cutofffmark is: "<<cutoffmark; 
		       if(cutoffmark>=51)
		        {
		         cout<<"\nCongratulations you are admitted to chemistry department\n";
		        }
		        else
				{
		        	cout<<"\nTry again next year";
		        	cout<<"\nOr change of course is ADVISEABLE";
		        }
		         break;
	  case 3:  cout<<"Dear student your computed cutofffmark is: "<<cutoffmark; 
		       if(cutoffmark>=54)
		        {
		         cout<<"\nCongratulations you are admitted to Computer Science department\n";
		        }
		        else
				{
		        	cout<<"\nTry again next year";
		        	cout<<"\nOr change of course is ADVISEABLE";
		        }
		         break;
     case 4:   cout<<"Dear student your computed cutofffmark is: "<<cutoffmark; 
		       if(cutoffmark>=62)
		        {
		         cout<<"\nCongratulations you are admitted to Accounting department\n";
		        }
		        else
				{
		        	cout<<"\nTry again next year";
		        	cout<<"\nOr change of course is ADVISEABLE";
		        }
		         break;
	 case 5:   cout<<"Dear student your computed cutofffmark is: "<<cutoffmark; 
		       if(cutoffmark>=67)
		        {
		         cout<<"\nCongratulations you are admitted to Mass comm department\n";
		        }
		        else{
		        	cout<<"\nTry again next year";
		        	cout<<"\nOr change of course is ADVISEABLE";
		        }
		         break;
	 case 6:   cout<<"Dear student your computed cutofffmark is: "<<cutoffmark; 
		       if(cutoffmark>=71)
		        {
		         cout<<"\nCongratulations you are admitted to Law department\n";
		        }
		        else
				{
		        	cout<<"\nTry again next year";
		        	cout<<"\nOr change of course is ADVISEABLE";
		        }
		         break;
     case 7:   cout<<"Dear student your computed cutofffmark is: "<<cutoffmark; 
		       if(cutoffmark>=56)
		        {
		         cout<<"\nCongratulations you are admitted to English department\n";
		        }
		        else
				{
		        	cout<<"\nTry again next year";
		        	cout<<"\nOr change of course is ADVISEABLE";
		        }
		         break;
	 default: cout<<"\n\tSorry input out of range";
	          cout<<"\n\tplease re-specify within the specify the range given above\a\a";
	          
	          
	
		
	}
	
  
}
