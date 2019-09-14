#include <iostream>
using namespace std;
int main()
{
	//note this program is modify for simpler understanding
	int matno = 130404000;
	int matno1;	
	cout<<"THE FIRST TEN"<<endl;
	cout<<"________________"<<"\n\n";
	cout<<"S/N \t\MAT-NO " <<endl;
	
	for(int i=1;i<=108;i++)
	{	
		cout<<i<<"\t\t"<<matno+i<<endl;	
	}
	return 0;
		
}
