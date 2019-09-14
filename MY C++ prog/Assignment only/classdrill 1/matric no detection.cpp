#include <iostream>
using namespace std;
main()
// A c++ program that detects the matric_no inputted for different sections
{
	int mat_no1=130404000;
	int mat_no2=140404000;
	int mat_no;
	// this section specifies the outputs of different matric no using if elseif
	cout<<"\n Enter your matric no: ";
	cin>>mat_no;
	if(mat_no==mat_no1)
	{
		cout<<"\n You are a jambite\n";
	}
	else if(mat_no==mat_no2)
	{
		cout<<"\n You are a direct entry";
	}
	else{
		cout<<"\n you are a spill over\n";
	}

	/* A c++ program that detects the matric_no of different sections using switchcase...
{
	int mat_no1=130404000;
	int mat_no2=140404000;
	int id;
	// the next sections capturesthe body of the program
	cout<<"\n\t\t****THE DETECTION OF MAT_NO***\n\n";
	cout<<" Enter 1. if your mat_no starts from the 130404..."<<endl<<endl;
	cout<<" Enter 2. if your mat-no starts from the 140040..."<<endl<<endl;
	cin>>id;
// using switch case for the programming 
    switch(id)
	{
		case 1: cout<<"\n You are definitely a jambite\n\n";
		        break;
		case 2: cout<<"\n You are direct entry";
		        break;
	   default: if(mat_no1!=130404000 ||mat_no2!=140404000){
	   	cout<<"\n you are a spill over\n";
	   	return 0;
	   }	
	}	 
	*/
}
