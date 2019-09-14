#include<stdio.h>
main()
{
int number;
printf("please choose any integer number 1 to 5");
scanf("%i",&number);
//start switch case //
	switch(number)
	{
		case 1:
			{
			
			printf("you have pressed one\n ");
			printf("HOT");
				printf("\n");
		}
		break;
		
		case 2:
			{
			
			printf("you have pressed two\n ");
			printf("lukeworm");
			printf("\n");
		}
		break;
		
		case 3:
			{
			
			printf("you have pressed three\n ");
			printf("cold");
			printf("\n");
		}
		break;
		
		default:
			{
			
			printf("you have gone out of range");
	}
	
	}
	
	
	
}
