//using bottom-up approach for the programming
long int myfact(int x)
{
 int fact=1;
  for(int i=1; i<=x; i++){
  	fact=fact*i;
  }	
	return fact;
	
}
#include<iostream>
using namespace std;
main()
{
	int n,m;
	cout<<"Enter the first factorial no: ";
	cin>>n;
	cout<<"\Enter the second factorial no: ";
	cin>>m;
	cout<<"\nThe permutation of "<<n<<"and"<<m <<"is:"<<myfact(n)/(myfact(n-m));
}
