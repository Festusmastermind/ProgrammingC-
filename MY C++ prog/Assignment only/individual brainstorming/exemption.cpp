#include <iostream>
using namespace std;
main()
{
	int matno = 130404000;
	
	cout<<"CSC MATRIC LIST"<<endl;
	cout<<"________________"<<"\n\n";
	cout<<"S/N \tMAT-NO"<<endl;
	cout<<"\nMATRIC LIST WITH EXEMPTION"<<endl;
	cout<<"________________"<<"\n\n";
	cout<<"S/N \tMAT-NO"<<endl;
	for(int i=1; i<=108; i++)
	{
		if((matno+i==130404014)||(matno+i==130404035)||(matno+i==130404071)||(matno+i==130404098))break;
		cout<<i<<"\t\t"<<matno+i<<endl;
    }
	
	
	
}

	
	
	
	
	
	
	
	
	
	

