/* Exercice 9 : le tableau somme
Ecrire un programme qui lit la taille N de deux tableaux T1 et T2 du type entier, remplit les tableaux par des valeurs 
entrées au clavier, puis créer et afficher un tableau T3 qui sera la somme des éléments des deux tableaux de départ. */
#include<stdio.h>
main()
{
	int T1[100], T2[100], T3[100], i, N;
	start:
	printf("Tableau somme\n\n");
	printf("Entrez une taille de tableau: ");
	scanf("%d", &N);
	
	printf("\nTableau 1\n\n");
	for (i=0; i<N; i++) {
		printf("\t%d) Entrez une valeur: ", i+1);
		scanf("%d", &T1[i]);
	}
	printf("\nTableau 2\n\n");
	for (i=0; i<N; i++) {
		printf("\t%d) Entrez une valeur: ", i+1);
		scanf("%d", &T2[i]);
	}
	printf("\nTableau 3 (Somme de 1 et 2)\n\n");
	for (i=0; i<N; i++) {
		T3[i] = T1[i] + T2[i];
		printf("\t%d) Valeur: %d\n", i+1,T3[i]);
	}

system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;

}
