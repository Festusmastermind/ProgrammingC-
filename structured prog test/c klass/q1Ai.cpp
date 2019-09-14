#include<stdio.h>
main()
{
	int i=2, num_int=0;
	printf("this is a while loop");
	printf("\n");
	printf("%i",i);
	printf("\n");
	while(i<100)
	{
		num_int=num_int+i;
		num_int=num_int+3;
		i=i+1;
		printf("%i",num_int);
		printf("\n");
	}
}
