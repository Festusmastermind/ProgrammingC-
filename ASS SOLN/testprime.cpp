#include<iostream>
#include<cmath>
using namespace std;
int n;

int main()
{
	cout<<"Enter a number to test for prime: "<<endl;
	cin>>n;
	
	for(int i=2; i<10; i++)
	{
		if(n % i==0)
		{
			cout<<"Not prime"<<endl;
		}
		else if((n/1==n)&& (n/n==1)) 
		cout<<"Prime"<<endl;
		

	}
	cin.get();
	cin.get();
	
	
	return 0;
}
