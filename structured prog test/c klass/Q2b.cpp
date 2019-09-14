#include<stdio.h>
main()
{
	char value;
	printf("press R for RED\t\t G for GREEN\t\t B for BLUE\t\t then K for BLACK");
	printf("please select your choice of colour");
	scanf("%c",&value);
	 
			switch(value)
			{
				case 'R':
				case 'r':
				{
					printf("RED");
				}
				break;
					
				case 'G':
				case 'g':
					{
					
					printf("GREEN");
				}
				break;
			
				case 'B':
				case 'b':
					{
					
					printf("BLUE");
				}
				break;
				
				default:
					printf("BLACK");
					
					
				}
			}

