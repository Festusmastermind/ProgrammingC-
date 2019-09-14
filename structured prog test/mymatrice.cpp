#include<stdio.h>
main()
{
	int mymatrixA[3][3];	
	int mymatrixB[3][3];
	int mymatrixC[3][3];
	int m,x,k,y,i,j;

	
	printf("enter values matrix A\n");
	
		// inputing the matrices for mymatrix A 
	
	for(m=0;m<3;m++)
	{
	
		for(x=0;x<3;x++)
			{	
				scanf("%i",&mymatrixA[m][x]);			
			}
			printf("\n");
	}
		// inputing the matrices for mymatrix B
		printf("enter values for matrix B\n");
		
	for(k=0;k<3;k++)
	{
		for(y=0;y<3;y++)
		{
		scanf("%i", &mymatrixB[k][y]);	
		}
		printf("\n");
	}
	// Addition of the two matrix
		printf("\n the addition of matrix A and B =\n"); 
	//mymatrixC[0][0] = mymatrixA[m][x] + mymatrixB[k][y];
	
	for(int a=0;a<3;a++)
	{
		for(int b=0;b<3;b++)
		{
			mymatrixC[0][0] = mymatrixA[m][x] + mymatrixB[k][y];
		}
		printf("%i",mymatrixC[0][0]);
			printf("\n");
	}
}
