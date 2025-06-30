#include <stdio.h>
int main()
{
	int n ;
	printf("entre a number between 10 and 20 : ");
	scanf("%d", &n);
	while(n<10)
	{
		printf("plus grand : ");
		scanf("%d",&n);	
	}
	while(n>20)
	{
                printf("plus petit ! : ");
                scanf("%d",&n);
	}

}
