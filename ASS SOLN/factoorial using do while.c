/* PROGRAM TO CALCULATE FACTOROIAL using do whle loop
NAME: KOLAWOLE BLESSING OLUWATOSIN; 
MATRIC NO; 110404018

Program to compute the matric number of all the eligible students in computer 
science department,  Adekunle Ajasin University*/
#include<iostream.h>
main()
{
  int n;
  int i = -8;
  long sum = 0, fact = 1;
  cout<<"\n Enter the value for n: ";
  cin>>n;

  do
  {
  sum = sum + n;
  fact = fact * n;
  n = n-1;
  i = i + 1;
   }
  while (i<=n);
{
  cout<<"\n\n The factorial of the number you inputted is: "<<fact;
  cout<<"\n\n The sum factorial of the number you inputted is:"<<sum<<endl;
 } 
}
