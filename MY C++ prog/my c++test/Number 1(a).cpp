/* Name: Sunkanmi Adu
   Matric no: 130404107
   dept: computer science
   course code: csc 212
*/
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
	// the declarating section
	   int comp(int x, int y)// comp here is just for the comparation of the highest figure....
	   int player1,player2,player3,player4;
	   int sumA,sumB,sumC,sumD;
	   int a,b,c;
	   //initialization section
	    int player1[3];
	    int player2[3];
	    int player3[3];
	    int player4[3];
	   //this section generates the number of the toss for player 1
	   for(int i=0; i<=6; i++)
	    { 
	      player1[i] =1+rand()%6;
	      sumA = sumA + player1[i];
	    }
	    cout<<endl;
	   // this section generates the number of the toss for player 2
	    for(int i=0; i<=6; i++)
	    { 
	      player2[i] =1+rand()%6;
	      sumB = sumB + player2[i];
	    }
	    cout<<endl;
	    for(int i=0; i<=6; i++)
	    { 
	      player3[i] =1+rand()%6;
	      sumC = sumC + player3[i];
	    }
		cout<<endl;
		//this section generates the number of the toss for player 3 
	      for(int i=0; i<=6; i++)
	     { 
	      player4[i] =1+rand()%6;
	      sumD = sumD + player4[i];
	     }
		cout<<endl;
		//  this section captures the output of the tosses of the players
		cout<<"The player1 toss is"<<sumA;
	    cout<<"The player2 toss is"<<sumB;
	    cout<<"The player3 toss is"<<sumC;
	    cout<<"The player4 toss is"<<sumD;
	  //this section captures the comparation of the highest figure...
	  a = comp(sumA, sumB);
	  b = comp(a, sumC);
	  c = comp(b, sumD);
	  // this section uses the if elseif  for the specification of the comparation...
	  if(sumA==c)
	  {
	  	cout<<"Player1 is the winner";
	  	cout<<"Accept my congratulations";
	  }
	  else if(sumB==c)
	  {
	  	cout<<"Player1 is the winner";
	  	cout<<"Accept my congratulations";
	  }
	  else if(sumC==c)
	  {
	  	cout<<"Player1 is the winner";
	  	cout<<"Accept my congratulations";
	  }
	  else if(sumD==c)
	  {
	  	cout<<"Player1 is the winner";
	  	cout<<"Accept my congratulations";
	  }
	  else cout<<"Sorry you ended up been the one with the least throw";
	  
	  // this section captures the activation of the comparation
	  int comp(int x, int y);
	  // using if else for the specification...
	  if(x>y)
	  {
	  	cout<<"x is the largest";
	  }
	 else cout<<" y is the largest";
	 return 0;
}
