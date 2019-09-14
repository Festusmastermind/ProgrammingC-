#include <iostream>
using namespace std;
main()
// A c++ program that list the matno of a department out
{
	int matno=130404000;
	cout<<"\nTHE DEPARTMENT STUDENT MATRIC NO ARE LISTED BELOW: "<<endl<<endl;
	cout<<"S\N \t Matric_no\n";
	// implementing the control structure
	for(int i=1; i<=102; i++){
		cout<<i<<"\t"<<matno+i<<endl;
	}
	return 0;
	
	
	
}
