#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
char surname[20];
char firstname[20];
char lastname[20];
char fullname[100];
int namelenght, lenght2;

for(; ;)
{
cout<<"\n Enter your surname : ";
cin>>surname;
cout<<"\n\n Enter your firstname : ";
cin>>firstname;
cout<<"\n\n Enter your lastname : ";
cin>>lastname;

strcpy(fullname,surname);
strcat(fullname," ");
strcat(fullname,firstname);
strcat(fullname," ");
strcat(fullname,lastname);
namelenght = strlen(fullname);
lenght2 = strcmp(surname,firstname);

cout<<"\n\n Your full name is : "<<fullname;
cout<<"\n\n The lenght of your full name is : "<<namelenght;
cout<<"\n\n The comparison of your surname and firstname is ; "<<lenght2<<"\n";
}
return 0;
}

