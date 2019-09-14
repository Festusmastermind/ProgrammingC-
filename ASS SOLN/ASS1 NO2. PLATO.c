/*Program to compute the matric number of all the students in computer 
science department,  Adekunle Ajasin University*/
#include<iostream>
using namespace std;
main()
{
int a, matno, matricno;
matno=1100404000;
cout<<"\n\t\t   ADEKUNLE AJASIN  UNIVERSITY";
cout<<"\n\t\t AKUNGBA-AKOKO, ONDO STATE";
cout<<"\n\t\tDEPARTMENT OF COMPUTER SCIENCE";
cout<<"\n\tALL \tCSC STUDENTS MATRICULATION LIST\n\n";
cout<<"\n\t\t S/N \t\t MATRIC NO\n";

for(a=1;a<=92;a++)
{
matricno=matno+a;
cout<<"\t\t "<<a<<"\t\t  "<<matricno<<" \n ";
}
return 0;
} 
