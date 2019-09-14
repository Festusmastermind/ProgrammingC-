#include <iostream.h>
main()
{

int handbreak = 0, jhandbreak = 1;
int gear = 0, igear = 1, jgear = 2, kgear = 3, mgear = 4, pgear = 5;
int key;

cout<<"\n To start your car \t\t\t\t\t Press 1 \n ";
cout<<"\n Your car is about to enter into a bump \t\t Press 2 \n ";
cout<<"\n Your car needs to climb an hill \t\t\t Press 3 \n ";
cout<<"\n Your car is on an express \t\t\t\t Press 4 \n ";
cout<<"\n Your car  needs to stop and attend to a new gear switch Press 5 \n ";
cout<<"\n Your car needs to stop finally \t\t\t Press 6 \n ";  

for( ; ; )
{
  cout<<"\n\n Enter your pressed button : "; 
  cin>>key;
switch (key)
{
  case 1:
  {
  cout<<"\n\n  Your car is now on start ZOOOOOOOOM!!! \n ";
  cout<<"\n  Gear "<<igear<<" and handbreak "<<handbreak<<" selected.\n";
  cout<<"\n  HAPPY RIDING \n ";
  }
  break;
  case 2:
   {
  cout<<"\n\n  Your car is into a bump \n ";
  cout<<"\n  Gear "<<jgear<<" selected.\n";
  }
    break;
case 3:
   {
  cout<<"\n\n  Your car is on a hill \n ";
  cout<<"\n  Gear "<<kgear<<" selected.\n";
  }
  break;
   case 4:
   {
  cout<<"\n\n  Your car is on an express \n ";
  cout<<"\n  Gear "<<mgear<<" selected.\n";
  }
  break;
   case 5:
   {
  cout<<"\n\n  Your car is on a pause \n";
  cout<<"\n  Gear "<<gear<<" selected.\n";
  cout<<"\n  Your car is now on a new gear switch ";
  cout<<igear<<" and a new handbreak "<<jhandbreak<<" \n ";
  }
  break;
   case 6:
   {
  cout<<"\n\n  Your car has stopped finally  \n ";
  cout<<"\n  Gear "<<gear<<" and handbreak "<<jhandbreak<<" selected.\n";
  cout<<"\n  HAVE A NICE DAY \n";

  }
  break;
}
 return 0;
}
 }
 