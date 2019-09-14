#include<iostream>
using namespace std;
main()
 	{	
 		string pin;
 		int level;
 		int total,sec;
 		int mat_no;
 		int test1=23, test2=20, test3=19, test4=24;
 		int exam1=45, exam2=50, exam3=48, exam4=56;
 		cout<<"\n\t\t\t***AAUA AVERS SCHEME******\n\n";
 		cout<<" Enter your matric number\n\n";
 		cin>> mat_no;
 		cout<<" Enter your password\n";
 		cin>> pin;
 		cout<<"\n Enter your level: "<<endl;
 		cin>> level;
 		cout<<" Enter Session\n";
 		cin>> sec;
 		cout<<"\n Course Code  \t  C/A \t Exam \t total \t  Grade\n";
 		// this sections captures the datas from individual student
 		if(mat_no==130404002)
		 {
		 	total=test1 + exam1;
 			cout<<"Csc211 \t "<<"\t "<<test1<<"\t" <<"  "<< exam1 <<"\t"<<" "<<total<<"\t"<<"  "<<"B\n";
 	     }
		else if(mat_no==130404078)
		{
 			total=test2 + exam2;
 			cout<<"Csc211 \t "<<"\t "<<test2<<"\t" <<"  "<< exam2 <<"\t"<<" "<<total<<"\t"<<"  "<<"A\n";
 		}
 		else if(mat_no==130409061)
		 {
 			total=test3 + exam3;
 			cout<<"Csc211 \t "<<"\t "<<test3<<"\t" <<"  "<< exam3 <<"\t"<<" "<<total<<"\t"<<"  "<<"B\n";
 		 }
 		else if(mat_no==130404107)
		{
 			total=test4+ exam4;
 			cout<<"Csc211 \t "<<"\t "<<test4<<"\t" <<"  "<< exam4 <<"\t"<<" "<<total<<"\t"<<"  "<<"A\n";
 		}
 		else
		 {
 			cout<<"Invalid Matric Number"<<endl;
		 }
 	}
 		
