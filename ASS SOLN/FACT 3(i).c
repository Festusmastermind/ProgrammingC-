// program to compute factorial
  #include <iostream>
  using namespace std;
 main()
{
  int N, fact = 1;
  cout<<"\n Enter any positive integer number as N: ";
  cin>>N;

  for (int i=1;i<=N;i++)
  {
   
    fact = fact * N;
    N -= 1;
     cout<<"\n "<<N;
  }
  cout<<"\n The factorial of N: "<<N<<" is "<<fact<<" \n ";
  return 0;

}
  
