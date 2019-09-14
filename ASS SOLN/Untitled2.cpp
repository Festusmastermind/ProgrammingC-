#include <iostream>
#include <stdlib.h>
using namespace std;
main ()
{

  float nlitre, amount, amount_lit, no_litres;
  float amtperlitre = 97;
  int opkey;
    cout<<"\n \t\tWELCOME TO BEST ELLA PETROL STATION\n";
    cout<<"\n To buy fuel by entering the amount of fuel needed, \t PRESS 1 \n\n";
    cout<<"\n To buy fuel by entering the amount of litres needed, \t PRESS 2 \n\n"; 
    cout<<"\n To quit process, \t\t\t\t\t PRESS 3 \n";																									
for (; ;)
{
cout<<"\n\n Enter the pressed button: ";
 cin>>opkey;
  switch (opkey)
  {
    case 1:
    {
      cout<<"\n Enter the amount of fuel you want: ";
      cin>>amount;
      cout<<"\n \t Your request is in progress... DISPENSING......";
      cout<<"\n\n \t Your fuel has been suscessfully dispensed\n";
      nlitre = amount/amtperlitre;
      cout<<"\n\n The number of litres of fuel you bought is: "<<nlitre<<"litres\n";
    }
  break;
        case 2:
      {
      cout<<"\n Enter the number of litres of fuel you want: ";
      cin>>no_litres;
      cout<<"\n \t Your request is in progress... DISPENSING......";
      cout<<"\n\n \t Your fuel has been suscessfully dispensed\n";
      amount_lit = no_litres * amtperlitre;
      cout<<"\n\n The amount of the litres of fuel you bought is: #"<<amount_lit<<".00";    
      }
  break; 
  case 3:
  return 0;
  }
  system ("pause");
  system ("cls");
 }    
}
  

 
  
