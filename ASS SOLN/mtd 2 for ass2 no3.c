/* NUMBER 3 
PROGRAM TO SHOW THE NUMBER OF -VE, +VE AND ZEROs
NAME: KOLAWOLE BLESSING OLUWATOSIN; 
MATRIC NO; 110404018*/

#include <iostream.h>
main()
{
int A, B, C, D, E;
int equal0=0, grt0=0, less0=0;
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
equal0++;
}
else if (A>0)
{
grt0++;
}
else if (A<0)
{
less0++;
}
if (B==0)
{
grt0++;
}
else if (B<0)
{
less0++;
}  
else if(B>0)
{
grt0++;
}
if (C==0)
{
equal0++;
}
else if (C>0)
{
grt0++;
}
else if (C<0)
{
less0++;
}
if (D==0)
{
equal0++;
}
else if (D>0)
{
grt0++;
}
else if (D<0)
{
less0++;
}
if (E==0)
{
equal0++;
}
else if (E>0)
{
grt0++;
}
else if (E<0)
{
less0++;
}
{
cout<<"\n\n The number of zeros you inputted is : "<<equal0;
cout<<"\n\n The number of positive numbers you inputted is: "<<grt0;
cout<<"\n\n The number of negative numbers you inputted is: "<<less0<<"\n\n";
 return 0;

}
}