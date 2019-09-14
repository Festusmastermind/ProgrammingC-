/* C++ PRACTICAL 2
NAME: KOLAWOLE BLESSING OLUWATOSIN; MATRIC NO; 110404018
NAME: IRINOYE TITLAYO BUSIRAT; MATRIC NO: 110404017*/
// OUR PROGRAM

#include<iostream.h>

main()
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
if (A<B && A<C)
{
cout<<"\nThe smallest of the numbers you entered is "<<A<<" \n";
}
else if (B<A && B<C)
{
cout<<"\nThe smallest of the numbers you entered is "<<B<<" \n";
}
if (C<A && C<B)
{
cout<<"\nThe smallest of the numbers you entered is "<<C<<" \n";
}
if (A>B && A>C)
{
cout<<"\nThe largest of the numbers you entered is "<<A<<" \n\n";
}
else if (B>A && B>C)
{
cout<<"\nThe largest of the numbers you entered is "<<B<<" \n\n";
}
 if (C>A && C>B)
{
cout<<"\nThe largest of the numbers you entered is "<<C<<" \n\n";
}
if (A==B && B==C)
{
cout<<"\nThe three integer numbers you entered are equal\n\n";
}
if (A==B && A<C)
{
cout<<"\nThe smallest of the integer number entered is A & B which is "<<A<<"\n\n";
}
if (A==C && A<B)
{
cout<<"\nThe smallest of the integer number entered is A & C which is "<<A<<"\n\n";
}
if (B==C && B<A)
{
cout<<"\nThe smallest of the integer number entered is B & C which is "<<B<<"\n\n";
}
if (A==B && A>C)
{
cout<<"\nThe largest of the integer number entered is A & B which is "<<A<<"\n\n";
}
if (A==C && A>B)
{
cout<<"\nThe largest of the integer number entered is A & C which is "<<A<<"\n\n";
}
if (B==C && B>A)
{
cout<<"\nThe largest of the integer number entered is B & C which is "<<B<<"\n\n";
return 0;

}
}
