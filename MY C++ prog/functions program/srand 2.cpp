#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
	int control = time(NULL);
	srand (control);
	cout<<"toss is: "<<1+rand()%6<<" and "<<1+rand()%6<<endl;
	cout<<"\nEND TOSSING";
	return 0;
}
