/* C++ PRACTICAL 2
NAME: KOLAWOLE BLESSING OLUWATOSIN; MATRIC NO; 110404018
NAME: IRINOYE TITLAYO BUSIRAT; MATRIC NO: 110404017*/
// OUR PROGRAM

#include<iostream>
using namespace std;
int main()
{
int A,B,C,SUM,AVR,PROD;
cout<<"\nEnter the first integer as A: ";
cin>>A;
cout<<"\n\nEnter the second integer as B: ";
cin>>B;
cout<<"\n\nEnter the third integer as C: ";
cin>>C;
SUM = A + B + C;
cout<<"\n\nThe sum of the integer numbers you entered is: "<<SUM;
AVR = SUM / 3;
cout<<"\n\nThe average of the integer numbers you entered is: "<<AVR;
PROD = A * B * C;
cout<<"\n\nThe product of the integer numbers you entered is: "<<PROD<<"\n\n";
if (A==B && B==C)
{
cout<<"\nThe three integer numbers you entered are equal\n\n";
}
else if (A<=B && A<=C)
{
cout<<"\nThe smallest of the numbers you entered is "<<A<<" \n";
}
else if (B<=A && B<=C)
{
cout<<"\nThe smallest of the numbers you entered is "<<B<<" \n";
}
else if (C<=A && C<=B)
{
cout<<"\nThe smallest of the numbers you entered is "<<C<<" \n";
}
else if (A>=B && A>=C)
{
cout<<"\nThe largest of the numbers you entered is "<<A<<" \n\n";
}
else if (B>=A && B>=C)
{
cout<<"\nThe largest of the numbers you entered is "<<B<<" \n\n";
}
else if (C>=A && C>=B)
{
cout<<"\nThe largest of the numbers you entered is "<<C<<" \n\n";
}
return 0;
}
