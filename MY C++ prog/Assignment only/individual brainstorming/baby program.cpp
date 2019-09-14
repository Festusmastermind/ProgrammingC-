#include <iostream>
using namespace std;
int main()
//A c++ program that specifies the number of babies delivered via the mother
{
	int babies;
	// this sections captures the specifed menu for the babies
   cout<<"\nBABY PROGRAM\n";
   cout<<"\nTHE MENU FOR THE BABIES DELIVERED IS BELOW: "<<endl;
   cout<<"\n0=nil delivery\t\t1=one delivery\t\t2=twins delivered\t\t\n\n3=triplet delivered\t4=quadruplet delivered\t\n\n5=5 babies delivered\t\t6=6 babies delivered\n\n";
   cout<<"input the number of the babies specifed: ";
   cin>>babies;
   //using seitch case for the implementation
   switch(babies)
   {
   	case 0: cout<<"\nWaiting mother! He did it for Hannah, He will do yours too IJN\n";
   	        cout<<"keep the faith";
   	        break;
   	case 1: cout<<"\nCongrats, u have a bouncing baby";
   	        break;
   	case 2: cout<<"\nWow, it is twins";
   	        break;
   	case 3: cout<<"\nWonderful, 3 - how will you carry them?";
   	        break;
   	case 4: cout<<"\nI was told you delivered 4";
   	        cout<<"\nGod is Goood";
   	        break;
   	case 5: cout<<"\nI was  told you delivered 5";
   	        break;
    case 6: cout<<"\nThis is a miracle!";
            break;
    default: if(babies==7)
             {
             	cout<<"\nIjust can't believe this";
             	cout<<"\nSeven babies at a time??";
             }
             else if(babies>7)
			 {
			 	cout<<"\nThis is just unbeleivable";
			 	cout<<"\nThat number of babies.....God is wonderful\a\a";// this section is declaring the n number of the input of the babies.....
             }
         	
   }
	return 0;
}
