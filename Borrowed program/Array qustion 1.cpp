#include <iostream>
using namespace std;
int main()// A massive complex program that computes various operations on the values inside the array.....
{
	int choice;// note that why this id is declared integer because its functions mainly is based upon on the numeric/interger value........
	int myarray[17]={6,8,4,1,9,3,2,3,3,9,1,2,5,7,8,4,7};
	int sum=0,least,max,count,most,temp,counter,less, Ascend, Descend;
	do
	{
		cout<<"\n\n           ARRAYSOFT - OPERATIONAL MENU            \n";
	cout<<"1. View Elements                  2. Sum Elements\n";
	cout<<"3. Find Least Element             4. Find Max Elements\n";
	cout<<"5. Find Most Occurred Element     6. Find Less Occurred Element\n";
	cout<<"7. Arrange Elements in Desending  8. Arrange Elements in Ascending\n";
	cout<<"9. Transpose Elements             10. Exit ARRAYSOFT\n\n";
	cout<<"Eter your choice of operation from the above listed operations\n";
	cin>>choice;
	cout<<endl;
	switch(choice)
	{
		case 1:
			    cout<<"the elements are\n";
			    for(int i=0 ; i<17 ; i++)
		      	{
				cout<<myarray[i]<<",";
			    }
			    break;
		case 2:
				cout<<"The sum is = ";
				for(int i=0 ; i<17 ; i++)
				{
				sum=sum+myarray[i];
		      	}
		 	    cout<<sum;
		     	break;
		case 3:
				cout<<"The least value = ";
				least=myarray[0];
				for(int i=0;i<17;i++) 
				{
					if(least>myarray[i])
					{
					  least=myarray[i];
					}
				}
				cout<<least;
				break;
       case 4:
				cout<<"the maximum value = ";
				max=myarray[0];
				for(int i=0;i<17;i++)
				{
					if(max<myarray[i])
					{
						max=myarray[i];
					}
				}
				cout<<max;
				break;
	   case 5:
				most=myarray[0];
				counter=1;
				for(int i=0;i<17;i++)
				{
					count=0;
					temp=myarray[i];
					count++;
					for(int j=i+1;j<17;j++)
					{
						if(myarray[j]==temp)
						{
							count++;
							if(count>counter)
							{
								most=temp;
								counter=count;
							}
						}
					}
				}
				cout<<"most occurred element is = "<<most;
				break;
	  case 6:
				less=myarray[0];
				counter=1;
				for(int i=0;i<17;i++)
				{
					count=0;
					temp=myarray[i];
					count++;
					for(int i=i+1;i<17;i++)
					{
						if(myarray[i]==temp)
						{
							count++;
							if(count<counter)
							{
								less=temp;
								counter=count;
							}
						}
					}
				}
				cout<<"less occurred element is = "<<less;
				break;
	  case 7:  //using for statement 
	          for(int i=0; i<17; i++)
	          {
	          	for(int j=0; j<17; j++)
	          	{
	          		if(myarray[i]>myarray[j])
	          		  {
	          		  	Ascend=myarray[i];
	          		  	myarray[i]=myarray[j];
	          		  	myarray[j]=Ascend;
	          		  }
	          	}
	          }
	          cout<<"The ascending order of the above array is : ";
	          for(int i=0; i<17; i++)
			  {
			  	cout<<myarray[i];
	          }
	          break;
	  case 8: for(int i=0; i<17; i++)
	          {
	          	for(int j=0; j<17; j++)
	          	{
	          		if(myarray[i]<myarray[j])
	          		  {
	          		  	Descend=myarray[i];
	          		  	myarray[i]=myarray[j];
	          		  	myarray[j]=Descend;
	          		  }
	          	}
	          }
	          cout<<"The ascending order of the above array is : ";
	          for(int i=0; i<17; i++)
			  {
			  	cout<<myarray[i];
	          }
	          break;
	 case 9: for(int i=0; i<17; i++)
	         {
	         	cout<<myarray[i]<<endl;
	         }
	         break;
	          
	}
  }
   while (choice!=10);
	cout<<endl;
}
