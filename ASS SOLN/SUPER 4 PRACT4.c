#include<iostream.h>
main()
{
  int sum3 = 0, odd = 1;
  int sum2 = 0, even = 2;
  int sum1 = 0, num = 1;
  cout<<"\n\n The sum of the first five positive integers ";
  for(int i=1; i<=5; i++)
  {
   sum1 += num;    //sum1 = sum1 + num
   cout<<num<<", ";
  num  += 1;  // num = num + 1
}
cout<<" is: "<<sum1<<"\n";
 cout<<"\n\n The sum of the first five even integers ";
 for(int j=1; j<=5; j++)
 {
  sum2 += even;   // sum2 = sum2 + even
  cout<<even<<", ";
  even += 2;    //even = even + 2  
}
 cout<<" is: "<<sum2<<"\n";
  cout<<"\n\n The sum of the first five odd integers ";  
for(int k=1; k<=5; k++)
 {
  sum3 += odd;   // sum3 = sum3 + odd
   cout<<odd<<", ";
  odd += 2;     //odd = odd + 2 
}
 cout<<" is: "<<sum3<<"\n\n ";  

return 0;
}
