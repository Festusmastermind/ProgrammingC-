//QUADRATIC EQUATION
#include <stdio.h>
#include <math.h>


main()
{
  double a, b, c, x, p, q;

 printf("\n Enter the value for constant A: ");
  scanf("%i" &a);
   printf("\n\n Enter the value for constant B: ");
  scanf("%i",&b);
   printf("\n\n Enter the value for constant C: ");
  scanf("%i",&c);  
  if (a==0 && b==0 && c==0)
  {
    printf("\n No equation is formed ");
    printf("\n Enter values greater than 0 for at least two of your variables");
}
else if (a!=0 && b!=0 && c!=0) 
{
   printf("\n Your Quadratic Equation is %dx2 + %dbx + %dc",a,b,c);
  p = (-(b) + sqrt((pow(b,2))- (4*a*c)))/(2*a);
  q = (-(b) - sqrt((pow(b,2))- (4*a*c)))/(2*a);
   printf("\n The solution forms two roots which are: x = %d or %d",p,q);
}
else if (a == 0)
{
x = -(c)/b;
 printf("\n One root is formed, X = %d",x);
}
else if (b==0)
{
x = sqrt(-(c)/a);
 printf("\n complex roots are formed, X = %d",x);
}
else if (c==0)
{
x = -(b)/a;
 printf("\n One root is formed, X =%d ",x);
}
 return 0;
}
 
