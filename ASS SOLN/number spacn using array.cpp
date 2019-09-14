#include <iostream>
using namespace std;
int main()
{
	int  n;
	cout<<"\n Enter the lenght of the number you want to input : ";
	cin>>n;
	int num[n];
	
	cout<<"\n Now enter the numbers : ";
	for (int i=0; i<n; i++)
	{
	cin>>num [i];
    }
    
    cout<<"\n The numbers are : ";
	for (int i=0; i<n; i++)
	{
	cout<<"   "<<num[i];
    }
    cout<<"\n The reverse of the numbers are : ";
	for (int i=n; i>=0; i--)
	{
	cout<<"   "<<num[i];
    }
    return 0;
  }
