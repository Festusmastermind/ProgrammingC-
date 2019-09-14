#include <iostream>
using namespace std;
int main()
{
 int m, n;
 cout<<"\n Enter the number of rows of your matrix as m: ";
 cin>>m;
 cout<<"\n Enter the number of columns of your matrix as n: ";
 cin>>n;
 
  int mybiggy[m][n];
//inputting matrix
 cout<<"\n Now enter the elements of your matrix : ";
for (int j=0; j<m; j++)
{
  for (int k=0; k<n; k++)
  {
    cin>>mybiggy[j][k];
  }
}
//outputting inputted matrix
cout<<"\n\n Your matrix is \n";
for (int j=0;j<m;j++)
{
	cout<<"\n";
for (int k=0; k<n; k++)
  {
 cout<<mybiggy[j][k]<<"\t";	
  }
}
//processing
int sumrow = 0, sumcol = 0, sumtot = 0;
 cout<<"\n\n The sum of each row is: "; 
for(int j=0;  j<m; j++)
{
	sumrow = 0;
	for(int k=0; k<n; k++)
	{
	sumrow += mybiggy[j][k];	
	}
	cout<<"\n"<<sumrow;
}
cout<<"\n\n The sum of each column is: "; 

for(int k=0; k<n; k++)
{
	sumcol = 0;
	for(int j=0;  j<m; j++)
    {
	sumcol += mybiggy[j][k];
	}
	cout<<"\n"<<sumcol;
}

for(int j=0;  j<m; j++)
{
	for(int k=0; k<n; k++)
	{
	sumtot += mybiggy[j][k];	
	}
}
cout<<"\n\n The sum of your entire matrix is : "<<sumtot;
 //transversing matrix
 cout<<"\n\n Your transversed matrix is \n";
for (int k=0; k<n; k++)
{
	cout<<"\n";
for (int j=0;j<m;j++)
  {
  cout<<mybiggy[j][k]<<"\t";	
  }
}
 return 0;
}
