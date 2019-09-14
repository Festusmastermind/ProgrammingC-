#include <iostream>
using namespace std;
int main()
{
	char color;
	cout<<"\n\tInput your any type of color you want ";// thismethod is anothermethod used for direct char like alphabets programinstead of using switch-case
	cin>>color;
	//this section captures prediction .....hint i used normal cout for the implementation.
	if((color=='w')||(color=='y'))
	{
		cout<<"Your predictive character is pure and wicked";
	}
	else if((color=='b')||(color=='a')||(color=='g'))
	{
	 cout<<"Your predictive character is wicked and unpredictable";	
	}
		else if(color=='r')
	{
	 cout<<"Your predictive character is dangerous and occultic";	
	}
		else if(color=='o')
	{
	 cout<<"Your predictive character is loving and peaceful ";	
	}
		else if(color=='q')
	{
	 cout<<"Your predictive character is Growing and fufilling";	
	}
  return 0;
}
