#include <iostream>
int maximum(int);
int minimum(int);
int p;
using namespace std;
main()
{
	int a;
	cout<<"\n Enter the quantity of the numbers of which you want to find its maximum : ";
	cin>>a;
	cout<<"\n\n The maximum of the numbers is : "<<maximum(a);
	cout<<"\n\n The minimum of the numbers is : "<<minimum(a);
}
	int maximum(int p)
	{
		int num[p];
		int maxnum;
		cout<<"\n Now, enter the numbers: ";
		for (int i=0;i<p;i++)
		{
			cin>>num[i];
		}
		maxnum = num[0];
		for (int i=0;i<p;i++)
		{
			if(num[i] > maxnum)
			{
				maxnum = num[i];
			}
		}
		return maxnum;
	} 
	int minimum(int p)
	{
		int minnum;
		int num[p];
	
		minnum = num[0];
		for (int i=0;i<p;i++)
		{
			if(num[i] < minnum)
			{
				minnum = num[i];
			}
		}
		return minnum;
	} 
	

