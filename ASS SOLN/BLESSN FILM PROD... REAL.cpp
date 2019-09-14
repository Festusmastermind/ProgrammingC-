/* PROGRAM FOR FILM PRODUCTION
NAME: KOLAWOLE BLESSING OLUWATOSIN; 
MATRIC NO; 110404018*/

#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
string FT[50];
string PN[50];
string DN[30];
int RD[30];

int a=1, b;

main()
{
for(a=1; ;a++)
{
b = a-1;
cout<<"Enter the film title as FT: "<<endl;
cin>>FT[b];
cout<<"Enter the Producer's name as PN: "<<endl;
cin>>PN[b];
cout<<"Enter the Director's name as DN: "<<endl;
cin>>DN[b];
cout<<"Enter the Release date as RD: "<<endl;
cin>>RD[b];
cout<<"\n\n\tMOUNT ZION FILMS PRODUCTION AND MARKETING INDUSTRY\n\n"<<endl;
cout<<"\t\t\tPRODUCTION LIST\n\n\n"<<endl;
cout<<"S/N"<<" \t TITLE"<<"   \t PRODUCER"<<" \t DIRECTOR"<<" \t RELEASE DATE \n"<<endl;

  
for(int j=0; j<a; j++)
{
cout<<j+1<<"\t"<<FT[j]<<"\t"<<PN[j]<<"\t"<<DN[j]<<"\t"<<RD[j]<<"/07/2012"<<"\n\n"<<endl;
}
system ("CLS");
system ("pause");
}    
}
