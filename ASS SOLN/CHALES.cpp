#include <iostream>
using namespace std;
main()
{

  int mylinear[10];
  int smallest, highest, total;
  int sum = 0,  prod = 1;
  double avr;
   int i;
  cout<<"\n Enter the ten elements in the array as mylinear: ";
  for (i=0;i<10;i++)
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
 highest = mylinear[0];
 for (i=0;i<10;i++)
 {
 if (mylinear[i] > highest)
 highest = mylinear[i];
 }
cout<<"\n\n The highest value of this element is: "<<highest<<"\n";
   for(i=0; i<10; i++)
   {
     sum += mylinear[i];
     prod *= mylinear[i];
   }
   cout<<"\n\n The sum of the elements in this array is: "<<sum<<"\n ";
   avr = sum /10;
   cout<<"\n\n The average of the elements in this array is: "<<avr<<"\n ";
   cout<<"\n\n The product of the elements in this array is: "<<prod<<"\n ";
}

 
   
   
