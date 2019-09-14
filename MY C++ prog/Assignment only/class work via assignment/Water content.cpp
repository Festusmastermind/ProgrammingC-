/* NAME: SUNKANMI ADU
   MATRIC NO: 130404107
   DEPT: COMPUTER SCIENCE
   A C++ PROGRAM THAT CALCULATE THE VALUE OF A WATER CONTENT */
   
#include <iostream>
using namespace std;
main()
{
	float wv;
	int bh;
	double wc;
/* the contents of the variables are:
    wv-water volume 
	bh-bucket height 
	wc-water content 
	*/
// the products of the wv and bh is display below 
   cout<<"Please enter the value for wv:";
   cin>>wv;
   cout<<"\nPlease enter the value for bh:";
   cin>>bh;
// declaring vthe operations between the wv and bh
  wc=wv*bh;
  cout<<"\nDisplay the value for wc:"<<wc;
  return 0;

}
