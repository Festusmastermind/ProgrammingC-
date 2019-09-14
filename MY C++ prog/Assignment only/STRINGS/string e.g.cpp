#include <iostream>
#include <string.h>
using namespace std;
main()
{
	//nb char is used in this section for the basic understanding  that the array is string/char
	char myname[]="This is my story, this is my song";
	char myname2[]="Praising my saviour for this course";

	char*t;
	cout<<"The initialized string is: "<<endl;
	cout<<myname;
	//this section captures the output of myname
    cout<<"\n"<<"The lenght of the string is: "<<strlen(myname);
    cout<<"\nThe 2nd initialized string is: "<<endl;
    cout<<myname2;
    //this section captueres the output of the merging
    cout<<"\n"<<"The lenght of the string is: "<<strlen(myname2);
	cout<<"\n"<<"The merging is: "<<endl;
	cout<<strncat(myname,myname2,8)<<" ";
//	cout<<strlen(strcat(myname,myname2));// to know the lenght of the contenated, we just cout<<strlen(strcat())
	/*A=strcat(myname,myname2);
	cout<<strlen(A);*/
	strcpy(myname,myname2);
	cout<<"\n\tThe original 1st string is: ";
	cout<<myname;
	cout<<"\n\tThe original 2nd string is: ";
	cout<<myname2;
	cout<<"\nAfter Strcpy we have: ";
	cout<<strcpy(myname,myname2);
	cout<<"\n\tSpecify no of character to copy we have:";
	cout<<strncpy(myname,myname2,15);
	
	/*this section is to capture the output from the token illustration
	cout<<"The tokens in this statement are: "<<endl;
	t=strtok(myname," ");//note that tokens is to meant to display the output one by one....
	while(t)
	{
		cout<<"\t"<<t<<"\n";
		t=strtok(NULL," ");
		
	}*/
	return 0;

}
