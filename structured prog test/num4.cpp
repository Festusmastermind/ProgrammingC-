#include<iostream.h>
using namespace std;
main()
{
int a,b,c,d,e,n;
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
if ((a<0)&&(b<0)&&(c<0)&&(d<0)&&(e<0))
cout<<"they are '5'negative numbers and '0' positive and '0'zeros\n\n";
else if ((a<0)&&(b<0)&&(c>0)&&(d>0)&&(e>0))
cout<<"they are '2'negative numbers ,'3' positive and '0'zeros\n\n";
else if ((a<0)&&(b<0)&&(c<0)&&(d>0)&&(e>0))
cout<<"they are '3'negative numbers and '2' positive and '0'zeros\n\n";
else if ((a<0)&&(b<0)&&(c<0)&&(d<0)&&(e>0))
cout<<"they are '4'negative numbers,'1' positive and '0'zeros\n\n";
if ((a>0)&&(b>0)&&(c>0)&&(d>0)&&(e>0))
cout<<"they are '0'negative numbers and '5' positive and '0'zeros\n\n";
else if ((a>0)&&(b==0)&&(c==0)&&(d==0)&&(e==0))
cout<<"they are '0'negative numbers and '1' positive and '4'zeros\n\n";
else if ((a>0)&&(b>0)&&(c==0)&&(d==0)&&(e==0))
cout<<"they are '0'negative numbers,'2' positive and '3'zeros\n\n";
else if ((a>0)&&(b>0)&&(c>0)&&(d==0)&&(e==0))
cout<<"they are '0'negative numbers ,'3' positive and '2'zeros\n\n";
else if ((a>0)&&(b>0)&&(c>0)&&(d>0)&&(e==0))
cout<<"they are '0'negative numbers ,'4' positive and '1'zeros\n\n";
else if ((a>0)&&(b<0)&&(c<0)&&(d<0)&&(e==0))
cout<<"they are '4'negative numbers ,'0' positive and '1'zeros\n\n";
else if ((a<0)&&(b>0)&&(c>0)&&(d>0)&&(e>0))
cout<<"they are '1'negative numbers,'4' positive and '0'zeros\n\n";
else if ((a==0)&&(b==0)&&(c==0)&&(d==0)&&(e==0))
cout<<"they are '0'negative numbers and '0' positive and '5'zeros\n\n";
else if ((a<0)&&(b==0)&&(c==0)&&(d==0)&&(e==0))
cout<<"they are '1'negative numbers and '0' positive and '4'zeros\n\n";
else if ((a<0)&&(b<0)&&(c==0)&&(d==0)&&(e==0))
cout<<"they are '2'negative numbers,'0' positive and '3'zeros\n\n";
else if ((a<0)&&(b<0)&&(c<0)&&(d==0)&&(e==0))
cout<<"they are '3'negative numbers ,'0' positive and '2'zeros\n\n";
else if ((a<0)&&(b>0)&&(c==0)&&(d==0)&&(e==0))
cout<<"they are '1'negative numbers,'1' positive and '3'zeros\n\n";
else if ((a<0)&&(b<0)&&(c<0)&&(d>0)&&(e==0))
cout<<"they are '3'negative numbers ,'1' positive and '1'zeros\n\n";
else if ((a>0)&&(b>0)&&(c>0)&&(d>0)&&(e==0))
cout<<"they are '1'negative numbers ,'3' positive and '1'zeros\n\n";
else if ((a<0)&&(b<0)&&(c>0)&&(d>0)&&(e==0))
cout<<"they are '2'negative numbers,'2' positive and '1'zeros\n\n";
else if ((a<0)&&(b>0)&&(c>0)&&(d==0)&&(e==0))
cout<<"they are '1'negative numbers ,'2' positive and '2'zeros\n\n";
else if ((a<0)&&(b<0)&&(c>0)&&(d==0)&&(e==0))
cout<<"they are '2'negative numbers ,'1' positive and '2'zeros\n\n";
return 0;
}