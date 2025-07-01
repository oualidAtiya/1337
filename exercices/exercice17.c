#include <stdio.h>
void swaping(int* a , int* b);
int main()
{
	int a , b ;
	printf("enter two numbers : ");
	scanf("%d %d",&a,&b);
	swaping(&a,&b);
	printf("%d %d" , a , b);
	return 0;
}
void swaping(int* a , int* b)
{
	int temp = *a;
	if(*a * *b > 0)
	{
        	*a = *b ;
	        *b = temp ;

	}else
	{
		*a = *a * *b ;
		*b = temp + *b;	
	}
	
}
