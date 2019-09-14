/* NUMBER 2(i)
NAME: KOLAWOLE BLESSING OLUWATOSIN; 
MATRIC NO; 110404018
Program to compute the matric number of all the students in computer 
science department,  Adekunle Ajasin University*/

#include <iostream.h>
using namespace std;
main()
{
int a, matno, matricno;
matno=1100404000;
cout<<"\n\t\t  ADEKUNLE AJASIN UNIVERSITY";
cout<<"\n\n\t\t AKUNGBA - AKOKO, ONDO STATE";
cout<<"\n\n\t\tDEPARTMENT OF COMPUTER SCIENCE";
cout<<"\n\n\t      ALL CSC STUDENTS MATRICULATION LIST\n";
cout<<"\t     ____________________________________\n"; 
cout<<"\n\n\t\t S/N \t\t  MATRIC NO\n\n";

for(a=1;a<=92;a++)
{
matricno=matno+a;
cout<<"\t\t "<<a<<"\t\t  "<<matricno<<" \n\n ";
}
return 0;
} 
