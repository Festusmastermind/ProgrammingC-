 // program to compute facrorial
  #include <iostream>
  #include <stdlib.h>
  using namespace std;
main()
{
  int N, fact = 1;
  cout<<"\n Enter any positive integer number as N: ";
  cin>>N;
 cout<<"\n The factorial of N: ";
  for (int i=N;i>=1;i--)
  {
    cout<<N<<" * ";
    fact = fact * N;
    N -= 1;
}
  cout<<" = "<<fact<<" \n ";
  return 0;
  system ("pause");
}
  
