#include<iostream>
using namespace std;
main()
// Write a c++ program that inputs a five integers, counts and diplays the negative, positve, and zero out of them.....
{
	int num[5];
	int countpos=0, countneg=0, countzero=0;
	// this section captures the genrated data...
	cout<<"\n\n\t\tThe list of the integers in the num[5] are: "<<"\n\n";
	for(int i=0; i<5; i++)
	{ 
	   cout<<"\tThe item"<<" "<<i+1<<" "<<"is"<<":";
	   cin>>num[i];
	}
	//this section specifies the condition for the positive numbers
	
	cout<<"\n\tThe positive numbers in the list is: ";
	for(int i=0; i<5; i++)
	{ 
	  if(num[i]>0)
	  {
	  	countpos++;//countpos=count + 1;
	  	cout<<num[i]<<",";
	  }
	}
	cout<<"\n\n\tThe total number of the positive number in the lists is: ";
	cout<<countpos;
	cout<<"\n\n\tThe negative numbers in the list is: ";
	for(int i=0; i<5; i++)
	{
		if(num[i]<0)
		{
			countneg++;
			cout<<num[i]<<",";
		}
	}
	cout<<"\n\n\tThe total number of the negative number in the lists is: ";
	cout<<countneg;
	//this section computes the zero number specifications......
	cout<<"\n\n\tThe zero numbers in the list is: ";
	for(int i=0; i<5; i++)
	{
		if(num[i]==0)
		{
			countzero++;
			cout<<num[i]<<",";
		}
	}
	cout<<"\n\n\tThe number of the zeros in the list is: ";
	cout<<countzero;
	return 0;
}

