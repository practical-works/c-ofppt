/* Exercice 5 : somme des �l�ments d�une matrice
Soit un tableau T � deux dimensions (L,C) pr�alablement rempli de valeurs num�riques.
�crire un algorithme qui calcule la somme de tous les �l�ments de T. */
#include<stdio.h>
main()
{
	int i,j, L,C, T[100][100], S;
	start:
	system("color 70");
	printf("Somme des elements d'une matrice\n\n");
// Cr�ation, remplissage, et affichage de tableau
	printf("Taille du tableau:\n\n");
	printf("Entrez un nombre de lignes: ");
	scanf("%d", &L);
	printf("Entrez un nombre de colonnes: ");
	scanf("%d", &C);
	printf("\nRemplissage du tableau:\n\n");
	S=0;
	for (i=0; i<L; i++) {
		for (j=0; j<C; j++) {
			printf("\t(%d,%d) Entrez une valeur: ", i,j);
			scanf("%d", &T[i][j]);
			S = S + T[i][j];
		}
	}
	printf("\nAffichage du tableau:\n\n");
	for (i=0; i<L; i++) {
		for (j=0; j<C; j++) {
			printf("\t%d", T[i][j]);
		}
		printf("\n\n");
	}
// -------------------------------------------------------
	printf("La somme des elements de la matrice est: %d\n", S);
// -------------------------------------------------------
system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;
}


