#include<iostream.h>
using namespace std;
main()
{
int k,l,m,n,p;
int pos=0,neg=0,zero=0;
cout<<"enter the first num:";
cin>>k;
cout<<"enter the second num:";
cin>>l;
cout<<"enter the third num:";
cin>>m;
cout<<"enter the fouth num:";
cin>>n;
cout<<"fifth num:";
cin>>p;
if(k<0)
{
	neg=neg+1;
}
else if(k>0)
{
pos=pos+1;
}
else if(k==0)
zero=zero+1;
if(l<0)
{
neg=neg+1;
}
else if(l>0)
{
pos=pos+1;
}
else if(l==0)
zero=zero+1;
if(m<0)
{
neg=neg+1;
}
else if(m>0)
{
pos=pos+1;
}
else
zero=zero+1;
if(n<0)
{
neg=neg+1;
}
else if(n>0)
{
pos=pos+1;
}
else
zero=zero+1;
if(p<0)
{
neg=neg+1;
}
else if(p>0)
{
pos=pos+1;
}
else
zero=zero+1;
cout<<"the number of positive integer is="<<pos<<endl;
cout<<"the num of nagative integer is="<<neg<<endl;
cout<<"the num of zer integer is="<<zero<<endl;
}