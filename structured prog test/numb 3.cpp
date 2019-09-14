#include<iostream.h>
using namespace std;
main()
{
int a,b,c,d,e,f,g,h,i,j;
loop:
cout<<"enter the  digit for a respectively \n";
cin>>a;
b=a/10000;
c=a%10000;
d=c/1000;
e=c%1000;
f=e/100;
g=e%100;
h=g/10;
i=g%10;
j=i/1;
cout<<"\t"<<b<<"\t"<<d<<"\t"<<f<<"\t"<<h<<"\t"<<j<<endl;
	return 0;
	goto loop;
}