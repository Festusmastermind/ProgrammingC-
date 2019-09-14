#include <iostream>
#include <stdio.h>
void numswap(int &m, int &n);
using namespace std;
main()
{
	int m, n;
	
	cout<<"\n Enter the value for m  and n : ";
	cin>>m>>n;
	cout<<"\n\n The values are "<< m <<" and "<<n;
    numswap (m,n);
	cout<<"\n\n The numbers when swapped are "<< m <<" and "<<n;
}

	void numswap(int &m, int &n)
	{
		int num;
		num = m ;      //assigning the value of m to num
		m = n;        //equalizing m and n
		n = num;     //assigning value contained in num i.e(m==n) to n
	return ;	
	}
