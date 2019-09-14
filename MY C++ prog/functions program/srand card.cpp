#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
	int control = time(NULL);
	srand (control);
	for(int i=1; i<=16; i++)
	{
		cout<<1+rand()%9;
	}
	    cout<<"End generation";
	
	
	
	
	
	
	
	
}
