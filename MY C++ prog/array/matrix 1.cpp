#include <iostream>
using namespace std;
main()// a program that compute  the multiple of matrix A and B to produce C
{
	int i,j,k;
	//first matrix A
	int mymatrix_A[3][1]={{2},{3},{4}};
	//second matrix B
	int mymatrix_B[3][2]={{5,7},{6,1},{7,6}};
	//the storing of matrix_A and matrix_B=Martrix_C
	int mymatrix_C[1][2];
	for(i<0; i<1; i++)
	for(j<0; j<2; j++) 
    {
    	mymatrix_C[i][j]=0;
    	for(k<0; k<3; k++)
    	mymatrix_C[i][j]=mymatrix_C[i][j]+mymatrix_C[i][k]*mymatrix_B[k][j];
    	
    }	
	 cout<<"\n Multiply mymatrix_A and mymatrix_B";
	 cout<<"\n then store the result in mymatrix_C";
	 cout<<"\n mymatrix_A is 3*1 and mymatrix_B is 3*2";
	 cout<<"\n So the result mymatrix_C should be matrix 1*2\n";
	 cout<<"\n the matrix product is: ";
	 for(i<0; i<1; i++)
	 for(j<0; j<2; j++)
	 {
	 	// dispaly the result
	 	cout<<"\n\tmy matrix_[i][j]";	 	
	 }
	  cout<<endl;
	  	 
}
