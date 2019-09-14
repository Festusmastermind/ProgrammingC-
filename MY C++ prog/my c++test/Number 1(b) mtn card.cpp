/* Name: Sunkanmi Adu
   Matric no: 130404107
   dept: computer science
   course code: csc 212
*/
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
main()
{
	int toss;
	int control = time(NULL);
	srand (control);
	// this section generates the mtn number for the card....
	for(int i=0; i<=16; i++)
	{ 
	  toss = 1+rand()%9;
	  cout<<toss<<","; 
	}
	return 0;
}
