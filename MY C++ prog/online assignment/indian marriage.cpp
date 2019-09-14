/* Name: Sunkanmi Adu
   Matric no: 130404107
   dept: computer science
   course code: csc 212
*/
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
// A c++ program that specifies the type of a indian marriage by the throw of a dice    
main()
{
	int sum;
	int control=time(NULL); 
	srand (control);
	int A = 1+rand()%6;
	int B = 1+rand()%6;
	//this section captures the output of the dice throwm
	//note that the dice must thrown be twice inorder for the sum to be equal to 7
	cout<<"\n The toss is: "<<A<<" and "<<B<<endl;
	// this section assign the two input summation to a variable sum
	sum = A+B;
	cout<<"\nsum is: "<<sum;
	cout<<endl;
	// this section uses the if else if for the specification of the wedding
	if(sum==7){
		cout<<"\n It is a perfect a marriage"<<endl;
	}
	else if(sum<7){
		cout<<"\n It is unmarriageable"<<endl;
	}
	else if(sum>7){
		cout<<"\n It is uncommon match"<<endl;
	}
	else if(sum==0){
		cout<<"\n not yet fit for marriage"<<endl;
	}
	return 0;
}
