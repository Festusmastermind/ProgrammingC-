#include <iostream>
using namespace std;
main()// aprogram that specifies the array size and determines the average and maximum of the number
{
	int n[5]={21,11,45,36,29};
	int max, avg, sum;
	for(int i=0; i<5; i++)
	{
	  avg+=n[i];
	  avg/=5;
	 
	}
	 cout<<"The average is: "<<avg<<endl;
	return 0;
}
