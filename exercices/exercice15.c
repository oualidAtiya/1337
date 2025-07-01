#include <stdio.h>
int main()
{
	int n ;
	int *p = &n;
	printf("enter a number : ");
	scanf("%d",p);
	if( *p % 2 == 0)
	{
		printf("pair");
	}
	else
	{
		printf("unpair");
	}
	return 0;
}
