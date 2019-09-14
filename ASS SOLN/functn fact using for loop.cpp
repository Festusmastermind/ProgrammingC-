#include <iostream>
int facto(int);
int k;
using namespace std;
int main ()
{
																																																																								
int m, n, t, perm, comb;
cout<<"\n Enter the value for m: ";
cin>>m;
cout<<"\n Enter the value for n: ";
cin>>n;	
t = m - n;	
cout<<"\n The factorial of m is: "<<facto(m);
cout<<"\n The factorial of n is: "<<facto(n);
cout<<"\n The factorial of t is: "<<facto(t);																																																																																																																																																																																																																																																
perm = facto(m)/facto(t);
cout<<"\n\n The permutation of m and n is : "<<perm;
comb = facto(m)/(facto(n) * facto(t));
cout<<"\n\n The combination of m and n is : "<<comb;
}
 int facto(int k)
 {
int fact = 1;
for (int i=k; i>=1; i--)
{
  fact = fact * k;
  k--;
}  
return fact;
}
	

