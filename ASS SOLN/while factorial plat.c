#include <iostream.h>
main ()
{
int m, n;
cout<<"\n Enter the value for m: ";
cin>>m;
cout<<"\n Enter the value for n: ";
cin>>n;

}
int t = m - n;
 int facto(int m)
 {
int fact = 1, i = 1 ;
while (i<=m)
{
  fact = fact * m;
  m = m - 1;
    i = i + 1;
}  cout<<fact;
int j = 1, fact2 = 1;
while (j<=t)
{
  fact2 = fact2 * t;
  t = t - 1;
    j++;    
}  cout<<fact2;
int perm;
perm = fact/fact2;
cout<<"\n The permutation of m and n is : "<<perm;
cout<<perm;
return perm;
}
