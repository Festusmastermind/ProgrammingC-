#include <iostream>
using namespace std;
main()
// A c++ program that calculate and output the sum of every third integer, begining with i=2  and less than using while 100 and do-while in a seperate program
{ 
    int sum=0;
    int count=2;
    //using do while for the programming
   while (count<100);
	{
		sum=sum+count;
    	count+=3;
		cout<<count<<endl;
    }
    	
    cout<<"\n The sum of every third integer is : "<<sum<<endl;
    


}
//int sum =0;
//for (int counter = 2; counter<100; counter+=3){
     // sum+=counter;
	 // counter=counter+3;	
//}
//cout<<"the summation of every third integer is :"<<sum<<endl;
