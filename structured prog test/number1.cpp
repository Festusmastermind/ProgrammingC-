#include<iostream>
using namespace std;
main()
{
long int a,b,c,d,e;
cout<<"enter the  digit for a respectively \n";
cin>>a;
cout<<"enter the  digit for b respectively \n";
cin>>b;
cout<<"enter the  digit for c respectively \n";
cin>>c;
cout<<"enter the  digit for d respectively \n";
cin>>d;
cout<<"enter the  digit for e respectively \n";
cin>>e;
if(a==b==c==d==e)
	cout<<"the number inputted are the same\n\n";
	else if((a>b)&&(a>c)&&(a>d)&&(a>e))
	cout<<a<<"is the LARGEST NUMBER\n";
	else if((b>a)&&(b>c)&&(b>d)&&(b>e))
	cout<<b<<"is the LARGEST NUMBER\n";
	else if((c>a)&&(c>b)&&(c>d)&&(c>e))
	cout<<c<<"is the LARGEST NUMBER\n";
	else if((d>a)&&(d>b)&&(d>c)&&(d>e))
	cout<<d<<"is the LARGEST NUMBER\n";
	else if((e>a)&&(e>b)&&(e>c)&&(e>d))
	cout<<e<<"is the LARGEST NUMBER\n";
	if(a==b==c==d==e)
	cout<<"the number inputted are the same\n\n";
	else if((a<=b)&&(a<=c)&&(a<=d)&&(a<=e))
	cout<<a<<"is the SMALLEST NUMBER\n";
	else if((b<=a)&&(b<=c)&&(b<=d)&&(b<=e))
	cout<<b<<"is the SMALLEST NUMBER\n";
    else if((c<=a)&&(c<=b)&&(c<=d)&&(c<=e))
	cout<<c<<"is the SMALLEST NUMBER\n";
	else if((d<=a)&&(d<=b)&&(d<=c)&&(d<=e))
	cout<<d<<"is the SMALLEST NUMBER\n";
    else if((e<=a)&&(e<=b)&&(e<=c)&&(e<=d))
	cout<<e<<"is the SMALLEST NUMBER\n";
	return 0;
}
