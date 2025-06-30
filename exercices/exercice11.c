#include <stdio.h>
int min(int *a , int *b)
{
	if(*a<*b)
		return *a ;
	else
		return *b;
}
int main()
{
	int a ,b ;
	printf("enter the two numbers :");
	scanf("%d d%",&a , &b);
	printf("Le minmum est : %d" , min(&a,&b));
}
