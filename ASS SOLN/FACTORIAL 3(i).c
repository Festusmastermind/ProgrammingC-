// program to compute facrorial
  #include <iostream.h>
 main()
{
  int N, fact = 1;
  cout<<"\n Enter any positive integer number as N: ";
  cin>>N;

  for (int i=1;i<N;i++)
  {
    cout<<"\n "<<N;
    fact = fact * N;
    N -= 1;
  }
  cout<<"\n The factorial of N: "<<N<<" is "<<fact<<" \n ";
  return 0;

}
  
