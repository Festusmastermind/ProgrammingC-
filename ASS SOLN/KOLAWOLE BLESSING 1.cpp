#include <iostream>
int facto(int p);
using namespace std;
main()
{
	int m, n, t, perm, comb;
	cout<<"\n Enter thr value for m and n: ";
	cin>>m>>n;
	t = m - n;
	cout<<"\n The factorial of m is : "<<facto(m);
	cout<<"\n The factorial of n is : "<<facto(n);
	perm = facto(m)/facto(n);
	cout<<"\n The permutation of m and n is : "<<perm;
    comb = facto(m)/(facto(n)* facto(t));
	cout<<"\n The permutation of m and n is : "<<comb;
}
int facto(int p)
{
	int fact = 1;
	for (int i=0;i<=p;i++)
	{
	fact = fact * p;
	p = p - 1; 
	}
	return fact;
int perm, m, n, t;
    for (int i=0;i<=p;i++)
    {
    	perm = facto(m)/facto(n);
    }
    return perm;
    
    int comb;
    for (int i=0;i<=p;i++)
    {
       comb = facto(m)/(facto(n)* facto(t));
    }
    return comb;
}
    	
    	
    	
    	
