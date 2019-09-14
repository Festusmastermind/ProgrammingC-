/* Name: Sunkanmi Adu
   Matric no: 130404107
   dept: computer science
   course code: csc 212
*/
#include <iostream>
using namespace std;
main()
{
	int num[14], largest, smallest;
	// this section  captures the 14 figures in the array 
	for(int i=0; i<14; i++)
	{
		cin>>num[i];
	}
	// this section initializes the largest number
	cout<<endl; 
	largest=num[0];
	// capturing  of largest value 
	for(int i=0; i<14; i++)
	{
		if(num[i]>largest)
		{
			largest=num[i];
		}
	}
	cout<<largest<<endl;
	cout<<endl;
	// this section initializes the smallest number 
	smallest=num[0];
	for(int i=0; i<14; i++)
	{
		if(num[i]<smallest)
		{
			smallest=num[i];
		}
	}
	cout<<smallest;
	return 0;	
	
}
