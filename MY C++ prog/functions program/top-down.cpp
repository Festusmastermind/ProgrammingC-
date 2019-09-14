int thelargest(int,int);
#include<iostream>
using namespace std;
main()
{
	int num1, num2;
	//the input section
cout<<"\nEnter value for first no: "; 
cin>>num1;
cout<<"\nEnter value for the scond no: ";
cin>>num2;
// find the largest now.....
cout<<"\nThe largest of the two inputted is:"<<thelargest (num1,num2);
return 0;	
}
   int thelargest(int x, int y)
   {
   	  if(x>y)return x;
      else return y;
   }
