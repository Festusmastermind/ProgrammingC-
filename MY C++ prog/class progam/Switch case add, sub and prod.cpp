#include <iostream>
using namespace std;
main()
/* A switch case program that accepts value for <= integer variable x and y
   which computes either their summation, difference and product */
{
	int x,y,id;
// capturing the data variables occurs in this section
   cin>>x>>y;
   cin>>id;
   cout>>"enter 1-add, 2-sub, 3-prod: ";
   cin>>id;
// switch on op
  switch (id)
  {
  	case 1: sum=x+y;
	  cout<<"\n The sum is= " <<sum;
	  break;
	case 2: sub=x-y;
	  cout<<"\n The sub is = " <<sub;
	  break;
	case 3: prod=x*y;
	  cout<<"\n The prod is = " <<prod;
	  break;
	default: cout<<"\n Sorry input out of range = "<<endl;
	  cout<<"Input is between 1-3:";
  }
	return 0;
	
	
}

   


	
	

