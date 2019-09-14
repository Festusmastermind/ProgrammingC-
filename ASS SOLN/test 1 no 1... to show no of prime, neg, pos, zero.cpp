#include <iostream>
using namespace std;
main()
{
      
      int A, B, C, D, E, F, G, H, I, J;
      int i = 1, posnum = 0, negnum = 0, zeronum = 0, primnum = 0;
      
      cout<<"\n Enter any ten numbers ";
      cin>>A>>B;
      
      if (A<0)
      {
      negnum += i;
      }
      if (A>0)
      {
      posnum += i;
      }
      if (A==0)
      {
      zeronum += i;
      }
     
       
      if (B<0)
      {
      negnum += i;
      }
      if (B>0)
      {
      posnum += i;
      }
      if (B==0)
      {
      zeronum += i;
      }
      cout<<posnum<<negnum<<zeronum;
     return    0;
     
 }
 
