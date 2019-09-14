#include<iostream.h>
int n,d,s,r;
void main()
{
cin>>n;
do{
d=n/2;
r=n-(d*2);
cout<<n<<" divided by 2 gives "<<d <<" reminder "<<r<<endl;
n=d;
}
while (n>0);
cout>>"(start the binary arrangement from below for result)";
};