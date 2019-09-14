#include <iostream>
using namespace std;
int main()
{

  int mylinear[10];
  int smallest, total;
  int sum = 0;
   
  cout<<"\n Enter the ten elements in the array as mylinear: ";
  for (int i=0;i<10;i++)
 {
   cin>>mylinear[i];
 }
 smallest = mylinear[0];
 for (i=0;i<10;i++)
 {
 if (mylinear[i] < smallest)
 smallest = mylinear[i];
 }
cout<<"\n\n The smallest value of this element is: "<<smallest<<"\n";
   for(i=0; i<10; i++)
   {
     sum += mylinear[i];
   }
   cout<<"\n The sum of the elements in this array is: "<<sum<<"\n ";
   return 0;
}

