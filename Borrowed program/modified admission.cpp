#include<iostream>
using namespace std;
int main()
{
	int jambscore,putmescore,sub;
	char department,biochemistry,chemistry,computer,accounting,masscomm,lawenglish;
	float cut_off_mark;
	cout<<"please enter your jamb score:"<<endl;
	cin>>jambscore;
	if (jambscore<=179){
	cout<<"sorry you didn't score the required mark";}
	else if(jambscore>400){
	cout<<"invalid jamb score";}
	else if((jambscore>=180)&&(jambscore<=400)){
	cout<<"waw,congrats you can now enter your post utme score below:"<<endl;
	cin>>putmescore;}
	if (putmescore<=39){cout<<"sorry you didnt qualify"<<endl;}
	else if(putmescore>100){cout<<"invalid score";
	}
	else if((putmescore>=40)&&(putmescore<=100)){
	cout<<"congrats you can now be considered for possible admission"<<endl;
	cut_off_mark=((jambscore/8)+(putmescore/2));
	cout<<"your computed cut off mark is:"<<cut_off_mark<<"\nwait patiently for the release of each department's admittable cut off mark.."<<endl;
    cout<<"the department cut off available are biochemistry,chemistry,computer,accounting,masscomm,law and english"<<endl;
	cout<<"enter 1 for biochemistry"<<endl;
	cout<<"enter 2 for chemistry"<<endl;
	cout<<"enter 3 for computer"<<endl;
	cout<<"enter 4 for accounting"<<endl;
	cout<<"enter 5 for masscomm"<<endl;
	cout<<"enter 6 for law"<<endl;
	cout<<"enter 7 for english"<<endl;
	cin>>sub;
	switch (sub)
	{
	
	case 1:cout<<"the department cut off mark is 57 and your cut off mark is:"<<cut_off_mark<<endl;
	       if (cut_off_mark>=57)cout<<"congrat you have been offered admission into biochemistry department";
	       else cout<<"sorry no admission for you";
	            break;
	case 2:cout<<"the department cut off mark is 51 and your cut off mark is"<<cut_off_mark<<endl;
           if (cut_off_mark>=51)cout<<"congrat you have been offered admission into chemistry department";
		   else cout<<"sorry no admission for you";
		        break;
	case 3:cout<<"the department cut off mark is 54 and your cut off mark is:"<<cut_off_mark<<endl;
	       if (cut_off_mark>=54)cout<<"congrat you have been offered admission into computer science department";
	      else cout<<"sorry no admission for you";
		       break;
	case 4:cout<<"the department cut off mark is 62 and your cut off mark is:"<<cut_off_mark<<endl;
	       if (cut_off_mark>=62)cout<<"congrat you have been offered admission into accounting department";
	      else cout<<"sorry no admission for you";
	           break;
	case 5:cout<<"the department cut off mark is 67 and your cut off mark is:"<<cut_off_mark<<endl;
	      if (cut_off_mark>=67)cout<<"congrat you have been offered admission into masscomm department";
	      else cout<<"sorry no admission for you";
	           break;
	case 6:cout<<"the department cut off mark is 71 and your cut off mark is:"<<cut_off_mark<<endl;
	      if (cut_off_mark>=71)cout<<"congrat you have been offered admission into law department";
	      else cout<<"sorry no admission for you";
	                   break;
	case 7:cout<<"the department cut off mark is 56 and your cut off mark is:"<<cut_off_mark<<endl;
	       if (cut_off_mark>=56)cout<<"congrat you have been offered admission into english department";
	       else cout<<"sorry no admission for you";
	                  break;
	default:cout<<"sorry input the right department";}


}}
