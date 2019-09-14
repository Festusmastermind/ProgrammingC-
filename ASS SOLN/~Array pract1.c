#include <iostream.h>
main()
{
  int i, j;
  int mymatrixA[3][4];
  int mymatrixB[3][4];
  int mymatrixC[3][4];
//inputting for matrix A

  for( i=0;i<3;i++)
  {
    for(j=0;j<4;j++)
    {
       cout<<"\n Enter matrix A";
      cin>>mymatrixA[i][j];
    cout<<"\n Enter matrix B";
      cin>>mymatrixB[i][j];
    }
  }
//processing
 for( i=0;i<3;i++)
  {
    for(j=0;j<4;j++)
    {
      mymatrixC[i][j] = mymatrixA[i][j]+ mymatrixB[i][j]; 
       }
 }
 //outputting for matrix A
  for( i=0;i<3;i++)
  {
    for(j=0;j<4;j++)
    {
      cout<<mymatrixA[i][j]<<"\t";
    }
    cout<<"\n";
}
{
  cout<<"\n";
}
   for( i=0;i<3;i++)
  {
    for(j=0;j<4;j++)
    {
      cout<<mymatrixB[i][j]<<"\t";
    }
  cout<<"\n";
}
 {
  cout<<"\n";
}

  for( i=0;i<3;i++)
  {
    for(j=0;j<4;j++)
    {
      cout<<mymatrixC[i][j]<<"\t";
    }
  cout<<"\n";
}
{
  cout<<"\n";
}
 return 0;
 }
 
 
