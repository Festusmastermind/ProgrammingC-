/* NUMBER 3 
PROGRAM TO SHOW THE NUMBER OF -VE, +VE AND ZEROs
NAME: KOLAWOLE BLESSING OLUWATOSIN; 
MATRIC NO; 110404018*/

#include <iostream.h>
main()
{
int A, B, C, D, E; 
int numbzero = 0, numbneg = 0, numbpos = 0;
int i = 0;
i = i + 1;
cout<<"\n Enter the first number as A: ";
cin>>A;
cout<<"\n Enter the second number as B: ";
cin>>B;
cout<<"\n Enter the third number as C: ";
cin>>C;
cout<<"\n Enter the fourth number as D: ";
cin>>D;
cout<<"\n Enter the fifth number as E: ";
cin>>E;

if (A==0)
{
numbzero = numbzero + i;
}
else if (A>0)
{
numbpos = numbpos + i;
}
else if (A<0)
{
numbneg = numbneg + i;
}
if (B==0)
{
numbzero = numbzero + i;
}  
else if(B>0)
{
numbpos = numbpos + i;
}
else if (B<0)
{
numbneg = numbneg + i;
}
if (C==0)
{
numbzero = numbzero + i;
}
else if (C>0)
{
numbpos = numbpos + i;
}
else if (C<0)
{
numbneg = numbneg + i;
}
if (D==0)
{
numbzero = numbzero + i;
}
else if (D>0)
{
numbpos = numbpos + i;
}
else if (D<0)
{
numbneg = numbneg + i;
}
if (E==0)
{
numbzero = numbzero + i;
}
else if (E>0)
{
numbpos = numbpos + i;
}
else if (E<0)
{
numbneg = numbneg + i;
}
{
cout<<"\n\n The number of zeros you inputted is : "<<numbzero;
cout<<"\n\n The number of positive numbers you inputted is: "<<numbpos;
cout<<"\n\n The number of negative numbers you inputted is: "<<numbneg<<"\n\n";
}
return 0;
}
