#include <iostream>
using namespace std;
main()//A c++ program that captures n fibonacci series  i.e the fibonacci series figure to be gotten is not specified....
{
	int n;
	cout<<"\n\tSpecify the number of your fibonacci series: ";//the range of the fibonacci series you want....to program
	cin>>n;
	// this section handles the derivation of the fibonannci series....
	int myfabo[n];// this section performs the initialization of the two indexes of fibonacci....

	//this section generates the fibonaci series
	cout<<"\n\tTake a look at myfabo series below: "<<endl;
	for(int i=2; i<n; i++)
	{
		myfabo[i]=myfabo[i-2]+myfabo[i-1];
		cout<<myfabo[i]<<" ";
	}
	return 0;
}
/*
#include <iostream>
using namespace std;
main()
{
	int fabo[20];
	fabo[0]=0;
	fabo[1]=1;
	// this section generates the number of the fibonacci series......
	cout<"\n\tTake a look at my twenty fibonaccies series: ";
	for(int i=2; i<20; i++)
	{
		fabo[i]=fabo[i-2]+fabo[i-1];
		cout<<fabo[i]<<",";
	}
	return 0;
}
*/
