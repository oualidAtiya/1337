#include <stdio.h>

int main()
{
	int T[6] ;
	int *p = T ;
	int somme = 0;
	while(p<=T+5){
		printf("enter element %d",p - T);
		scanf("%d",p);
		somme+=*p;
		p++;
	}
	printf("la somme est : %d" , somme);
	return 0;
}
