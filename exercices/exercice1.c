#include <stdio.h>
int  main()
{
	int birthday ;
	const int currentYear = 2025 ;
	printf("Enter your Birthday : ");
	scanf("%d",&birthday);
	int age = currentYear - birthday ;
	printf("Your Age Is : %d" , age );
	
}
