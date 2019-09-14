#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
      char A[50];
      char B[50];
     int P = 0, Q = 0;
     int button;
cout<<"\n Enter Team Name: ";
cin>>A;
cout<<"\n Enter second Team Name: ";
cin>>B;
cout<<"\n\n Score line for "<<A<<" is: "<<P;
cout<<"\n\n Score line for "<<B<<" is: "<<Q;  
cout<<"\n\n  To add a new goal to team "<<A<<" \t Press 1";
cout<<"\n  To add a new goal to team "<<B<<" \t Press 2";
cout<<"\n  To exit process \t\t\t Press 3";

               for (; ;)
                  {
              cout<<"\n\n\n Now enter your pressed button ";
               cin>>button;
switch (button)
{
       case 1:
            {
            cout<<"\n\n WAOH!! It is a goal";
            P += 1;      //P = P + 1
            cout<<"\n\n Score line for "<<A<<" is: "<<P;
            cout<<"\n\n Score line for "<<B<<" is: "<<Q;  
            }
            break;
       case 2:
            {

                      Q += 1; 
                                                                                                                    
            cout<<"\n\n WAOH!! It is a goal";
            cout<<"\n\n Score line for "<<A<<" is: "<<P;
            cout<<"\n\n Score line for "<<B<<" is: "<<Q;  
            } 
            break;
            case 3:              
                 return 0;
                 }
                 system ("pause");
                 system ("cls"); 
				  }       
                 }
                 
