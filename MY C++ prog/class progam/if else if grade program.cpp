#include <iostream>
using namespace std;
main()
// A c++ program that outputs the grade of student based on the score inputed
{
	int score;
	// implementing the student score
	cout<<"\n Enter student score: "; 
	cin>>score;
	// control statement initialization to detect grade
	if ((score>=70)&&(score<=100)) cout<<"Your grade is: "<<"A"<<endl;
	else if ((score>=60)&&(score<=69)) cout<<"Your grade is: "<<"B"<<endl;
	else if ((score>=50)&&(score<=59)) cout<<"Your grade is: "<<"C"<<endl;
	else if ((score>=45)&&(score<=49)) cout<<"Your grade is: "<<"D"<<endl;
	else if ((score>=40)&&(score<=39)) cout<<"Your grade is: "<<"E"<<endl;
	else cout<<"F";
	return 0;
	
}
