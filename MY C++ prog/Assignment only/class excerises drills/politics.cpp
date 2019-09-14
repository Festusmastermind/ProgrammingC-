#include<iostream>
using namespace std;
main()
// A c++ program that outputs QUALIFIED and UNQUALIFIED Candidates to be outputted to the screen under different headings
{
	//declaring of the varibales in arrays. 
	//arrays is used to store the values in its relative postion.
	
	int cand[9]={543,675,598,265,743,644,555,877,511};
	int party_fee[9]={1000000,800000,1000000,1000000,1000000,1000000,1000000,1000000,1000000};
	int pol_year[9]={6,12,11,16,23,7,14,16,13};
	int no_of_office_held[9]={1,3,1,2,6,2,4,2,1};
	
	// this section captures the  data from the declaration using for control structure
	cout<<"\n\t\tTHE UNQUALIFIED CANDIDATES ARE LISTED BELOW: ";
	for(int i=0;i<9;i++)
	{
		if(party_fee[i]<1000000||pol_year[i]<10 ||no_of_office_held[i]<2)
		cout<<"\n\n candidates with id #"<<cand[i]<<endl; 
	} 
	cout<<endl;
	cout<<"\n\t\tTHE QUALIFIED CANDIDATES ARE LISTED BELOW: ";
	for(int i=0;i<9;i++)
	{
	    if(party_fee[i]==1000000 && pol_year[i]>=10 && no_of_office_held[i]>=2)
		cout<<"\n\n candidates with id #"<<cand[i]<<endl;	
	}
	return 0;	
	
}
