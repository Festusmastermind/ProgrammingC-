#include <iostream>
using namespace std;
main()// A c++ program that calculates and specifies its requirements for a possible admission into the university
{
	int utme,putme;
	int cutoffmark;
	cout<<"\n\t	MY ADMISION SCHEME\n\n";
	cout<<" Enter your utme score:";
	cin>>utme;
	//this comments helps to understand that the negative possibities are considered first......but it is also optional....
	if((utme<180)&&(utme>400))
	{
	 cout<<"\n You are not qualified for the putme\n";
	 cout<<"\n Try again next year\n";	
	}
	
	else if((utme>=180)&&(utme<=400))//the use of nested loops is implemented in this section but also bote that is optional
	{
	cout<<"\n You are qualified for the putme"<<endl;
	//the section captures the student putme mark with the if cocntrol structure for specifications
	cout<<"\n Enter your putme score:";
	cin>>putme;
    }
	 if((putme>=40)&&(putme<=100))
	  {
		cout<<"\n CONGRATS YOU ARE QUALIFIED FOR THE  ADMISSION SCREENING\n";
        cutoffmark=((utme/8)+(putme/2));
		cout<<"\n Your computed cutoffmarks is: "<<cutoffmark<<endl;
		cout<<"\nWAIT PATIENTLY FOR THE FOR THE RELEASE OF EACH DEPARTMENTAL ADMITABLE CUTOFFMARK";
	  }
     else cout<<"\nYOU ARE NOT QUALIFIED FOR THE SCREENING";

    
	
	
}
