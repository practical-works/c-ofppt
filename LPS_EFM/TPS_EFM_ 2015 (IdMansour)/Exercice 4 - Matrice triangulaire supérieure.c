#include<stdio.h>
main()
{
	system("title Matrice triangulaire superieure"); system("color 2f");
	int i,j, L,C, T[100][100], matrice_carre=0, S, trgl_sup;
	start:
	printf("Matrice triangulaire superieure\n\n");
	printf("[Taille du tableau]\n\n");
	printf("Entrez un nombre de lignes: ");
	scanf("%d", &L);
	printf("Entrez un nombre de colonnes: ");
	scanf("%d", &C);
	if (L == C) {
		matrice_carre = 1;
	}
	printf("\n[Remplissage du tableau]\n\n");
	for (i=0; i<L; i++) {
		for (j=0; j<C; j++) {
			printf("\t(%d,%d) Entrez une valeur: ", i,j);
			scanf("%d", &T[i][j]);
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
	S = 0, trgl_sup = 1; 
	for (i=0; i<L; i++) {
		for (j=0; j<C; j++) {
			if (i == j) {
				S = S + T[i][j];
			}
			if (i>j && T[i][j] != 0) {
				trgl_sup = 0;
			}
		}
	}
	if (matrice_carre == 0) {
		printf("\nSomme des elements de la diagonale principale de la SOUS-matrice PRINCIPALE : %d\n", S);
		/* Une sous-matrice de A(m,n) est une matrice obtenue en sélectionnant une partie I de {1,...,m} 
		de ses lignes et une partie J de {1,...,n} de ses colonnes; on la note A{I,J}. 
		On dit qu'une sous-matrice est principale si I=J dans la définition précédente. */
	} else {
		printf("\nSomme des elements de la diagonale principale de la matrice: %d\n", S);
	}	
// -------------------------------------------------------
	if (trgl_sup == 0) {
		printf("\nLa matrice carre N'EST PAS triangulaire superieure.\n");
	} else {
		printf("\nLa matrice carre est TRIANGULAIRE SUPERIEURE.\n");
	}
// -------------------------------------------------------
system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;
}

