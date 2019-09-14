#include <iostream.h>
#include <stdio.h>
void swap (int &m,int &n);
main()
{
int m, n;
cout<<"\n Enter  the value of m: ";
cin>>m;
cout<<"\n\n Enter thr value for n: ";
cin>>n;

cout<<"\n\n The value for m and n are "<<m<<"  "<<n<<endl;
swap(m, n);
cout<<"\n\n The value for m and n are "<<m<<"  "<<n<<endl;
system ("pause");
system ("pause");
}
 void swap (int &m,int &n)
 {
int temp;
temp = m;
m = n;
n = temp;
return ;
}

