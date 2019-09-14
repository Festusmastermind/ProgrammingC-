#include <iostream>
using namespace std;
main()
// A c++ switch case program that test whether an english alphabet entered via the keyboard is vowel, consonant or otherwise.
{
	char alphabets;
	cout<<"\n\tDETECTING ALHABETS\n";
	cout<<"Enter your choice of alphabets\n";
	cin>>alphabets;
	// this section captures the use of switch case for the implementation
	switch(alphabets)
	{
		case 'a':cout<<"it is a vowel\n";
		        break;
		case 'e':cout<<"it is a vowel\n";
		         break;
		case 'i':cout<<"it is a vowel\n";
		         break;
		case 'o':cout<<"it is a vowel\n";
		         break;
		case 'u':cout<<"it is a vowel\n";
		         break;
		case 'b':cout<<"it is a consonant\n";
		         break;
		case 'c':cout<<"it is a consonant\n";
		         break;
		case 'd':cout<<"it is a consonant\n";
		         break;
		case 'f':cout<<"it is a consonant\n";
		         break;
		case 'g':cout<<"it is a consonant\n";
		         break;
		case 'h':cout<<"it is a consonant\n";
		         break;
		case 'j':cout<<"it is a consonant\n";
		         break;
		case 'k':cout<<"it is a consonant\n";
		         break;
		case 'l':cout<<"it is a consonant\n";
		         break;
		case 'm':cout<<"it is a consonant\n";
		         break;
		case 'n':cout<<"it is a consonant\n";
		         break;
		case 'p':cout<<"it is a consonant\n";
		         break;
		case 'q':cout<<"it is a consonant\n";
		         break;
		case 'r':cout<<"it is a consonant\n";
		         break;
		case 's':cout<<"it is a consonant\n";
		         break;
		case 't':cout<<"it is a consonant\n";
		         break;
		case 'v':cout<<"it is a consonant\n";
		         break;
		case 'x':cout<<"it is a consonant\n";
		         break;
		case 'y':cout<<"it is a consonant\n";
		         break;
		case 'z':cout<<"it is a consonant\n";
		         break;
		default :cout<<"your input is not an alphabet\n";
	} 
	
}
