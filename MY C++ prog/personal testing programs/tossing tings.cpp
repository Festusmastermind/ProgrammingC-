#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
main()
{
	int toss, counth=0, countT=0;
	int control= time(NULL);
	srand (control);
	for(int i=0; i<12; i++)
	{
		toss=1+rand()%6;
		cout<<toss<<",";
		if(toss==1)
		{ 
		counth++;
		cout<<"first toss: h"<<endl;
		}
		
	}
	cout<<counth<<endl;
    for(int i=0; i<12; i++)
	{
		 if(toss==0)
		{
		countT++;	
	    cout<<"Second toss: T";
		}
    }
    cout<<countT<<endl;
	
	
	
}
