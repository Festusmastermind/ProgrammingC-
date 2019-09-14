#include<stdio.h>
main()
{
	int value;
	printf("press 1 for HOT\t\t 2 for LUKEWARM\t\t 3 for COLD");
	printf("please enter your choice of operation");
	scanf("%i",&value);
			switch(value)
			
				case 1:
			{
			
					printf("you have selected 1");
					printf("your flag value is HOT");
	
				break;
					
				case 2:
					{
					
					printf("you have selected 2");
					printf("your flag value is LUKEWARM");
				}
				break;
			
				case 3:
					{
					
					printf("you have selected 3");
					printf("your flag value is COLD");
				}
				break;
				default:
					{
					
					printf("you are out of range");
					printf("please try again");
					
				}
			}
}
