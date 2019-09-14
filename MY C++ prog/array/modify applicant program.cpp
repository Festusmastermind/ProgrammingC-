#include <iostream>
using namespace std;
main()
/*A program that input the number of applicants that went for interview and inorder for the applicant
 to be selected for job he/she must pass some age and grade criteria*/
 {
 	//using array for the programming
 	int n;
 	int applid[n];
 	int applage[n];// note that the applicant age and grade is not in an array because the applicants is not one person 
 	char applgrade[n];
 	char grade;
 	cout<<"\n\n\tSpecify the number of the applicant here: ";
 	cin>>n;
 	cout<<"\n\nThese are the grade involved in the selection of the applicants";
 	cout<<"\n\nD-distinction, U-upper, L-lower,T-3rd class";
 	//this section generate and specify the range of the number of the aplicants in the interview.
	 for(int i=0; i<n; i++)
	 {
	 	//note that inside the loop we wanted to specify the applicant id, age and grade.
		 cout<<"\n\n\tEnter the applicant"<<" "<<i+1<<" "<<"id"<<":"<<"=";
		 cin>>applid[i];
		 cout<<"\n\tEnter the applicant"<<" "<<i+1<<" "<<"age"<<":"<<"=";
		 cin>>applage[i];
		 cout<<"\n\tEnter the applicant"<<" "<<i+1<<" "<<"grade"<<":"<<"=";
		 cin>>applgrade[i];
	 }  
	 // this section specify the candidate/applicant that are required for the vacancy
	 for(int i=0; i<n; i++)
	 {
	 		if((applage[i]<=26)&&(applgrade[i]=='D'||applgrade[i]=='U'))
			 cout<<"Candidate"<<applid[i];
	 }
	 cout<<"\n\tThe selected applicant is : ";
 	 return 0;
	  
	 
 }
