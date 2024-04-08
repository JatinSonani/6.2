//Q.4 Write a Program to print the fibonacci series up to N numbers using for loop.
#include<stdio.h>

main()
{
	int i,n,f=0,s=1,sum;
	
	printf("Enter The Value : ");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{
		printf("%d\t",f);
		
		sum=f+s;
		f=s;
		s=sum;
	}

}