#include <stdio.h>
int main()
{
	float largeur , perimetre,surface,longueur ;
	printf("entrez Largeur : ");
	scanf("%f" , &largeur);
	printf("Entrez La Longueur :");
	scanf("%f" , &longueur);
	perimetre = (largeur + longueur)* 2 ;
	surface = largeur * longueur;
	printf("surface est : %2.f périmétre est : %2.f" , surface , perimetre);
}
