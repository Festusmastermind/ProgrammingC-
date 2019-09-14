#include <iostream>
using namespace std;
int main()
// A c++ program that selects age categories
{
	int code;
	cout<<"\n THE MENU FOR THE CATEGORIES ARE UNDERLISTED BELOW";
	cout<<"\n __________________________________________________\n\n";
	cout<<"1. INFANT\n"<<endl;
	cout<<"2. ADOLESCENT\n"<<endl;
	cout<<"3. YOUTH\n"<<endl;
	cout<<"4. ADULTH\n"<<endl;
	cout<<"5. AGED\n\n"<<endl;
// The options for different category are below....kindly select yours
   cout<<"\n AGE CATEGORY IS DETERMINED IN THIS SECTION KINDLY SELECT HERE BWT 0PTION 1-5";
   cout<<"\n______________________________________________________________________________\n\n";   
   cout<<"\n if your(AGE<=3years), click 1\n\n"<<endl;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
   cout<<"\n if your(AGE>3 && AGE<15years), click 2\n\n"<<endl;
   cout<<"\n if your(AGE>15 && AGE<30years), click 3\n\n"<<endl;
   cout<<"\n if your(AGE>30 && AGE<60years), click 4\n\n"<<endl;   
   cout<<"\n if your(AGE>60 && ABOVE), click 5\n\n"<<endl;   
   cin>>code;
//using the switch control statement in the program
  switch(code)
  {
  	case 1: cout<<"YOU HAVE CLICKED 1\n";
  	        cout<<"\nYou are an infant\n\n";
  	        break;
  	case 2: cout<<"YOU HAVE CLICKED 2\n";
  	        cout<<"\nYou are an Adolescent\n\n";
  	        break;
  	case 3: cout<<"YOU HAVE CLICKED 3\n";
  	        cout<<"\nYou are a Youth\n\n";
  	        break;
	case 4: cout<<"\nYOU HAVE CLICKED 4\n";
  	        cout<<"\nYou are an Adult\n\n";
  	        break;
	case 5: cout<<"YOU HAVE CLICKED 5\n\n";
  	        cout<<"\nYou are a Aged\n\n";
  	        break;	
   default: cout<<"Sorry Your Input is out of Range\n";
            cout<<"\nPlease Enter Between Selected Option\n";
            
  	
  }
		
}

