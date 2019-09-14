#include<iostream>
#include<math.h>
using namespace std;
// run this program using the console pauser or add getch, system("pause") or inpout loop
int main()
{
	int x, y;
	cout<<"\nEnter the base number: ";
	cin>>x;
	cout<<"\nEnter the raise number: ";
	cin>>y;
	cout<<"The power of"<<x<<"to"<<y<<"is"<<pow(x,y);
	return 0;
	
}

