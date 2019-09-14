#include <iostream>
#include<iomanip>
#include<string>

using namespace std;
using std::setw;

string FT[50];
string PN[50];
string DN[30];
string RD[30];

int a=1, b=0;

main()
{
for(a=1; ; a++)
{
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
  
for(a=0; a<=b; a++)
{
cout<<a+1<<"\t"<<FT[b]<<"\t"<<PN[b]<<"\t"<<DN[b]<<"\t"<<RD[b]<<"\n\n"<<endl;
}
}    
}
