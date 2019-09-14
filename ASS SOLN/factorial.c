/* PROGRAM TO CALCULATE FACTOROIAL
NAME: KOLAWOLE BLESSING OLUWATOSIN; 
MATRIC NO; 110404018
Program to compute the matric number of all the eligible students in computer 
science department,  Adekunle Ajasin University*/
#include<iostream>
using namespace std;
main()
{
int n, i;
long fact=1;
cout<<"\n Enter the value for n: ";
cin>>n;

for   (i=1; i<=n; i++)
{
fact = fact * n;
n = n-1;
}
cout<<"\n"<<fact;

}
