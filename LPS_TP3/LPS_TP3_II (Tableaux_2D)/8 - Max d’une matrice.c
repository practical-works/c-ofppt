/* Exercice 8 : le max d’une matrice
Soit un tableau T à deux dimensions (12, 8) préalablement rempli de valeurs numériques.
Écrire un algorithme qui recherche la plus grande valeur au sein de ce tableau. */
#include<stdio.h>
main()
{
	int i,j, L,C, T[100][100], max;
	start:
	system("color 70");
	printf("Max d'une matrice\n\n");
	
// Création, remplissage, et affichage de tableau
	printf("Taille du tableau:\n\n");
	printf("Entrez un nombre de lignes: ");
	scanf("%d", &L);
	printf("Entrez un nombre de colonnes: ");
	scanf("%d", &C);
	printf("Remplissage du tableau:\n\n");
	for (i=0; i<L; i++) {
		for (j=0; j<C; j++) {
			printf("\t(%d,%d) Entrez une valeur: ", i,j);
			scanf("%d", &T[i][j]);
			if (i==0 && j==0) {
				max = T[i][j];
			} else {
				if (T[i][j] >= max) {
					max = T[i][j];
				}
			}
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
	printf("Le maximum des elements de la matrice est: %d\n\n", max);
// -------------------------------------------------------
system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;
}


