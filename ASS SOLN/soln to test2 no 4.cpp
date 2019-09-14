
#include<iostream>
using namespace std;
int main()
{
int code,count,maxcount;
cout<<"_________________________________________________\n";
cout<<"|ARRAYSOFT-OPERATIONALMENU \t\t|\n";
cout<<"|1.sum of elements\t2.least elements \t|\n";
cout<<"|3.most occured element\t4.Arrange elements\t|\n";
cout<<"|5.transpose elememts\t6.Exit application \t|\n";
cout<<"|_______________________________________________|\n";
cout<<"\nThe Elements: {3,1,5,2,7,2,0,4,2,9,4,3,1}\n\n";
int myarray[]={3,1,5,2,7,2,0,4,2,9,4,3,1};
int least=myarray[0];
for(;;)
{
int sum=0;
cout<<"Enter menu code: ";
cin>>code;
switch(code)
{
case 1:
for(int i=0;i<13;i++)
{
sum=sum+myarray[i];
}
cout<<sum<<endl;
break;
case 2:
for(int i=0;i<13;i++)
{
if(myarray[i]<least)
{
least=myarray[i];
}
}
cout<<least<<endl;
break;
case 3:
//searching for the highest occured count
maxcount=0;
for(int i=0;i<13;i++)
{
count=1;
for(int j=i+1;j<13;j++)
{
if(myarray[i]==myarray[j])count++;
}
if(count>maxcount)maxcount=count;
}
//printing the most occured
for(int i=0;i<13;i++)
{
count=1;
for(int j=i+1;j<13;j++)
{
if(myarray[i]==myarray[j])count++;
}
if(count==maxcount)cout<<myarray[i]<<"\t";
}
cout<<endl;
break;
case 4:
int temp;
for(int i=0;i<13;i++)
{
for(int j=1;j<13;j++)
{
if(myarray[j-1]>myarray[j])
{
temp=myarray[j-1];
myarray[j-1]=myarray[j];
myarray[j]=temp;
}
}
}
for(int i=0;i<13;i++)
{
cout<<myarray[i]<<"\t";
}
cout<<endl;
break;
case 5:
int transpose[13][1];
for(int i=0;i<13;i++)
{
transpose[i][1]=myarray[i];
}
for(int i=0;i<13;i++)
{
cout<<transpose[i][1]<<endl;
}
break;
case 6:
return 0;
break;
default:
cout<<"try again\n";
break;
}
}
return 0;
}
