#include <iostream>
using namespace std;
int main()
{
	int rsum, csum;
	int mymatrixA[3][3]={2,3,4,
	                     5,6,7,
						 8,9,0};
	// this section displays the first row of  the matrix...
    for(int i=0; i<1; i++)
    {
  	 cout<<"\n";
  	 for(int j=0; j<3; j++)
	   {
	   	cout<<mymatrixA[i][j]<<" ";
       }
  	
    }
    cout<<"\n";
  //this section displays the first column....of the matrix.
    for(int i=0; i<3; i++)
    {
  
  	   for(int j=0; j<1; j++)
	   {
	   	cout<<mymatrixA[i][j]<<" "<<endl;
       }	
    }
    cout<<endl;
    cout<<"The summation of the rows in mymatrixA above is: ";	
    for(int i=0; i<1; i++)
    {
	 	for(int j=0; j<3; j++)
	 	{
	 	   rsum=0;
	 	  rsum=rsum+mymatrixA[i][j];
	 	}
 
 }
 cout<<"\n";
 cout<<"The summation of the columns in mymatrixA above is: ";
 for(int i=0; i<3; i++)
 {
 	 
 	 for(int j=0; j<1; j++)
 	 { 
 	   csum+=mymatrixA[i][j];
 	 }
 }				 
}
