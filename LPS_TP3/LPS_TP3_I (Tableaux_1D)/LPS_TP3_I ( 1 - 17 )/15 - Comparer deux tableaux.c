/* Exercice 15 : comparer deux tableaux
Ecrire un programme permettant de comparer deux tableaux T1 et T2 de N entiers (remplis par l’utilisateur). 
Deux tableaux sont égaux si tous les éléments se trouvant dans le même indice sont égaux. */	
#include<stdio.h>
main()
{
	int i, N, I=0, T1[100], T2[100];
	start:
	printf("Comparer deux tableaux\n\n");
	printf("Entrez une taille des deux tableaux: ");
	scanf("%d", &N);
	printf("\nTableau 1 :\n");
	for (i=0; i<N; i++) {
		printf("\t%d) Entrez une valeur: ", i+1);
		scanf("%d", &T1[i]);
	}
	printf("\nTableau 2 :\n");
	for (i=0; i<N; i++) {
		printf("\t%d) Entrez une valeur: ", i+1);
		scanf("%d", &T2[i]);
	}
	printf("\nComparaison :\n");
	for (i=0; i<N; i++) {
		if (T1[i] == T2[i]) {
			printf("\t%d) %d == %d\n", i+1, T1[i],T2[i]);
		} else {
			printf("\t%d) %d != %d\n", i+1, T1[i],T2[i]);
			I++;
			//break;
		}
	}
	printf("\nResultat :\n");
	if (I == 0) {
		printf("\tLes deux tableaux sont egaux !\n");
	} else {
		printf("\tLes deux tableaux sont differents.\n");
	}
system("pause>nul");
system("cls");
fflush(stdin);
I=0;
goto start;
return 0;

}
