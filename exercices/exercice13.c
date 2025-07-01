#include <stdio.h>
int main()
{
	int T[10];
	int *p = T;
	int min;
	int first = 1;
	while(p<=T+9)
	{
		printf("enter the %d element : " , (p - T) + 1);
		scanf("%d",p);
		if(first)
		{
			min = *T;
			first = 0;	
		}
		else if(*p<min)
		{
			min = *p ;
		}
		p++;
	}
	printf("minumum est : %d" , min); 
	return 0;
}
