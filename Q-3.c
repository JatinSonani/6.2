//Q.3 Write a Program to print even numbers from 1 to N using a do-while loop.

#include<stdio.h>
main()
{
	int i=2, N ;
	printf("Enter The Value of N : ");
	scanf("%d" , &N);
	
	printf("Enter Number of 1 to %d :\n ", N);
	
	do{
		printf("%d\t", i);
		i+=2;		
	}while (i<=N);
}