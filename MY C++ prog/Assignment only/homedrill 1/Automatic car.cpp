#include <iostream>
using namespace std;
main()
//A c++program that program auto car algorithm
{
	int status, state=0, handbreak=0;
	int gear=0;
	cout<<"\n\t\tAUTO CAR ALGORITHM PROGRAM\n\n";
	cout<<"*****************************************************";
	cout<<"\n\tINSTANCES WHERE GEAR NEEDS TO BE SELECED ARE: \n";
	cout<<"\n Enter 1 To start the car";
	cout<<"\n Enter 2 If the car enters into a ditch or bump";
	cout<<"\n Enter 3 If the car is on the expresss road";
	cout<<"\n Enter 4 If the car needs to climb a hill";
	cout<<"\n Enter 5 If wish to stop the car";
	cout<<"\n Enter 6 To exit the application";
	cout<<"\n*****************************************************\n\n";
	// the state in the program shows that either the engine of the car is on off and that handbreak is intially 0
	for(;;)
	{
     cout<<"\nChoose any instance here: ";
	 cin>> status;
	 switch (status)
	 {
	 	case 1: cout<<"\nThe car has just been started\n";
	 	        state=1;
	 	        gear=1;
	 	        cout<<"The car gear has just be changed to: "<<gear;
	 	        break;
        case 2: if(state==1)
               {
        	    gear=2;
        	    cout<<"\nThe car has just entered into a ditch or bump\n";
			    cout<<"\nThe car gear has just be changed to: "<<gear;
		       }
		       else
			   {
		    	cout<<"\n Engine must be turned on: "; 
		       }
		       break;
	 	
	  case 3: if(state==1)
	 	      {
	 		  gear=4;
	 		  cout<<"\nThe car is on the express road";
	 		  cout<<"\nThe cargear is now switch to:" <<gear;
	          }
	 	      else
			  {
	 	   	  cout<<"\n Turn on the engine: ";
	 	      }
	 	      break;
	 	      case 4: if(state==1)
	 	      {
	 		  gear=3;
	 		  cout<<"\nThe car is about to climb a hill";
	 		  cout<<"\nThe  car gear is now:" <<gear;
	 	      }
	 	     else
			 {
	 	   	 cout<<"\n Turn on the engine: ";
	 	     }
	 	     break;
	case 5: if(handbreak=1)
	 	    {  
	 	      gear=0;
			  cout<<"\nThe car engine has been stop";
			  cout<<"\nProbably a flat tire has just occured";
			  break;
	 	    }
	case 6: cout<<"\nExiiiiiiiitiiing Appppplication\a\a\a";
	 	     cout<<"\nYou can choose to go back to the main menu here: ";
	            break;
	  default:    cout<<"\n Case inputed out of range ";
	                cout<<"\n Try again later";
	                  break; 	
	 	
	 }			
		
	}


	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
