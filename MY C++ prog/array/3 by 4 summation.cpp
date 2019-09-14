#include <iostream>
using namespace std;
main()
{
	// declaration section 
	int mymatrix_A[3][4]={{3,1,4,8},{5,2,6,7},{9,1,5,8}};
    int mymatrix_B[3][4]={{2,3,4,5},{5,7,9,8},{1,4,3,2}};
    int mymatrix_C[3][4];
    int  mymatrix_C2[3][4];
   
   // this first section to output the A matrix
   cout<<"\n\n\t***SIMPLE ADDITON AND SUBTRACTION OF TWO MATRIX IS BELOW****: ";
   cout<<"\n\nTHE MARTRIX FOR A IS: ";
   	for(int i=0; i<3; i++)// this is the indexing for rows
	{
		cout<<endl;
		for(int j=0; j<4; j++)// this is the indexing for columns
		{
			cout<<mymatrix_A[i][j]<<" ";
		}
	}
	cout<<"\n\n";
	// this section outputted the B matrix....
	cout<<"\nTHE MATRIX FOR B IS: ";
	for(int i=0; i<3; i++)
	{
		cout<<endl;
		for(int j=0; j<4; j++)
		{
			cout<<mymatrix_B[i][j]<<" ";
		}
	}
	cout<<"\n\n";
	cout<<"\nTHE SUMMATION OF THE MATRIX  A AND B IS : ";
	//this section sum the matrix above....
	for(int i=0; i<3; i++)
	{
		cout<<endl;
		for(int j=0; j<4; j++)
		{
			 mymatrix_C[i][j] = mymatrix_A[i][j] + mymatrix_B[i][j];
			cout<<mymatrix_C[i][j]<<" ";
		}
	}
	cout<<"\n\n";
	cout<<"\nTHE SUBTRACTION OF THE MATRIX IS: ";
	//this section sub the matrix above
	for(int i=0; i<3; i++)
	{
		cout<<endl;
		for(int j=0; j<4; j++)
		{
			 mymatrix_C2[i][j] = mymatrix_A[i][j] - mymatrix_B[i][j];
			cout<<mymatrix_C[i][j]<<" ";
		}
	}
    return 0;	
	
}
