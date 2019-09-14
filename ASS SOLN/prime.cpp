#include<iostream>
using namespace std;
main()
{
int a,zcount;
cout<<"Enter the value\n";
cin>>a;
int num[a];
for(int i=0;i<a;i++)
{
cout<<"Enter number "<<i+1<< "value\n";
cin>>num[i];
}
for(int i=0;i<a;i++)
{
int qcount=0,zcount=0;
for(int j=1;j<=num[i];j++)
{
if(num[i]%j==0)
{
qcount++;
}
}
if(qcount==2)
{

zcount++;
cout<<num[i]<<"is a prime number"<<endl;
}
}

cout<<"\nThe numbers of prime numbers is "<<zcount;
}

