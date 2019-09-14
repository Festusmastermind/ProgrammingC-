/*Program to compute the matric number of all the students in computer 
science department,  Adekunle Ajasin University*/
#include <iostream>
using namespace std;
main()
{
int a, b, c, matno, matricno, matricnoo, matricnos, code;
matno=1100404000;
cout<<"Enter code between 1-3 to the select the answers for various questions";
cin>>code;
switch (code)
{
case 1:
{
cout<<"\n\t\t   ADEKUNLE AJASIN  UNIVERSITY";
cout<<"\n\t\t AKUNGBA-AKOKO, ONDO STATE";
cout<<"\n\t\tDEPARTMENT OF COMPUTER SCIENCE";
cout<<"\n\t      ALL CSC STUDENTS MATRICULATION LIST\n\n";
cout<<"\n\t\t S/N \t\t  MATRIC NO\n";

for(a=1;a<=92;a++)
{
matricno=matno+a;
cout<<"\t\t "<<a<<"\t\t  "<<matricno<<" \n ";
}
}
break;
case 2:
{
cout<<"\n\t\t   ADEKUNLE AJASIN  UNIVERSITY";
cout<<"\n\t\t AKUNGBA-AKOKO, ONDO STATE";
cout<<"\n\t\tDEPARTMENT OF COMPUTER SCIENCE";
cout<<"\n\t      ALL CSC STUDENTS MATRICULATION LIST (WITH EXEMPTION)\n\n";
cout<<"\n\t\t S/N \t\t  MATRIC NO\n";

for(b=1;b<=92;b++)
{
matricnoo=matno+b;
if((b==25)||(b==32)||(b==43)||(b==68))continue;
cout<<"\t\t "<<b<<"\t\t  "<<matricnoo<<" \n ";
}
} 
break;
case 3:
{
cout<<"\n\t\t   ADEKUNLE AJASIN  UNIVERSITY";
cout<<"\n\t\t AKUNGBA-AKOKO, ONDO STATE";
cout<<"\n\t\tDEPARTMENT OF COMPUTER SCIENCE";
cout<<"\n\t      ALL CSC STUDENTS' ELIGIBILITY MATRICULATION LIST\n\n";
cout<<"\n\t\t S/N \t\t  MATRIC NO\n";

for(c=1;c<=92;c++)
{
matricnos=matno+c;
if(c>70)continue;
cout<<"\t\t "<<c<<"\t\t  "<<matricnos<<" \n ";
}
} 
break;
default:
{
cout<<"\n Sorry, you have selected a wrong code\n ";
cout<<"\n Exit, then start another operation and enter operation code within 1 - 3\n\n ";
cout<<"\n Press Enter key to exit!!!\n\n";

return 0;
}

}


}
