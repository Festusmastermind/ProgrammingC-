#include <iostream>
using namespace std;
main()
// A c++ program that designs football score board algorithm
{
	string team1,team2;
	int score1=0,score2=0;
	int status;
	cout<<"\n\t****FOOTBALL SCORE BOARD ALGORITHM****\n\n";
	cout<<"\n Enter Team1: ";
	cin>>team1;
	cout<<"\n Enter Team2: ";
	cin>>team2;
	// using do while control structure for the programminng
  do
  {
  	
  	cout<<"*****************************************\n\n";
  	cout<<" Enter 1 to add a goal to" <<" "<<team1<<"\n";
  	cout<<" Enter 2 to add a goal to" <<" "<<team2<<endl;
  	cout<<" Enter 3 to disqualify a goal of " <<" "<<team1<<"\n";
  	cout<<" Enter 4 to disqualify a goal of" <<" "<<team2<<"\n";
  	cout<<" Enter 5 to End the match\n"; 
	cout<<"*****************************************\n\n";
	cout<<team1<<"["<<score1<<"]vs"<<team2<<"["<<score2<<"]\n";
	cout<<"\tSpecify the status of the ongoing match here: ";
	cin>>status;

	switch(status)
	{
		
		case 1:  cout<<"\nTeam1 has a gooooooooooooaaaaallll!!!\a\a";
		         score1++;//score1=score+1;
		         break;
		case 2:  cout<<"\nTeam2 has a gooooooooooooaaaaallll!!!\a\a";
		         score2++;
		         break;
		case 3:  cout<<"\nTeam1 Gooooaallllllllll disqualified\a\a\a "<<endl;
		         if(score1>0)
				 {
		         score1-=1;
		         cout<<"\n"<<team1<<"has no goal\n\a\a\a";
		         }       
		         break;
		case 4: cout<<"\nTeam2 Gooooaallllllllll disqualified\a\a\a "<<endl;
		        if(score2>0)
				{
			    score2-=1;//score2=score2-1;
		        }
		        else
				{
			    cout<<"\n"<<team2<<"has no goal\n\a\a\a";//because the goal will be equal to zero...
		        }
		        break;
		case 5: 
		       cout<<"\nEND OF THE MATCH\n\n";
			   cout<<team1<<"["<<score1<<"]vs"<<team2<<"["<<score2<<"]"<<endl;
			   cout<<"\n****That is the full time  score board";
			   break;
	  default: cout<<"\nSorry invalid input of code";
	           cout<<"\n Specified within the  specified range of the code ";
			   break;
	}
  	
  }	
	 while(status!=5);
	 cout<<endl;
	
	 return 0;	
}
