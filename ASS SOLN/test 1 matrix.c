#include <iostream.h>
main()
{

  int A[w][x], B[y][z], C[w][x], D[w][x];
  int i, j ;

  for (i=0;i<w;i++)
  {
  for (j=0;j<x;j++)
  { 
   cin>>A[i][j];
  }
  cout<<"\n";
  }
  
  for (i=0;i<y;i++)
  {
  for (j=0;j<z;j++)
  { 
   cin>>B[i][j];
  }
  cout<<"\n";
  }
  //processing
  

for (i=0;i<w;i++)
  {
  for (j=0;j<x;j++)
  { 
   C[i][j] = A[i][j] + B[i][j];
  }
  cout<<"\n";
  }
  

for (i=0;i<w;i++)
  {
  for (j=0;j<x;j++)
  { 
   D[i][j] = A[i][j] - B[i][j];
  }
  cout<<"\n";
  }
  return 0;
  }
  
  