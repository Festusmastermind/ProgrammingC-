/* NUMBER 2 
EVEN OR ODD PROGRAM DETERMINANT
NAME: KOLAWOLE BLESSING OLUWATOSIN; 
MATRIC NO; 110404018*/

#include<iostream>
using namespace std;
main()
{
int A, B;
for (; ;)
{
cout<<"\n Enter any integer as A: ";
cin>>A;
if (A==0)
{
cout<<"\n The number you entered is a neutral number.\n\n";
}
else if (A%2==0)
{
cout<<"\n The integer number you entered is even\n\n";
}
else
{
cout<<"\n The integer number you entered is odd\n\n ";
}
cout<<"\n BINGO!!!\n\n";
}
return 0;
}
