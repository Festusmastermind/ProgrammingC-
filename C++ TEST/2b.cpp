/*
	NAME: AKINRUJOMU OLUWATOBILOBA SAMUEK
	MATRIC NO: 130404036
	LEVEL: 200L
	DEPARTMENT: COMPUTER SCIENCE
	COURSE: CSC 212(COMPUTER PROGRAMMING 1)
*/
//I must code this program in python also
#include<iostream>
using namespace std;
int main(){
	//In this program we having two boxers or participants and 3 judges to decide the various point..within 12 rounds
	int player1point, totalplayer1point=0, totalplayer2point =0, player2point;
	float avgplayer1, avgplayer2;
	for(int i=1; i<=12; i++)
	{
		//inside the 12 rounds we compute a set of 3 judges for player 1 
		cout<<"ROUND "<<i<<endl;
		cout<<"___________"<<endl;
		cout<<"For player 1"<<endl;
		for(int j=1; j<=3; j++)
		{
			cout<<"judge "<<j<<" :";//means that there is 3 judges per round just sitting in the table and judging the points
			cin>>player1point;
			totalplayer1point = totalplayer1point + player1point;
		}
		//also another identifier was used for the set of 3 judges above here..for player 2
		cout<<"For player 2"<<endl;
		for(int k=1; k<=3; k++)
		{
			cout<<"judge "<<k<<" :";
			cin>>player2point;
			totalplayer2point = totalplayer2point + player2point;
		}
	}
	//the computational code below is to get the average of players in the boxing game...
	avgplayer1 = totalplayer1point / 12.0;
	avgplayer2 = totalplayer2point / 12.0;
    //And then the output is below for each of the players rounds for 12 rounds 
	cout<<"Average point of player 1 at the end of 12 Rounds is: "<<avgplayer1<<endl;
	cout<<"Average point of player 2 at the end of 12 Rounds is: "<<avgplayer2<<endl;
	//this section below dictates the winner of the game.....and otherwise
	if(avgplayer1>avgplayer2)
		cout<<"Player 1 is the Winner with "<<avgplayer1<<" points"<<endl;
		else if(avgplayer2>avgplayer1)
			cout<<"Player 2 is the Winner with "<<avgplayer2<<" points"<<endl;
			else 
				cout<<"Both Players draw the match"<<endl;
	
}
