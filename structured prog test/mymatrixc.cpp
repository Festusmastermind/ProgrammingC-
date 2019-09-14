#include<stdio.h>
main()
{
	int mymatrixA[3][3];
	int mymatrixB[3][3];
	int mymatrixC[3][3];
	int mymatrixD[3][3];
	int m,x,k,y;
	
	// inputing the matrices for mymatrix A 
	
	for(m=0;m<3;m++)
	{
		for(x=0;x<3;x++)
	
		scanf("%i\n",&mymatrixA[m][x]);	
			
	}
	printf("%i\n",mymatrixA[m][x]);
		// inputing the matrices for mymatrix B
	
	for(k=0;k<3;k++)
	{
		for(y=0;y<3;y++)
		{
		scanf("%i\n",&mymatrixB[k][y]);	
			
		}
	}
	printf("%i\n",mymatrixB[k][y]);
	// Addition of the two matrix 
	int i,j;
	
	mymatrixC[i][j] = mymatrixA[m][x] + mymatrixB[k][y];
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("%i",mymatrixC[i][j]);
		}
	}
}
