#include <stdio.h>
int main()
{
	int n ;
	int *p = &n;
	int i = 1;
	printf("enter the number : ");
	scanf("%d",p);
	while(i<=*p)
	{
		if(*p % i == 0 )
		{
			printf("%d " , i);
		}
		i++;
	}
		
	
	return 0 ;
}
