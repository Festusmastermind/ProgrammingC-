#include <iostream>
using namespace std;
main()
{
	int mymatrixA[3][3] = {2,3,4,
	                       5,6,7,
						   8,9,0};
	int mymatrixB[3][3] = {2,3,0,
	                       0,0,0,
						   0,0,0};// by implementing the use of 0's i actually convert a matrix[1][2] or 1 by 2	to 3by3....
	int mymatrixC[3][3];
	int mymatrixD[3][3];
	int mymatrixE[3][3];
	// the next thing to do is to for the user to see the populated array before any operation......which is captured in this section..
	cout<<"The matrix A is shown below: "<<endl;
	for(int i=0; i<3; i++)
	{
		cout<<endl;
	   for(int j=0; j<3; j++)
	   {
	   	cout<<mymatrixA[i][j]<<" ";
	   }
	}
	cout<<"\n\n";
	cout<<"The matrix B is shown below: "<<endl;
	//the section dispays the matrix of B...
    for(int i=0; i<3; i++)
	{
		cout<<endl;
	   for(int j=0; j<3; j++)
	   {
	   	cout<<mymatrixB[i][j]<<" ";
	   }
	}
	//this section computes the matrixA and matrixB product..
	cout<<endl;
	cout<<"\n\tTheir product is shown below: "<<endl;
	for(int i=0; i<3; i++)
	{
		cout<<endl;
		for(int j=0; j<3; j++)
		{
			mymatrixC[i][j]=mymatrixA[i][j] * mymatrixB[i][j];
			cout<<mymatrixC[i][j]<<" ";
		}
	}  
	
	cout<<endl;
	cout<<"\n\tThe square ofAmatrix is: "<<endl;
	for(int i=0; i<3; i++)
	{
		cout<<endl;
		for(int j=0; j<3; j++)
		{
			mymatrixE[i][j]=mymatrixA[i][j]*mymatrixA[i][j];
			cout<<mymatrixE[i][j]<<" ";
		}
	}
	cout<<endl;
	cout<<"\n\tTheir division is shown below: "<<endl;
	for(int i=0; i<3; i++)
	{ 
	  cout<<endl;
	  for(int j=0; j<3; j++)
	  {
	  	mymatrixD[i][j] = mymatrixA[i][j]/mymatrixB[i][j];
	  	cout<<mymatrixD[i][j]<<" ";
	  }
	}
	return 0;
    	
	
					   
	
}
