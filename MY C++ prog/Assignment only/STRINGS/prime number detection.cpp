#include <iostream>
using namespace std;
int main ()
{
	//declaration section for the variables
int i, j;
//this section generates the number using the nested for loop to control the looping
for(i=2; i<100; i++)
{
for(j=2; j<=(i/j); j++)

	if(!(i%j)) break; // if factor found, not prime
    if(j>(i/j)) cout << i << " is prime\n";
}
return 0;
}







