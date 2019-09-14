#include<conio.h>
void main()
{
float c,f;
 int n;
 clrscr ()
 cout<<"enter the number of convertion";
 cin>>n;
 for(int i=1;i<=n;i++)
 {cout<<"enter the value in fahrenheit";
  cin>>f;
  c=5*(f-32)/9;
  cout<<"the value in degree celsius is "<<c;
 }
}
