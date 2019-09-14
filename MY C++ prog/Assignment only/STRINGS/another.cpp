#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <time.h>
#include <cstring>
using namespace std;
int main()
{
	
	 //declaration of all the variables used is been inputed in this section........
   int a, num1, num2, num3, m, w;
   int code, id, op;//this captures the declaration of the code switch into.....
   char u,n,z,v,q,x,y,s,p;// this capture the various value of the example in the ctype.h section...
   
   //this section is the interface for the ctime and time.h computed illlustation..
   for(;;)
   {
   	    cout<<"\n\n\t****A C++ PROGRAM THAT INVOLVES THE ILLUSTRATION OF THE LIBRARIES****\n\n";
        cout<<"\tEnter 1 for the example illustration on time.h\n\n";
        cout<<"\tEnter 2 for the example illustration on ctype.h\n\n";
        cout<<"\tEnter 3 for the example illustration on math.h\n\n";
        cout<<"\tEnter 4 to end the program\n\n";
        cout<<"\tEnter a Specification for your desired choice here:"<<" ";
        cin>>code;
        cout<<endl;
   // this section capatures the switch case that comprises the entire switch case
     switch(code)
     {
   	  case 1: 
		     {
            // current date/time based on current system
            time_t now = time(0); 
           // convert now to string form
           char* dt = ctime(&now);
           cout << "The local date and time is: " << dt << endl;
          // convert now to tm struct for UTC
             tm *gmtm = gmtime(&now);
            dt = asctime(gmtm);
             cout << "The UTC date and time is:"<< dt << endl;
             }
             break;
      case 2:
	        {
	     	  system ("cls");
	     	  cout<<"\n\tThe interfaces of the prgram is below: "<<endl;
              cout<<"\n\tEnter 1 for toupper()"<<endl;
              cout<<"\n\tEnter 2 for tolower()"<<endl;
              cout<<"\n\tEnter 3 for isdigit()"<<endl;
              cout<<"\n\tEnter 4 for isspace()"<<endl;
              cout<<"\n\n\tSpecify your range of choice here: ";
              cin>>id;
             switch(id)
             {
            	
            	case 1: cout<<"\n\tinput the character you want to detect here: ";
            	        cin>>n;
            	        u=toupper(n);
            	        cout<<"\n\tThe value is changed to uppercase here: ";
            	        cout<<u;
            	        break;
            	case 2: cout<<"\n\tInput the character you want to detect here: ";
            	        cin>>a;
            	        s=tolower(a);
            	        cout<<"\n\tThe value is changed to lowercase here: ";
            	        cout<<s;
            	        break;
            	case 3: cout<<"\n\tInput the value you want to detect here: ";
            	        cin>>x;
            	        if(isdigit(x))
            	        {
            	        	cout<<"\n\tIt is a digit value";
            	        }
            	        else
            	        { 
            	          cout<<"\n\tIt is not a digit value";
            	        }
            	        break;
            	case 4: cout<<"\n\tInput the value you want to detect here: ";
            	        cin>>p;
            	        if(isspace(p))
            	        {
            	        	cout<<"\n\tIt is a space";
            	        }
            	        else
            	        {
            	        	cout<<"\n\tIt is not a space";
            	        }
            	        break;
	          }
	     	}
	        break;
            
     case 3: 
	       {
	       	 system ("cls");
	         cout<<"\n\tThe interface for the math.h illustration is below: "<<endl;
             cout<<"\n\tEnter 1 for operation on sine..."<<endl;
             cout<<"\n\tEnter 2 for operation on cosine...."<<endl;
             cout<<"\n\tEnter 3 for operation on tan...."<<endl;
             cout<<"\n\tEnter 4 for operation on pow...."<<endl;
             cout<<"\n\t\tSpecify the operation of choice here: ";
             cin>>op;
             switch(op)
             {
             	case 1: cout<<"\n\tEnter the integer of choice here: ";
             	        cin>>num1;
             	        cout<<"\n\tThe sin of the number you inputed is: "<<sin(num1)<<endl;
             	        break;
             	case 2: cout<<"\n\tEnter the integer of choice here: ";
             	        cin>>num2;
             	        cout<<"\n\tThe tangent of the number you inputed is: "<<tan(num2)<<endl;
             	        break;
             	case 3: cout<<"\n\tEnter the integer of choice here: ";
             	        cin>>num3;
             	        cout<<"\n\tThe cos of the number you inputed is: "<<cos(num3)<<endl;
             	        break;
             	case 4: cout<<"\n\t\tNote that this illustration enter some basic value like: ";
				        cout<<"\n\tEnter the base number: ";
                       	cin>>m;
                    	cout<<"\n\tEnter the raise number: ";
                     	cin>>w;
	                    cout<<"\n\tThe power of"<<" "<<m<<" "<<"raise to"<<" "<<w<<" "<<"is"<<" "<<pow(m,w);
                     	break;
             }
			 	
	       }
		   break;	
		   
    case 4: 
          {
          	cout<<"\n\n\tYou just opted for the end this program\a\a\a";
            cout<<"\n\n\tBYE!!!!!BYE";
            return 0;
          }        
            
    default: cout<<"\n\tSorry input of range";
             cout<<"\n\tTry again later ";	
    }


  }
  return 0;
}
