#include <iostream>
using namespace std;
//A program that for real life apllication- selection of applicants for vacant positions
int main()
{
	
	 
	int appid[10],appage[10];
	int appgrade[10];
	
	for(int i=0; i<10; i++)
	{
		cout<<"\n\tEnter applicant"<<" "<<i+1<<" "<<"Id:";
		cin>>appid[i];
		cout<<"\n\tEnter applicant"<<" "<<i+1<<"Age:";
		cin>>appage[i];
		cout<<"\n\tThe Grade scores are: " <<"31"<<"32"<<"21"<<"21"<<"21";
		cout<<"\n\tEnter applicant "<<" "<<i+1<<" "<<"grade"<<":";
		cin>>appgrade[i];
	}
	 cout<<"\n\tSELECTED APPLICANTS ARE: "<<endl;
		for(int i=0; i<13; i++)
		{
			if((appage[i]<=26)&&(appgrade[i]=='26'||appgrade[i]=='31'))
			{
				cout<<"Candidate"<<" "<<appid[i]<<appage[i]<<appgrade[i];
				cout<<"you are disqualify";
			}
			 
			
		}
	    return 0;
}
