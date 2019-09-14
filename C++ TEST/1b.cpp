/*
	NAME: AKINRUJOMU OLUWATOBILOBA SAMUEK
	MATRIC NO: 130404036
	LEVEL: 200L
	DEPARTMENT: COMPUTER SCIENCE
	COURSE: CSC 212(COMPUTER PROGRAMMING 1)
*/
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main(){
	int control = time(NULL);
	srand(control);
	cout<<"Your Mtn Recharge card is: "<<endl;
	for(int i=1;i<=16; i++){
	cout<<1 + rand()%8;
}
}
