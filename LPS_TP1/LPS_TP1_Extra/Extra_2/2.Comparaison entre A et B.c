/* Nom: Comparaison de deux nombres
   Description: Vérifier si A est égal, supérieur, ou inférieur à B.*/
#include<stdio.h>
main()
{
	float A,B ;
	
	start:
	printf("Comparaison de deux nombres A et B (reels):\n\n");
	printf("\tEntrez A: ");
	scanf("%f",&A);
	printf("\tEntrez B: ");
	scanf("%f",&B);
	printf("\n");
	if (A==B) {
		printf("%f est egal a %f", A,B);
	} else if (A>B) {
		printf("%f est superieur a %f", A,B);
	} else {
		printf("%f est inferieur a %f", A,B);
	}
	
	system("pause>nul");
	system("cls");
	goto start;
	return 0;
}
