#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x,y;
	cout<<"\n\tSpecify the matrixrow dimension: ";
	cin>>x;
	cout<<"\n\tSpecify the matrixcolumn dimension: ";
	cin>>y;
	int Amatrix[x][y], Bmatrix[x][y], Cmatrix[x][y];
	int summatrix[x][y];
	int prodmatrix[x][y];
	float sqrtmatrix[x][y];
	float sqrt2matrix[x][y];
	double Tmatrix[x][y];
	//inputting section with the implementation of for control structure
	for(int i=0; i<x; i++)
	{
	     for(int j=0; j<y; j++)	
	     {
	     	cout<<"\n\tinput the member in : "<<" "<<"row"<<i+1<<" "<<"column"<<" "<<j+1<<" "<<"for Amatrix: ";
	     	cin>>Amatrix[i][j];
	     	cout<<"\n\tinput the member in : "<<" "<<"row"<<i+1<<" "<<"column"<<" "<<j+1<<" "<<"for Bmatrix: ";
	     	cin>>Bmatrix[i][j];
	     	cout<<"\n\tinput the member in : "<<" "<<"row"<<i+1<<" "<<"column"<<" "<<j+1<<" "<<"for Cmatrix: ";
	     	cin>>Cmatrix[i][j];
	     }
	}
	cout<<"\n\tThe Amatrix is: ";// the output of A is in capture in this section
    for(int i=0; i<x; i++)
   	{
		cout<<endl;
			for(int j=0; j<y; j++)
		{
			cout<<"\t"<<Amatrix[i][j]<<" ";
		}
		
	}
      cout<<"\n\tThe Bmatrix is: ";// the output of B is capture in this section
     for(int i=0; i<x; i++)
   	{
		cout<<endl;
			for(int j=0; j<y; j++)
		{
			cout<<"\t"<<Bmatrix[i][j]<<" ";
		}
		
	}
	   cout<<"\n\tThe Cmatrix is: ";// the output of c is capture in this section
	for(int i=0; i<x; i++)
   	{
		cout<<endl;
			for(int j=0; j<y; j++)
		{
			cout<<"\t"<<Cmatrix[i][j]<<" ";
		}
		
	}//this section captures the summation of the matrix a,b,c
	cout<<"\n\tThe summation of the A,B,C matrix is: ";
	for(int i=0; i<x; i++)
	{
		cout<<endl;
	    for(int j=0; j<y; j++)
		{
			summatrix[i][j]= Amatrix[i][j] + Bmatrix[i][j] + Cmatrix[i][j];
			cout<<"\t"<<summatrix[i][j];
		}	
	} //this section captures the product of the matrix a,b,c
	cout<<"\n\tThe prod of the A,B,C matrix is: ";
	for(int i=0; i<x; i++)
	{
		cout<<endl;
	    for(int j=0; j<y; j++)
		{
			prodmatrix[i][j]= (Amatrix[i][j] * Bmatrix[i][j] * Cmatrix[i][j]);
			cout<<"\t"<<prodmatrix[i][j];
		}	
	}//this section captures the sart of the matrix a
	cout<<"\n\tThe sqrt of the A matrix is: ";
	for(int i=0; i<x; i++)
	{
		cout<<endl;
	    for(int j=0; j<y; j++)
		{
			sqrtmatrix[i][j]= sqrt(Amatrix[i][j]);
			cout<<"\t"<<sqrtmatrix[i][j];
		}	
	}//this section captures the sqrt of a-b matrix
	cout<<"\n\tThe sqrt of the sqrt(A-B) matrix is: ";
	for(int i=0; i<x; i++)
	{
		cout<<endl;
	    for(int j=0; j<y; j++)
		{
			sqrt2matrix[i][j]= sqrt(Amatrix[i][j]-Bmatrix[i][j]);
			cout<<"\t"<<sqrt2matrix[i][j];
		}	
	}// this section captures the transpose
	cout<<"\n\tThe sqrt of the Transpose((A+B+c)/3) matrix is: ";
	for(int i=0; i<y; i++)
	{
		cout<<endl;
	    for(int j=0; j<x; j++)
		{
			Tmatrix[i][j]= ((Amatrix[i][j] + Bmatrix[i][j] + Cmatrix[i][j])/3);
			cout<<"\t"<<Tmatrix[j][i];
		}	
	}
	return 0;
	
}
