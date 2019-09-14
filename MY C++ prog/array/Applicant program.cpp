o#include <iostream>
using namespace std;
//A program that for real life apllication- selection of applicants for vacant positions
int main()
{
	int n;
	//specify no of applicants 
	cout<<"\n\tspecify number of applicants: ";
	cin>>n;
	int appid[n],appage[n];
	char appgrade[n];
	
	for(int i=0; i<n; i++)
	{
		cout<<"\n\tEnter applicant"<<" "<<i+1<<" "<<"Id:";
		cin>>appid[i];
		cout<<"\n\tEnter applicant"<<" "<<i+1<<"Age:";
		cin>>appage[i];
		cout<<"\n\tThe Grade of the applicant are:D-distinction,U-upper,L-lower,P-pass,T-3rd class";
		cout<<"\n\tEnter applicant "<<" "<<i+1<<" "<<"grade"<<":";
		cin>>appgrade[i];
	}
	 cout<<"\n\tSELECTED APPLICANTS ARE: "<<endl;
		for(int i=0; i<n; i++)
		{
			if((appage[i]<=26)&&(appgrade[i]=='D'||appgrade[i]=='U'))
			 cout<<"Candidate"<<" "<<appid[i];
			
		}
	    return 0;
}
