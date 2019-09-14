/* NUMBER 4 
PROGRAM TO SPACE INPUTS
NAME: KOLAWOLE BLESSING OLUWATOSIN; 
MATRIC NO; 110404018*/

#include<iostream>
using namespace std;
main()
{
int Z,P,Q,R,S,T,B,X,F,D,E,I,O,N,M,V,C,G;
cout<<"\n To EXIT, Press the cancel button!!! \n\n";
for (; ;)
{
cout<<"\n Enter any number containing five digits as Z: \n\n ";
cin>>Z;
P = Z % 10;
T = Z % 100;
Q = T / 10;
R = Z % 1000;
X = Z % 10000;
F = X / 1000; 
S = Z / 10000;
B = R / 100;
if (S == 0 || S > 9)
{
cout<<"\n Error!!! You are to enter a five digit number\n\n ";
}
else
{
    cout<<"\n The number you entered is: \n\n "<<S<<"   "<<F<<"   "<<B<<"   "<<Q<<"   "<<P<<"   \n\n ";
    cout<<"\n The reverse of the number you entered is: \n\n "<<P<<"   "<<Q<<"   "<<B<<"   "<<F<<"   "<<S<<"   \n\n ";
}
}
return 0;
}
