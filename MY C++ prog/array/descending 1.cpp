#include <iostream>
using namespace std;
int main()
{
	int myvalues[]={8,5,3,57,2,3,4,5,6,1,17,11,19};
	cout<<"\n\n\tA Ascending order program....";
	// the populated array is arranged in ascending order using for loop and sort...
	for(int i=0; i<13; i++)
	{
		cout<<myvalues[i]<<",";
		cout<<"\n\n"<<sort(myvalues[i])<<endl;
	}

	
	

	
	
}
