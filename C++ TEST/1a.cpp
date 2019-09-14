/*
	NAME: AKINRUJOMU OLUWATOBILOBA SAMUEK
	MATRIC NO: 130404036
	LEVEL: 200L
	DEPARTMENT: COMPUTER SCIENCE
	COURSE: CSC 212(COMPUTER PROGRAMMING 1)
*/
#include<iostream>
#include<stdlib.h>//note that this library is needed for srand(control)funtion....i.e randonm generator
#include<time.h>//note that this library is needed for time(null).....
using namespace std;
int main(){
	
	int tossplayer1, toss2player1, tossplayer2, toss2player2, tossplayer3, toss2player3, tossplayer4, toss2player4;
	int totalplayer1=0, totalplayer2=0, totalplayer3=0, totalplayer4=0;
	int control = time(NULL);
	srand(control);
	//note the ludo game numbers are generated randomly since we don't know what it could have been
	//And aslo note that the for loop specified the number of time they played and inside the for loop we the 4 players in the ludo game.
	cout<<"\n\n\t*****THIS IS THE OUTPUT OF A REAL LIFE LUDO GAME****"<<endl;
	for(int i=1;i<=3;i++){
		cout<<"GAME "<<i<<endl;//this repeate itself consecutively throughout the for loop of the program....
		//the scope is that player1 tosses twice because it two die and the summation is recorded
		tossplayer1 = 1+ rand()% 6;
		toss2player1 = 1+rand()%6;
		totalplayer1=tossplayer1+toss2player1+totalplayer1;
		cout<<"Player 1 toss "<<tossplayer1<<" and "<<toss2player1<<endl;//this only outputs the exact tosses....sweet
		//still in the same for loop just remembered that all the funtions is in the for loops and nothing else...
		//also player2 tosses twice because it is two dies and the summation is recorded...
		tossplayer2 = 1+ rand()% 6;
		toss2player2 = 1+rand()%6;
		totalplayer2=tossplayer1+toss2player2+totalplayer2;
		cout<<"Player 2 toss "<<tossplayer2<<" and "<<toss2player2<<endl;
		//the samed thing applies to the player 3...
		tossplayer3 = 1+ rand()% 6;
		toss2player3 = 1+rand()%6;
		totalplayer3=tossplayer1+toss2player3+totalplayer3;
		cout<<"Player 3 toss "<<tossplayer3<<" and "<<toss2player3<<endl;
		//And last but not the least is the player4 recordings of tosses
		tossplayer4 = 1+ rand()% 6;
		toss2player4 = 1+rand()%6;
		totalplayer4=tossplayer1+toss2player4+totalplayer4;
		cout<<"Player 4 toss "<<tossplayer1<<" and "<<toss2player4<<endl;
		
	}
	//The section allows us to code and announce the highest tosses thrower of the ludo game 
	if((totalplayer1>totalplayer2)&&(totalplayer1>totalplayer3)&&(totalplayer1>totalplayer4))
		cout<<"Player 1 is the Winner! Accept my congratulations!! Hurray!!!"<<endl;
		else if((totalplayer2>totalplayer1)&&(totalplayer2>totalplayer3)&&(totalplayer2>totalplayer4))
			cout<<"Player 2 is the Winner! Accept my congratulations!! Hurray!!!"<<endl;
			else if((totalplayer3>totalplayer1)&&(totalplayer3>totalplayer2)&&(totalplayer3>totalplayer4))
				cout<<"Player 3 is the Winner! Accept my congratulations!! Hurray!!!"<<endl;
				else if((totalplayer4>totalplayer1)&&(totalplayer4>totalplayer2)&&(totalplayer4>totalplayer3))
					cout<<"Player 1 is the Winner! Accept my congratulations!! Hurray!!!"<<endl<<endl;
	//While this section allows us to code and announce the least tosses thrower of the lude game.,				
	if((totalplayer1<totalplayer2)&&(totalplayer1<totalplayer3)&&(totalplayer1<totalplayer4))
		cout<<"Player 1 is the looser, Sorry, you ended up been the one with the least throw";
		else if((totalplayer2<totalplayer1)&&(totalplayer2<totalplayer3)&&(totalplayer2<totalplayer4))
			cout<<"Player 2 is the looser, Sorry, you ended up been the one with the least throw";
			else if((totalplayer3<totalplayer1)&&(totalplayer3<totalplayer2)&&(totalplayer3<totalplayer4))
				cout<<"Player 3 is the looser, Sorry, you ended up been the one with the least throw";
				else if((totalplayer4<totalplayer1)&&(totalplayer4<totalplayer2)&&(totalplayer4<totalplayer3))
					cout<<"Player 4 is the looser, Sorry, you ended up been the one with the least throw";
}
