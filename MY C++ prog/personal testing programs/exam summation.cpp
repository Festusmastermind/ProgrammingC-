#include <iostream>
using namespace std;
main()
{
	int mymatrixA[3][3] = {1,2,3,4,5,6,7,8,9};
	int mymatrixB[3][3] = {10,11,12,12,13,14,15,16,17};
	int mymatrixC[3][3];
	int mymatrixD[3][3];
	//this section captures the data for the matrixA
	cout<<"This is display of matrixA";
	for(int i=0; i<3; i++)
	{
		cout<<endl;
		for(int j=0; j<3; j++)
		{
			cout<<mymatrixA[i][j]<<",";
		}
	}
	cout<<endl;
	cout<<"This is a display of matrixB";
    for(int i=0; i<3; i++)
	{
		cout<<endl;
		for(int j=0; j<3; j++)
		{
			cout<<mymatrixB[i][j]<<",";
		}
	} 
	cout<<endl;
	cout<<"The outputs of the summation is: ";
	for(int i=0; i<3; i++)
	{
		cout<<endl;
		for(int j=0; j<3; j++)
		{
			mymatrixC[i][j] = mymatrixA[i][j] + mymatrixB[i][j];
			cout<<mymatrixC[i][j]<<",";
		}
	}
	cout<<endl;
	cout<<"The outputs of the transpose is: ";
	for(int i=0; i<3; i++)
	{
		cout<<endl;
		for(int j=0; j<3; j++)
		{
			mymatrixD[i][j] = ((mymatrixA[i][j] + mymatrixB[i][j])/2.0);
			cout<<mymatrixD[j][i]<<",";
		}
	}	
	return 0;	
	
}
