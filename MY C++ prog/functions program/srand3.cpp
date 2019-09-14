#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
	int control = time(NULL);
	srand (control);
	for(int i=1; i<=10; i++)//the output of the programming is captured in this section below
	{
		cout<<"tosser1"<<" "<<"throw"<<i<<"is: "<<1+rand()%6<<"\t\t"<<"tosser2"<<" "<<"throw"<<i<<"is:"<<1+rand()%6<<endl;
	}
	cout<<"\nEND TOSSING";
	return 0;
}
