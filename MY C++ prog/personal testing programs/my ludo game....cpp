#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
main()
{
	//declaration section of the variables...
	int player1, player2, player3, player4;
	int player1tossA, player1tossB, player2tossA, player2tossB, player3tossA, player3tossB, player4tossA, player4tossB;
	int player1toss_sum=0, player2toss_sum=0, player3toss_sum=0, player4toss_sum=0;
	//this section of the program starts here...
	int control = time(NULL);
	srand (control);
	
	cout<<"\n\n\t******MY LUDO GAME****\n\n";
	// this section captures the times the player will played the ludo game...
	for(int i=0; i<3; i++)
	{
		cout<<"LUDO GAME "<<i+1<<endl;
		player1tossA = 1+rand()%6;
	    player1tossB = 1+rand()%6;
	    player1toss_sum = player1tossA + player1tossB;
	    cout<<"The player1 tosses are: "<<player1tossA<<"and"<<player1tossB<<endl;
	   
	    //this section outputs the sumtosses for player2....
		player2tossA = 1+rand()%6;
	    player2tossB = 1+rand()%6;
	    player2toss_sum = player2tossA + player2tossB;
	    cout<<"The player2 tosses are: "<<player2tossA<<"and"<<player2tossB<<endl<<endl;
	    
	    //this section outputs the sumtosses for player 3
		player3tossA = 1+rand()%6;
	    player3tossB = 1+rand()%6;
	    player3toss_sum = player3tossA + player3tossB;
	    cout<<"The player3 tosses are: "<<player3tossA<<"and"<<player3tossB<<endl<<endl;
	    
		//this section outputs the sumtosses for player4....
		player4tossA = 1+rand()%6;
	    player4tossB = 1+rand()%6;
	    player4toss_sum = player4tossA + player4tossB;
	    cout<<"The player4 tosses are: "<<player4tossA<<"and"<<player4tossB<<endl<<endl;
	    
	}
	// this section process and captures the winner....and the losser of the match....(ludo game)
	if((player1toss_sum>player2toss_sum)&&(player1toss_sum>player3toss_sum)&&(player1toss_sum>player4toss_sum))
	 {
	 	cout<<"Player 1 is the WINNER! Accept my congratulations!!!HURRAY!!!";
	 }
	else if((player2toss_sum>player1toss_sum)&&(player2toss_sum>player3toss_sum)&&(player2toss_sum>player4toss_sum))
	 {
	 	cout<<"Player 2 is the WINNER! Accept my congratulations!!!HURRAY!!!";
	 }
	else if((player3toss_sum>player1toss_sum)&&(player3toss_sum>player2toss_sum)&&(player3toss_sum>player4toss_sum))
     {
	 	cout<<"Player 3 is the WINNER! Accept my congratulations!!!HURRAY!!!";
	 }
	else if((player4toss_sum>player1toss_sum)&&(player4toss_sum>player2toss_sum)&&(player4toss_sum>player3toss_sum))
	 {
	 	cout<<"Player 4 is the WINNER! Accept my congratulations!!!HURRAY!!!";
	 }
	 cout<<endl;
	 // this section captures the losser the of the game...
	 	if((player1toss_sum<player2toss_sum)&&(player1toss_sum<player3toss_sum)&&(player1toss_sum<player4toss_sum))
	 {
	 	cout<<"Player 1 is the LOSSER! Accept my congratulations!!!HURRAY!!!";
	 }
	else if((player2toss_sum<player1toss_sum)&&(player2toss_sum<player3toss_sum)&&(player2toss_sum<player4toss_sum))
	 {
	 	cout<<"Player 2 is the LOSSER! Accept my congratulations!!!HURRAY!!!";
	 }
	else if((player3toss_sum<player1toss_sum)&&(player3toss_sum<player2toss_sum)&&(player3toss_sum<player4toss_sum))
     {
	 	cout<<"Player 3 is the LOSSER! Accept my congratulations!!!HURRAY!!!";
	 }
	else if((player4toss_sum<player1toss_sum)&&(player4toss_sum<player2toss_sum)&&(player4toss_sum<player3toss_sum))
	 {
	 	cout<<"Player 4 is the LOSSER! Accept my congratulations!!!HURRAY!!!";
	 }
}
