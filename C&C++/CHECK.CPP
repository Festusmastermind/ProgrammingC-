#include<iostream.h>
int main()
{
int a,c;
do {
  cout<<"enter a number (type 0 to end)"<<"\t";
  cin>>a;
  c=a % 2;
  if (c==0 )
  cout<<"the number enter is even number"<<"\n";
  else
  cout<<"the number enter is odd"<<"\n";
}while (a != 0);
return 0;
}