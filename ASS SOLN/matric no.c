#include <iostream.h>
main()
{
int jambregno;
int jambreg = 1413000, i, utme, putme, cutofp;
cout<<"Enter your UTME SCORE as UTME: "<<utme;
cin>>utme;
cout<<"Enter your PUTME SCORE as PUTME: "<<putme;
cin>>putme;
cout<<"\n\t\tAAUA ADMISSION OFFICE\n";
cout<<"\t\t\t AKUNGBA AKOKO\n\n";
cout<<"\t\t\t SUCCESSFULLY SCREENED CANDIDATE FOR \n\t\t2013/2014 ADMISSION\n\n";
cout<<"S/N \tJAMB REG NO\t PUTMESCORE\t UTMESCORE\tAGGR.SCORE\n  ";
for(i=1;i<=20;i++)
{
jambregno = jambreg + 1;
if(utme<=200 && putme<=40)continue;
cutofp = ((utme/8) + (putme/2))
cout<<i<<"\t"<<jambregno<<"\t"<<putme<<"\t"<<utme<<"\t"<<cutofp<<"\n";
}
} 

