#include <iostream>
using namespace std;
int main()
{
	int m, n;
	cout<<"\n Enter  the value of m: ";
    cin>>m;
    cout<<"\n\n Enter the value for n: ";
    cin>>n;
    
    cout<<"\n\n The value for m and n are "<<m <<"  "<<n <<endl;
    swap(m, n);
    cout<<"\n\n The value for m and n are "<<m <<"  "<<n <<endl;
    return 0;
}

