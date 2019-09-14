//QUADRATIC EQUATION
#include <iostream.h>
#include <math.h>

main()
{
  double a, b, c, x, p, q;

  cout<<"\n\n Enter the value for constant A: ";
  cin>>a;
  cout<<"\n\n Enter the value for constant B: ";
  cin>>b;
  cout<<"\n\n Enter the value for constant C: ";
  cin>>c;  
  if (a == 0 && b==0 && c==0)
  {
   cout<<"\n No equation is formed ";
   cout<<"\n Enter values greater than 0 for at least two of your variables";
}
else if (a != 0 && b!=0 && c!=0) 
{
  cout<<"\n\n Your Quadratic Equation is "<<a<<"x2 + "<<b<<"x + "<<c<<" = 0";
  p = (-(b) + sqrt((pow(b,2))- (4*a*c)))/(2*a);
  q = (-(b) - sqrt((pow(b,2))- (4*a*c)))/(2*a);
  cout<<"\n\n The solution forms two roots which are: x = "<<p<<" or "<<q;
}
else if (a == 0)
{
  cout<<"\n\n Your Quadratic Equation "<<a<<"x2 + "<<b<<"x + "<<c<<" = 0 is : "<<b<<"x + "<<c<<" = 0";
  x = -(c)/b;
  cout<<"\n\n One root is formed, X = "<<x;
}
else if (b==0)
{
  cout<<"\n\n Your Quadratic Equation "<<a<<"x2 + "<<b<<"x + "<<c<<" = 0 is : "<<a<<"x2 + "<<c<<" = 0";
  p = sqrt(-(c)/a);
  q = -1 * (sqrt(-(c)/a));
  
  cout<<"\n\n complex roots are formed, X = "<<p<<" or "<<q;
}
else if (c==0)
{
  cout<<"\n\n Your Quadratic Equation "<<a<<"x2 + "<<b<<"x + "<<c<<" = 0 is : "<<a<<"x2 + "<<b<<"x = 0";
  x = -(b)/a;
cout<<"\n\n One root is formed, X = "<<x;
}
 return 0;
}
 
