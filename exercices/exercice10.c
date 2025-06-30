#include <stdio.h>
int main()
{
	float notes[10] ;
	float somme = 0 ;
	int i = 0 ;
	while(i< 10)
	{
		printf("enter %d Note : " , i+1);
		scanf("%f",&notes[i]);
		somme+=notes[i];
		i++ ;
	}
	printf("La Moyenne est : %.2f" , somme/10);
}
