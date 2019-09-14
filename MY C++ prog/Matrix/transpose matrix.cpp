#include <iostream>
using namespace std;
int main()
{
	int m,n;
	cout<<"\n\tSpecify the matrixrow dimension: ";
	cin>>m;
	cout<<"\n\tSpecify the matrix column dimension: ";
	cin>>n;
	int ourmatrix[m][n];
	//inputting
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout<<"\n\tinput Element in Row"<<i+1<<"column"<<j+1<<":";
			cin>>ourmatrix[i][j];
		}
	
    }
		cout<<"\n"<<"\tThis is the original matrix: "<<endl;
		for(int i=0; i<m; i++)
		{
			cout<<endl;
			for(int j=0; j<n; j++)
			{
				cout<<"\t"<<ourmatrix[i][j]<<" ";
			}
		}
		cout<<"\n"<<"\tAnd to, the transpose of the ouput matrix: "<<endl;
		for(int i=0; i<m; i++)
		{
			cout<<endl;
			for(int j=0; j<n; j++)
			{
			   cout<<"\t"<<ourmatrix[j][i]<<" ";//this is the segement that perform the function of the transpose.	
			}
		}
	return 0;
	
}
