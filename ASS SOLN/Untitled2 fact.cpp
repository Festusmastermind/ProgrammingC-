#include <iostream.h>
main ()
{
int m, n;
cout<<"\n Enter the value for m: ";
cin>>m;
cout<<"\n Enter the value for n: ";
cin>>n;
}
 int facto(int m)
 {
int fact = 1; int i;
while (i>0)
{
      i = m;
  fact = fact * i;
  i--;
}  
cout<<fact;
return fact;
}
int factoo(int t)
{
 int fact2 = 1;  int j;   
 int m, n;
t = m - n;
while (j>0)
{
      j = t;
  fact2 = fact2 * j;
    j--;    
}  
cout<<fact2;
return fact2;
}
int permutation(int m, int t)
{
int perm;
perm = facto(m)/factoo(t);
cout<<"\n The permutation of m and n is : "<<perm;
cout<<perm;
return perm;
}

