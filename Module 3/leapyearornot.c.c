#include<stdio.h>
main()
{
	int year;
	printf("Enter Year :- ");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("It's a leap year ");
		
	}
	else
	{
		printf("Its not leap year");
		
	}
}
