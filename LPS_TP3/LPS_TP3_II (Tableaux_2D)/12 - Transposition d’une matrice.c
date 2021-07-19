/* Exercice 12 : la transposition d’une matrice
Programme qui effectue la transposition tA d'une matrice A de dimensions N et M en une matrice de dimensions M et N. */
#include<stdio.h>
main()
{
	int i,j, N,M, A[100][100], tA[100][100];
	start:
	system("color 70");
	printf("La transposition d'une matrice\n\n");
// Création, remplissage, et affichage de tableau
	printf("Taille du tableau:\n\n");
	printf("Entrez un nombre de lignes: ");
	scanf("%d", &N);
	printf("Entrez un nombre de colonnes: ");
	scanf("%d", &M);
	printf("\nRemplissage du tableau:\n\n");
	for (i=0; i<N; i++) {
		for (j=0; j<M; j++) {
			printf("\t(%d,%d) Entrez une valeur: ", i,j);
			scanf("%d", &A[i][j]);
		}
	}
	printf("\nAffichage du tableau (%d,%d):\n\n", N,M);
	for (i=0; i<N; i++) {
		for (j=0; j<M; j++) {
			printf("\t%d", A[i][j]);
		}
		printf("\n\n");
	}
	
// Affectation de la matrice transposée à tA
	for (i=0; i<N; i++) {
 		for (j=0; j<M; j++) {
 			tA[j][i] = A[i][j];
	 	}
    }
    
// -------------------------------------------------------
	printf("\nAffichage du tableau transposé (%d,%d):\n\n", M,N);
	for (i=0; i<M; i++) {
		for (j=0; j<N; j++) {
			printf("\t%d", tA[i][j]);
		}
		printf("\n\n");
	}
// -------------------------------------------------------
system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;
}


