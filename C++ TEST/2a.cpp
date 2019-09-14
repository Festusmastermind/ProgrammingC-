/*
	NAME: AKINRUJOMU OLUWATOBILOBA SAMUEl
	MATRIC NO: 130404036
	LEVEL: 200L
	DEPARTMENT: COMPUTER SCIENCE
	COURSE: CSC 212(COMPUTER PROGRAMMING 1)
*/
//this is program that detects the smallest and largest input element in container out of the 14 elements inside 
#include<iostream>
using namespace std;
int main()
{
	int mypotlargest=0, mypotsmallest;
	float mypot[14];
	//this section enters the element inside the pot....
	for(int i=0; i<14; i++)
	{
		cout<<"Enter the element "<<i<<" "<<" of my array pot"<<":"<<endl;
		cin>>mypot[i];
	}
	//this section process the largest element inside the array pot.
	for(int i=0; i<14; i++)
	{
		if(mypotlargest<mypot[i])
			mypotlargest = mypot[i];
	}
	cout<<"The Largest Element in the Array is: "<<mypotlargest<<endl;
	//this section process the least element inside the array inside the array pot.
		for(int i=0; i<14; i++)
		{
		if(mypotsmallest>mypot[i])
			mypotsmallest = mypot[i];
     	}
	cout<<"The Smallest Element in the Array is: "<<mypotsmallest<<endl;
}
  
//int main()
//{
//	//declaration of the variables
//	float container[3];
//	//using for loop for interating the elements in the container
//	for(int i=0; i<14; i++){
//		//this will run for 14 times before the end of the loop
//		cout<<"input the items" <<i<<" "<<"of the container"<<":"<<endl;
//		cin>>container[i];
//	}
//	//chechking each of the index to detect the largest and the smallest
//	//this is method is very supertedious but i think is going to work though which means i am getting the hang ofthe programming again
//		if(((container[0])<(container[1]))||((container[0])<(container[2]))||((container[0])<(container[3]))):
//			cout<<"This item"<<container[0] <<"is the smallest";
//	//the above procedure will be reapted for every index to detect the smalles that the largest of the number
//}
