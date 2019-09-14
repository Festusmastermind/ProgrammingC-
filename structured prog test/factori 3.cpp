#include<stdio.h>
main()
{
	int fac =1,n,i,factoria;
	printf("pllease input your nuumber");
	scanf("%i",&n);
	
	for(i=1;i<=n;i++)
	{
		fac=fac*i;
		
		factoria = fac/n;
		
	}
	printf(" the factori of %i",factoria);
	
	
}
