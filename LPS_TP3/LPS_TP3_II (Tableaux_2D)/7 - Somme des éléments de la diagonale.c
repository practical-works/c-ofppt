/* Exercice 7 : somme des �l�ments de la diagonale
�crire un algorithme qui calcule la somme des �l�ments de la diagonale d'un tableau T. */
#include<stdio.h>
main()
{
	int i,j, M, T[100][100], S;
	start:
	system("color 70");
	printf("Somme des elements de la diagonale\n\n");
// Cr�ation, remplissage, et affichage de tableau
	printf("Taille du tableau:\n\n");
	printf("Entrez un nombre de lignes et colonnes: ");
	scanf("%d", &M);
	printf("\nRemplissage du tableau:\n\n");
	S = 0;
	for (i=0; i<M; i++) {
		for (j=0; j<M; j++) {
			printf("\t(%d,%d) Entrez une valeur: ", i,j);
			scanf("%d", &T[i][j]);
			if (i == j) {
				S = S + T[i][j];
			}
		}
	}
	printf("\nAffichage du tableau:\n\n");
	for (i=0; i<M; i++) {
		for (j=0; j<M; j++) {
			printf("\t%d", T[i][j]);
		}
		printf("\n\n");
	}
// -------------------------------------------------------
	printf("\n\nLa somme des elements de la diagonale est: %d\n", S);
// -------------------------------------------------------
system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;
}
