#include <iostream>
using namespace std;
int main()//Aritmetic operations on matrix
{
	int m,n;
	cout<<"\n\tSpecify the matrixrow dimension: ";
	cin>>m;
	cout<<"\n\tSpecify the matrix column dimension: ";
	cin>>n;
	int hismatrix[m][n],hermatrix[m][n],theirmatrix[m][n]; // note the declaration is moved here mainly because of the compiler
	
	//this section inputs all the different matrixs
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout<<"\n\tInput Element  "<<"row"<<" "<<i+1<<"column"<<" "<<j+1<<"for hismatrix: ";
			cin>>hismatrix[i][j];
			cout<<"\n\tInput Element  "<<"row"<<" "<<i+1<<"column"<<" "<<j+1<<"for hermatrix: ";
			cin>>hermatrix[i][j];
		
		}
	}
	//outputting....each matrix beginning with the His_matrix
	cout<<"\n\t\tHISMATRIX: "<<endl;
	for(int i=0; i<m; i++)
	{
		cout<<endl;
		for(int j=0; j<n; j++)
		{
			cout<<"\t"<<hismatrix[i][j]<<" ";
		}
	}
	//note closely that the matrix is outputed in the for loop above.....
	cout<<"\n\t\tHERMATRIX: "<<endl;
	for(int i=0; i<m; i++)
	{
		cout<<endl;
		for(int j=0; j<n; j++)
		{
		cout<<"\t"<<hermatrix[i][j]<<" ";	
		}
	}
	cout<<"\n\t\tMARRYING THEM TOGETHER THEIRMATRIX: "<<endl;
	for(int i=0; i<m; i++)
	{
		cout<<endl;
		for(int j=0; j<n; j++)
		{
			theirmatrix[i][j] = hismatrix[i][j] + hermatrix[i][j];
			cout<<"\t"<<theirmatrix[i][j]<<" ";
		}
		
	}
	
	return 0;
}
