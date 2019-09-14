long int myfact(int n)
{
 int fact=1;
  for(int i=1; i<=n; i++){
  	fact=fact*i;
  }	
	return fact;
	
}
#include<iostream>
using namespace std;
main()
{
	int n;
	cout<<"Enter the factorial no: ";
	cin>>n;
	cout<<"\nThe factorial of " <<n<<"is: "<<myfact(n);
}
