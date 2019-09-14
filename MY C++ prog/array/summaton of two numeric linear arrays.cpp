#include <iostream>
using namespace std;
//summation of two numeric linear arrays with five elements
int main()
{
	int array1[5], array2[5];
	int newarray[5];
	//the for loop is to able to input the elements in the size of the array specified above
	for(int i=0; i<5; i++)
	{
		cout<<"\n\n\tEnter the value for element: "<<i+1<<" "<<"of Array1: "<<" ";
		cin>>array1[i];
		cout<<"\n\tEnter the value for element: "<<i+1<<" "<<"of Array2: " <<" ";
		cin>>array2[i];
		newarray[i]=array1[i]+array2[i];   
	}
	//The section below only outputs the each array for display after the operation have already take place in the code above.
	  cout<<"\n\tThe element of Array1 are: " <<endl;
	   for(int i=0; i<5; i++)
	   {
	   	cout<<"\t"<<array1[i]<<",";
	   }
	cout<<"\n\tThe elements of Array2 are: "<<endl;
	 for(int i=0; i<5; i++)
	   {
	   	cout<<"\t"<<array2[i]<<",";
	   }
	   cout<<"\n\tThe summation of the above two array elemnts are: "<<endl;
	    for(int i=0; i<5; i++)
	   {
	   	cout<<"\t"<<newarray[i]<<",";
	   }
	   return 0;
	
} 
