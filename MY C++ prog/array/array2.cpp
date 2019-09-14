#include <iostream>
using namespace std;
main()// aprogram that specifies the array size, its summation, average, maximium and minimum score.
{
	int sum=0,max=0,min=0;
	int n;
	float avg;
	// this section captures n size
	cout<<"\n\tspecified your array size: ";
	cin>>n;
	int myscores[n];
	//this section captuers the arrays elements
	for(int i=0; i<n; i++)
	{
		cout<<"\n\tEnter Score "<<i+1<<":";
		cin>>myscores[i];
	}
	//section to sum-up the elements
	for(int i=0; i<n; i++)
	{
		sum=sum+myscores[i];
	}
	    avg=sum/n;
	    //section to compute max
	    max=myscores[0];
	    min=myscores[0];
	    //creating a loop
	    for(int i=0; i<n; i++)
	    {
	    	if(myscores[i]>max)
	    	  max=myscores[i];
	    }
	     for(int i=0; i<n; i++)
	    {
	    	if(myscores[i]<min)
	    	  min=myscores[i];
	    }
	    //printing the output
	    cout<<"\n\tThe summation is: "<<sum<<endl;
	    cout<<"\n\tThe average is: "<<avg<<endl;
	    cout<<"\n\tthe maximum element is: "<<max<<endl;
	    cout<<"\n\tthe minimum element is: "<<min<<endl;
	    return 0;
}
