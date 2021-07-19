/* Exercice 10 : l’addition de deux matrices
Ecrire un programme qui réalise l'addition de deux matrices A et B de mêmes dimensions L et C.*/
#include<stdio.h>
main()
{
	int i,j, L,C, A[100][100], B[100][100], S[100][100];
	start:
	system("color 70");
	printf("L'addition de deux matrices\n\n");
// Création et remplissage des tableaux
	printf("Taille des deux tableaux:\n\n");
	printf("Entrez un nombre de lignes: ");
	scanf("%d", &L);
	printf("Entrez un nombre de colonnes: ");
	scanf("%d", &C);
	printf("\nRemplissage des tableaux:\n");
	printf("\nTableau 1:\n\n");
	for (i=0; i<L; i++) {
		for (j=0; j<C; j++) {
			printf("\t(%d,%d) Entrez une valeur: ", i,j);
			scanf("%d", &A[i][j]);
			S[i][j] = A[i][j];
		}
	}
	printf("\nTableau 2:\n\n");
	for (i=0; i<L; i++) {
		for (j=0; j<C; j++) {
			printf("\t(%d,%d) Entrez une valeur: ", i,j);
			scanf("%d", &B[i][j]);
			S[i][j] = S[i][j] + B[i][j];
		}
	}

// Affichage des tableaux resulants
	printf("\nAffichage des tableaux:\n\n");
	printf("Tableau 1:\n\n");
	for (i=0; i<L; i++) {
		for (j=0; j<C; j++) {
			printf("\t%d", A[i][j]);
		}
		printf("\n\n");
	}
	printf("Tableau 2:\n\n");
	for (i=0; i<L; i++) {
		for (j=0; j<C; j++) {
			printf("\t%d", B[i][j]);
		}
		printf("\n\n");
	}
	printf("Tableau Somme:\n\n");
	for (i=0; i<L; i++) {
		for (j=0; j<C; j++) {
			printf("\t%d", S[i][j]);
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


