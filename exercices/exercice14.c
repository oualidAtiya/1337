#include <stdio.h>
int main()
{
	float a = 8 ;
	float b = 2 ;
	float *p1 = &a ;
	float *p2 = &b ;
	printf("le produit est : %.2f\n" , *p1 * *p2);
	printf("la somme est : %.2f\n" , *p1 + *p2);
	printf("la division est : %.2f\n" , *p1 / *p2);
	printf("la diffirence est : %.2f\n" , *p1 - *p2);
	return 0 ;
}
