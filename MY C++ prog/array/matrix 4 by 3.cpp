#include <iostream>
using namespace std;
main()
{
	// intitialization method
	int i,j;
	int mymatrix_A[3][4]={3,1,4,8,
	                      5,2,6,7,
						  9,1,5,8};
    int mymatrix_B[3][4]={2,3,4,5,
	                      5,7,9,8,
						  1,4,3,2};
   int mymatrix_C[3][4];
   // this section is the processing section
   for(int i=0; i<3; i++)
   {
   	for(int j=0; j<4; j++)
   	{
   		mymatrix_C[i][j]=mymatrix_A[i][j]+mymatrix_B[i][j];
   	}
   	
   }
	cout<<"\n\n";
	//this section output the processing 
	cout<<"\n\tMy Matrix_A\n\n";
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<4; j++)
		{
			cout<<mymatrix_A[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"\n\tMy Matrix_B\n\n";
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<4; j++)
		{
		cout<<mymatrix_B[i][j]<<"\t";	
		}
		cout<<endl<<endl;
	}
	//note that this is the summation of the matrix
	cout<<"\n\tMy Matrix_C\n\n";
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<4; j++)
		{
			cout<<mymatrix_C[i][j]<<"\t";
		}
		cout<<"\n\n";
	}
	// this section captures and compute the transpose of matrix c
	cout<<"\tMatrix_C Transpose\n\n";
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<3; j++)
		{
			cout<<mymatrix_C[j][i]<<"\t";
		}
		cout<<"\n\n";
	}
	
	return 0;
		
	
	
}
