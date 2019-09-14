#include<stdio.h>
main()
{
	int n,f1 =0,f2 = 1, next,c;
	printf("enter the first number \n");
	scanf("%i",&n);
	
	printf("the fabonacci for  %i is\n",n);
	for(c=0;c<n;c++)
	{
		if(c<=1)
		{
			next =c;
			
		}
		else {
			
			next = f1 + f2;
			f1 = f2;
			f2 = next;
		}
		printf("%i\t",next);
	}
	
	
	
	
	
	
	
}
	
	
	

