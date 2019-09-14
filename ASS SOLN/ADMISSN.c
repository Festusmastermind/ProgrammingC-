#include <iostream>
using namespace std;
int main()
{
int jambreg, utme, putme, tscore,cutofp;
cout<<"Enter your Jambreg as Jambreg: "<<jambreg;
cin>>jambreg;
cout<<"Enter your UTME SCORE as UTME: "<<utme;
cin>>utme;
cout<<"Enter your PUTME SCORE as PUTME: "<<putme;
cin>>putme;
if (utme<200 || putme<40)
{
cout<<"\n Sorry you are not elligible for admission!!!";
}
else if(utme>=200 && putme>=40)
{
cutofp = ((utme/8) + (putme/2))
cout<<"\n Your aggregate score is: "<<cutofp;
cout<<"\n Congrats!! You are elligible for admission!!!";

cout<<"\n\t\tAAUA ADMISSION OFFICE\n";
cout<<"\t\t\t AKUNGBA AKOKO\n\n";
cout<<"\t\t\t SUCCESSFULLY SCREENED CANDIDATE FOR \n\t\t2013/2014 ADMISSION\n\n";
cout<<"JAMB REG NO\t PUTMESCORE\t UTMESCORE\tAGGR.SCORE\n  ";
cout<<jambreg<<"\t"<<putme<<"\t"<<utme<<"\t"<<cutofp<<"\n";
else
}
}
