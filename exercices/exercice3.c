#include <stdio.h>
#include <math.h>
int main()
{
	float x,y,z ;
	printf("entrez x :");
	scanf("%f" , &x);
	printf("entre y : ");
	scanf("%f" , &y);
	z = pow(x,y);
	printf("Le resultat est : %2.f" , z);
	return 0;
}
