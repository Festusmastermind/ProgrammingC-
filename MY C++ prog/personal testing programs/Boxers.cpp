#include <iostream>
using namespace std;
main()
{
	int boxer1, boxer2;
	float boxer1point, boxer2point, Sboxer1point=0, Sboxer2point=0;
	float avgboxer1point, avgboxer2point;
	//  this section captures/ genrater the number of rounds that the boxer fights...
	for(int i=1; i<=12; i++)
	{
		cout<<"Round"<<i<<endl;
		//note that this section is for the 3 judges per rounds
		cout<<"Boxer1 points judge by: "<<endl;
		for(int j=1; j<=3; j++)
		{
		   	cout<<"Judge "<<j<<":";
		   	cin>>boxer1point;
		   	Sboxer1point=Sboxer1point+boxer1point;
		}
		//this secttion captures the points for the boxer2
		cout<<"Boxer2 points judge by: "<<endl;
		for(int m=1; m<=3; m++)
		{
			cout<<"Judge"<<m<<":";
			cin>>boxer2point;
			Sboxer2point=Sboxer2point+boxer2point;
		}	
   	}
   	cout<<endl;
   	avgboxer1point=Sboxer2point/12.00;
   	avgboxer2point=Sboxer2point/12.00;
   	// this section captures the winner between the two of the boxers 
   	if(avgboxer1point>avgboxer2point)
   	cout<<"Boxer1 is the winner......";
   	else if (avgboxer2point>avgboxer1point)
   	cout<<"Boxer2 is the winner.....of the match";
   	else cout<<"The match is a draw....";
	
	
	
}
