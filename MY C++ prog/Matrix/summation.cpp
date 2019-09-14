#include <iostream>
using namespace std;
main()

{

	int Amatrix[3][3], Bmatrix[3][3], Cmatrix[3][3];
	// inputting section 
	
	//using for the inputs specification
	for(int i=0; i<3; i++)
	{
	     for(int j=0; j<3; j++)	
	     {
	     	cout<<"\n\tinput the member in Row: "<<" "<<"row"<<i+1<<" "<<"column"<<" "<<j+1<<" "<<"for Amatrix: ";
	     	cin>>Amatrix[i][j];
	     	cout<<"\n\tinput the member in column: "<<" "<<"row"<<i+1<<" "<<"column"<<" "<<j+1<<" "<<"for Bmatrix: ";
	     	cin>>Bmatrix[i][j] ;
	     }
		
	} 
	// this next section dispalys the matrix for A
	cout<<"\n\tThe Amatrix is: "<<endl;
	for(int i=0; i<3; i++)
	{
		cout<<endl;
		for(int j=0; j<3; j++)
		{
			cout<<"\t"<<Amatrix[i][j]<<" ";
		}
	}
	cout<<"\n\tThe Bmatrix is: "<<endl;
	for(int i=0; i<3; i++)
	{
		cout<<endl;
			for(int j=0; j<3; j++)
		{
			cout<<"\t"<<Bmatrix[i][j]<<" ";
		}
		
	}
	cout<<"\n\tThe summation of the matrixes is: ";
	for(int i=0; i<3; i++)
	{
			cout<<endl;
			for(int j=0; j<3; j++)
		{
			Cmatrix[i][j]=Amatrix[i][j]+Bmatrix[i][j];
			cout<<"\t"<<Cmatrix[i][j]<<" ";
		}
	}
	return 0;
	
	
}
