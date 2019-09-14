/* NUMBER 2(ii)
NAME: KOLAWOLE BLESSING OLUWATOSIN; 
MATRIC NO; 110404018
Program to compute the matric number of Csc students in computer 
science department after expunging some matric nos, in Adekunle Ajasin University*/

#include<iostream.h>
main()
{
int b, matno, matricno;
matno=1100404000;
cout<<"\n\t\t          ADEKUNLE AJASIN UNIVERSITY\n";
cout<<"\n\t\t         AKUNGBA - AKOKO, ONDO STATE\n";
cout<<"\n\t\t       DEPARTMENT OF COMPUTER SCIENCE\n";
cout<<"\n\t      ALL CSC STUDENTS MATRICULATION LIST (WITH EXEMPTION)\n";
cout<<"\t     _______________________________________________________\n\n";
cout<<"\n\t\t S/N \t\t  MATRIC NO\n\n";

for(b=1;b<=92;b++)
{
matricno=matno+b;
if((b==25)||(b==32)||(b==43)||(b==68))continue;
cout<<"\t\t "<<b<<"\t\t  "<<matricno<<" \n ";
}
return 0;
} 
