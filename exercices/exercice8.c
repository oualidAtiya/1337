#include <stdio.h>
int main()
{
	float n;
	float somme = 0;
	int i = 0 ;
	while(i< 8)
	{
		printf("enter %d number : " , i);
		scanf("%f" , &n);
		if(n < 0)
		{
			break ;
		}
		else
		{
			somme += n;
			i++;
		}
	}
	printf("somme est : %.2f" , somme);
}
