#include <stdio.h>
int main()
{
	float a , b ;
	printf("enter the two numbers :");
	scanf("%f %f" , &a , &b);
	if (a > b){
		printf("le maximun est %2.f" , a);
	}else{
		printf("le maximun est %2.f" , b);
	}
}
