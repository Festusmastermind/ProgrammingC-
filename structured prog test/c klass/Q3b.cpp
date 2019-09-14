#include<stdio.h>
main ()
{
	int id [] = {1,2,3,4,5,6,7,8,9,10};
	int age [] = {23,21,24,21,20,22,27,26,23,29};
	int grade [] = {31,21,21,21,22,22,21,21,22,31};
		
		printf("ID\t\t\tAGE\t\t\tGRADE");
		for(int i=0;i<10;i++)
		{
			printf("\n%i\t\t\t%i\t\t\t%i",id[i],age[i],grade[i]);
	
	}
	printf("\n");
	printf("you are disqualify");
	printf("\n");
	for(int i=0;i<10;i++)
	{
		if(age[i]>24)
		{
				printf("\n%i\t\t\t%i\t\t\t%i",id[i],age[i],grade[i]);
		}
		printf("\n");
		if(grade[i]==22)
		{
			printf("\n");
			printf("YOUR GRADE IS 22......You are Disqualified");
			printf("\n%i\t\t\t%i\t\t\t%i",id[i],age[i],grade[i]);
			
		}
		if(grade[i]==22)
		{
			printf("\n");
			printf("YOUR GRADE IS 31......You are Disqualified");
			printf("\n%i\t\t\t%i\t\t\t%i",id[i],age[i],grade[i]);
			
		}
	}
}
