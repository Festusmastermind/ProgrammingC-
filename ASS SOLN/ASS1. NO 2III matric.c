/* NUMBER 2(ii)
NAME: KOLAWOLE BLESSING OLUWATOSIN; 
MATRIC NO; 110404018
Program to compute the matric number of all the eligible students in computer 
science department,  Adekunle Ajasin University*/

#include<iostream.h>
main()
{
int c, matno, matricno;
matno=1100404000;
cout<<"\n\t\t          ADEKUNLE AJASIN UNIVERSITY\n";
cout<<"\n\t\t         AKUNGBA - AKOKO, ONDO STATE\n";
cout<<"\n\t\t       DEPARTMENT OF COMPUTER SCIENCE\n";
cout<<"\n\t      ALL CSC STUDENTS' ELIGIBILITY MATRICULATION LIST\n";
cout<<"\t     _________________________________________________\n\n"; 
cout<<"\n\t\t S/N \t\t  MATRIC NO\n\n";

for(c=1;c<=92;c++)
{
matricno=matno+c;
if(c>70)break;
cout<<"\t\t "<<c<<"\t\t  "<<matricno<<" \n\n ";
}
return 0;
} 
