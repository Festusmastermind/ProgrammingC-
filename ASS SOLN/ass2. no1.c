/* NUMBER 1 
PROGRAM TO SHOW THE SMALLEST AND THE LARGEST
NAME: KOLAWOLE BLESSING OLUWATOSIN; 
MATRIC NO; 110404018*/

#include<iostream.h>
main()
{
int A,B,C,D,E;
cout<<"\nEnter the first integer as A: ";
cin>>A;
cout<<"\n\nEnter the second integer as B: ";
cin>>B;
cout<<"\n\nEnter the third integer as C: ";
cin>>C;
cout<<"\n\nEnter the fourth integer as D: ";
cin>>D;
cout<<"\n\nEnter the fifth integer as E: ";
cin>>E;

if (A==B && B==C && C==D && D==E)
{
cout<<"\n\n All the numbers you entered are equal";
}
else if (A<=B && A<=C && A<=D && A<=E)
{
cout<<"\n\n The smallest of the numbers you entered is: "<<A<<"\n ";
}
else if (B<=A && B<=C && B<=D && B<=E)
{
cout<<"\n\n The smallest of the numbers you entered is: "<<B<<"\n ";
}
else if (C<=B && C<=A && C<=D && C<=E)
{
cout<<"\n\n The smallest of the numbers you entered is: "<<C<<"\n ";
} 
else if (D<=B && D<=C && D<=A && D<=E)
{
cout<<"\n\n The smallest of the numbers you entered is: "<<D<<"\n ";
}
else if (E<=B && E<=C && E<=D && E<=A)
{
cout<<"\n\n The smallest of the numbers you entered is: "<<E<<"\n ";
}
if (A>=B && A>=C && A>=D && A>=E)
{
cout<<"\n\n The largest of the numbers you entered is: "<<A<<"\n ";
}
else if (B>=A && B>=C && B>=D && B>=E)
{
cout<<"\n\n The largest of the numbers you entered is: "<<B<<"\n ";
}
else if (C>=B && C>=A && C>=D && C>=E)
{
cout<<"\n\n The largest of the numbers you entered is: "<<C<<"\n ";
}
else if (D>=B && D>=C && D>=A && D>=E)
{
cout<<"\n\n The largest of the numbers you entered is: "<<D<<"\n ";
}
else if (E>=B && E>=C && E>=D && E>=A)
{
cout<<"\n\n The largest of the numbers you entered is: "<<E<<"\n\n ";
}
return 0;
}
 