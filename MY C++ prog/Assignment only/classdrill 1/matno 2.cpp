#include <iostream>
using namespace std;
main()
//A c++ program that expunged all even matric no from the total matric no
{   
     int mat_no=130404000;
     cout<<"\n\t THE STUDENTS MATRIC NO WITH EVEN NO EXPUNGED ARE LISTED BELOW: "<< endl;
	 cout<<"\n S/N\tMATRIC NO\n"<<endl;
	 // this section use the for statement for the implementation of the program
	 for(int i=0; i<=102; i+=2){
	 	cout<<" "<<i<<"\t"<<mat_no+i<<endl;
	 }
	 cout<<endl;

  
} 
