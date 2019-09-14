#include <iostream.h>
main()
{

  int w, x, y, z, i, j;
      cout<<"\n Rnter the number of rows of your matrixA as w: ";
      cin>>w;
      cout<<"\n Rnter the number of columns of your matrixA as x: ";
      cin>>x;
      cout<<"\n Rnter the number of rows of your matrixB as y: ";
      cin>>y;
      cout<<"\n Rnter the number of columns of your matrixB as z: ";
      cin>>z;
      int mymatrixA[w][x], mymatrixB[y][z], mymatrixC[w][x], mymatrixD[w][x];
      
      //inputtingint A[w][x], B[y][z], C[w][x], D[w][x];
  

  for (i=0;i<w;i++)
  {
  for (j=0;j<x;j++)
  { 
   cin>>mymatrixA[i][j];
  }
  cout<<"\n";
  }
  
  for (i=0;i<y;i++)
  {
  for (j=0;j<z;j++)
  { 
   cin>>mymatrixB[i][j];
  }
  cout<<"\n";
  }
  //processing
  

for (i=0;i<w;i++)
  {
  for (j=0;j<x;j++)
  { 
   mymatrixC[i][j] = mymatrixA[i][j] + mymatrixB[i][j];
  }
  cout<<"\n";
  }
  

for (i=0;i<w;i++)
  {
  for (j=0;j<x;j++)
  { 
   mymatrixD[i][j] = mymatrixA[i][j] - mymatrixB[i][j];
  }
  cout<<"\n";
  }
  return 0;
  }
  
  
