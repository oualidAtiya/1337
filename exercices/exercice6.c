#include <stdio.h>
int main()
{
	int n ;
	printf("enter the number :");
	scanf("%d",&n);
	while(n <= 0)
	{
		printf("enter the number :");
        	scanf("%d",&n);
	}
	int i = 0;
	while(i <= 10)
	{
		printf("%d x %d = %d\n" , n , i , n*i);
		i++;
	}
}
