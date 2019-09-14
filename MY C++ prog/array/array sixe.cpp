#include <iostream>
using namespace std;
int main()//write a c++ program that populated a list and determines the number of element greater than 5 and the negative numbers.
{
	int u;
    cout<<"\n\tSpecify the size of the array containing the elements list[u] : ";
    cin>>u;
    int list[u];
    int count=0;
    int countneg=0;//this id countneg is necessary because of obstruction of the counters in the program
    
    //using for loop to generate the numbers  
    for(int i=0; i<u; i++)
    { 
      cout<<"\n My Populated lists are: "<<"element"<<i+1<<":"<<" ";
      cin>>list[i];
    }
	//this section captures the value greater than 5 and less than 10
	 cout<<"\n\nThe elements that are greater than 5 and less than 10 in the list are: " ;
	 for(int i=0; i<u; i++)
	 {
	 	if((list[i]>5)&&(list[i]<10))
	 	{
	 		 count=count+1;
			 cout<<list[i]<<",";	
	 	} 	
	 }	 
     cout<<"\n\nThe number of the elements that are greater than 5 and less than 10 is: ";
	 cout<<count;
   	 //this section displays the negative numbers
   	 cout<<"\n\nThe elements in the list that are negative are: ";
	 for(int i=0; i<u; i++)
	{
		if(list[i]<0)
		{
			countneg=countneg+1;
			cout<<list[i]<<",";
		}
	}
	
	cout<<"\n\nThe number of the elements that are negative numbers are: ";
	cout<<countneg;
	return 0;
	
	
}
