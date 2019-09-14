//QUADRATIC EQUATION
#include <iostream>
#include <math.h>
using namespace std;

main()
{
  double a, b, c, x, p, q;

  cout<<"\n Enter the value for constant A: ";
  cin>>a;
  cout<<"\n\n Enter the value for constant B: ";
  cin>>b;
  cout<<"\n\n Enter the value for constant C: ";
  cin>>c;  
  if (a==0 && b==0 && c==0)
  {
   cout<<"\n No equation is formed ";
   cout<<"\n Enter values greater than 0 for at least two of your variables";
}
else if (a!=0 && b!=0 && c!=0) 
{
  cout<<"\n Your Quadratic Equation is "<<a<<"x2 + "<<b<<"x + "<<c;
  p = (-(b) + sqrt((pow(b,2))- (4*a*c)))/(2*a);
  q = (-(b) - sqrt((pow(b,2))- (4*a*c)))/(2*a);
  cout<<"\n The solution forms two roots which are: x = "<<p<<" or "<<q;
}
else if (a == 0)
{
x = -(c)/b;
cout<<"\n One root is formed, X = "<<x;
}
else if (b==0)
{
x = sqrt(-(c)/a);
cout<<"\n complex roots are formed, X = "<<x;
}
else if (c==0)
{
x = -(b)/a;
cout<<"\n One root is formed, X = "<<x;
}
 return 0;
}
 
