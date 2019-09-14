#include <iostream>
using namespace std;
int main()
{
	int mymatrix[2][2];
	 int total[2][2]={0,0,0,0};
	// inputting...
	cout<<"\n\t\t** MATRIX ILLUSTRATION **"<<endl;
	for(int i=0; i<2; i++)//note the row is defined/represented first
	{
		for(int j=0; j<2; j++)//note the column is specified here
		{
	    cout<<"\n\tInput Element in Row"<<i+1<<"Column"<<" "<<j+1<<": ";
		cin>>mymatrix[i][j];
		}
	}// note that the original matrix is display here and that the top illsutration is only for te input for the matrix.
	for(int i=0; i<2; i++)
	{
		cout<<endl;
		for(int j=0; j<2; j++)
		{
			cout<<"\t"<<mymatrix[i][j]<<" "; 
			total[i][j]=total[i][j]+mymatrix[i][j];
			cout<<"\n\n";
			cout<<total[i][j];	
		}
		
	}
	return 0;
	
}
