#include <iostream>
using namespace std;
main()
{
	int palnum, numa = 1, numb = 1, num = 0, numr = 1;
	cout<<"\n The palindrome numbers are : "<<num;
	for (int i = 1;i<=15;i++)
	{
		cout<<", "<<numa;
		numb = numa + numb;
		numa = numb - numa;
	}
	return 0;
	} 
	
