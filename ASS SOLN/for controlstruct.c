#include<iostream.h>
main()
{
int c;
cout<<"\n This program adds any integer number you enter 10 consecutive times \n\n ";
cout<<"Now, enter any integer number you want as C= "<<c;
for(c=1;c<=10;c++)
{
cin>>c;  
c = c + 1;
}
cout<<"\n The sum of the number you entered 10 consecutive time is; \n\n ";
 }
