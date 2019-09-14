#include <iostream>
using namespace std;
int main()
// A c++ program that permits a user to select a desired honda model 
{
	int car;
// Menu option....
    cout<<"\n PRESS KEY 1, if you desired ALA\n";
    cout<<"\n PRESS KEY 2, if you desired BABY-BOY\n";
    cout<<"\n PRESS KEY 3, if you desired END OF DISCUSSION\n";
    cout<<"\n PRESS KEY 4, if you desired DISCUSSON CONTINUES\n\n";
    cin>>car;
// control statement for the programmning
   switch(car)
   {
   	case 1: cout<<"\n YOU PRESSED 1"<<endl;
   	        cout<<"\n YOUR DESIRED CAR IS ALA";
   	        break;
 	case 2: cout<<"\n YOU PRESSED 2"<<endl;
   	        cout<<"\n YOUR DESIRED CAR IS BABY-BOY";
   	        break;
 	case 3: cout<<"\n YOU PRESSED 3"<<endl;
   	        cout<<"\n YOUR DESIRED CAR IS END OF DISCUSSION";
   	        break;
 	case 4: cout<<"\n YOU PRESSED 4"<<endl;
   	        cout<<"\n YOUR DESIRED CAR IS DISCUSSION CONTINUES CAR";
   	        break;
    default:cout<<"\n CAR NOT SELECTED"<<endl;
   	        cout<<"\n PLEASE ENTER THE KEY WITHIN RANGE ";
   	        break;
   	
   }
   	
		
}
