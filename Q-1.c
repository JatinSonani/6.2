//Q.1 Write a Program to print 1 to 10 using a do-while loop.

#include<stdio.h>

main()
{
	int i=1;
	
	printf("Enter The Value :\n");
	
	do{
		printf("%d\n", i);
		i++;
	} while(i<=10);
}