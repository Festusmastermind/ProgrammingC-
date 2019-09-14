/* NUMBER 3 
PROGRAM TO SHOW THE NUMBER OF -VE, +VE AND ZEROs
NAME: KOLAWOLE BLESSING OLUWATOSIN; 
MATRIC NO; 110404018*/

#include <iostream.h>
main()
{
int L, M, N, O, P;
cout<<"\n Enter the first number as L: ";
cin>>L;
cout<<"\n Enter the second number as M: ";
cin>>M;
cout<<"\n Enter the third number as N: ";
cin>>N;
cout<<"\n Enter the forth number as O: ";
cin>>O;
cout<<"\n Enter the fifth number as P: ";
cin>>P;

if (L<0 && M<0 && N<0 && O<0 && P<0)
{
cout<<"\n You have entered five(5) negative numbers \n ";
}
else if ((L<0 && M<0 && N<0 && O<0)||(L<0 && M<0 && N<0 && P<0)||(L<0 && M<0 && P<0 && O<0)||(L<0 && P<0 && N<0 && O<0)||(O<0 && M<0 && N<0 && P<0))
{
cout<<"\n You have entered four(4) negative numbers \n ";
}
else if ((L<0 && M<0 && N<0)||(L<0 && M<0 && O<0)||(L<0 && M<0 && P<0)||(L<0 && N<0 && O<0)||(L<0 && P<0 && N<0)||(O<0 && M<0 && N<0)||(P<0 && M<0 && N<0)||(N<0 && O<0 && P<0)||(P<0 && O<0 && M<0)||(L<0 && O<0 && P<0))
{
cout<<"\n You have entered three(3) negative numbers \n ";
}
else if ((L<0 && M<0)||(L<0 && N<0)||(L<0 && O<0)||(L<0 && P<0)||(M<0 && N<0)||(M<0 && O<0)||(M<0 && P<0)||(N<0 && O<0)||(N<0 && P<0)||(P<0 && O<0))
{
cout<<"\n You have entered two(2) negative numbers \n ";
}
else if ((L<0 || M<0 || N<0 || O<0 || P<0))
{
cout<<"\n You have entered one(1) negative number \n ";
}


if ((L>0 && M>0 && N>0 && O>0 && P>0))
{
cout<<"\n You have entered five(5) positive numbers \n ";
}
else if ((L>0 && M>0 && N>0 && O>0)||(L>0 && M>0 && N>0 && P>0)||(L>0 && M>0 && P>0 && O>0)||(L>0 && P>0 && N>0 && O>0)||(O>0 && M>0 && N>0 && P>0))
{
cout<<"\n You have entered four(4) positive numbers \n ";
}
else if ((L>0 && M>0 && N>0)||(L>0 && M>0 && O>0)||(L>0 && M>0 && P>0)||(L>0 && N>0 && O>0)||(L>0 && P>0 && N>0)||(O>0 && M>0 && N>0)||(P>0 && M>0 && N>0)||(N>0 && O>0 && P>0)||(P>0 && O>0 && M>0)||(L>0 && O>0 && P>0))
{
cout<<"\n You have entered three(3) positive numbers \n ";
}
else if ((L>0 && M>0)||(L>0 && N>0)||(L>0 && O>0)||(L>0 && P>0)||(M>0 && N>0)||(M>0 && O>0)||(M>0 && P>0)||(N>0 && O>0)||(N>0 && P>0)||(P>0 && O>0))
{
cout<<"\n You have entered two(2) positive numbers \n ";
}
else if (L>0 || M>0 || N>0 || O>0 || P>0)
{
cout<<"\n You have entered one(1) positive number \n ";
}
 

if (L==0 && M==0 && N==0 && O==0 && P==0)
{
cout<<"\n You have entered five(5) zeros \n ";
}
else if ((L==0 && M==0 && N==0 && O==0)||(L==0 && M==0 && N==0 && P==0)||(L==0 && M==0 && P==0 && O==0)||(L==0 && P==0 && N==0 && O==0)||(O==0 && M==0 && N==0 && P==0))
{
cout<<"\n You have entered four(4) zeros \n ";
}
else if ((L==0 && M==0 && N==0)||(L==0 && M==0 && O==0)||(L==0 && M==0 && P==0)||(L==0 && N==0 && O==0)||(L==0 && P==0 && N==0)||(O==0 && M==0 && N==0)||(P==0 && M==0 && N==0)||(N==0 && O==0 && P==0)||(P==0 && O==0 && M==0)||(L==0 && O==0 && P==0))
{
cout<<"\n You have entered three(3) zeros \n ";
}
else if ((L==0 && M==0)||(L==0 && N==0)||(L==0 && O==0)||(L==0 && P==0)||(M==0 && N==0)||(M==0 && O==0)||(M==0 && P==0)||(N==0 && O==0)||(N==0 && P==0)||(P==0 && O==0))
{
cout<<"\n You have entered two(2) zeros \n ";
}
else if (L==0 || M==0 || N==0 || O==0 || P==0)
{
cout<<"\n You have entered one(1) zero \n\n ";
}
return 0;
}
 