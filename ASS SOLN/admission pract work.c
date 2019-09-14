#include <iostream>
using namespace std;
main()
{
  int i;
  for(i=1; i<=20; i++)
  {

int jambreg, utme, putme, cutofp;
cout<<"Enter your jamb reg no\n\n";
cin>>jambreg;
cout<<"Enter your UTME SCORE as UTME: ";
cin>>utme;
cout<<"Enter your PUTME SCORE as PUTME: ";
cin>>putme;




if((utme>=200) || (putme>=40))
{
cutofp = ((utme/8) + (putme/2));
cout<<"\n\t\tAAUA ADMISSION OFFICE\n";
cout<<"\t\t\t AKUNGBA AKOKO\n\n";
cout<<"\t\t\t SUCCESSFULLY SCREENED CANDIDATE FOR \n\t\t2013/2014 ADMISSION\n\n";
cout<<"S/N \tJAMB REG NO\t PUTMESCORE\t UTMESCORE\tAGGR.SCORE\n  ";
cout<<i<<"\t"<<jambreg<<"\t"<<putme<<"\t"<<utme<<"\t"<<cutofp<<"\n";
}
else
{
cout<<"unsuccessful candidatte forbdb admision requirement\n";
} 
}
}
