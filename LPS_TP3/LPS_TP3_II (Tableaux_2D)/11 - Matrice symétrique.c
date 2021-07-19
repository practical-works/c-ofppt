/* Exercice 11 : matrice symétrique
Ecrire un programme qui teste si une matrice A est symétrique. */
#include<stdio.h>
main()
{
	int i,j, M, T[100][100], sym;
	start:
	system("color 70");
	printf("Matrice symetrique\n\n");
// Création, remplissage, et affichage de tableau
	printf("Taille du tableau:\n\n");
	printf("Entrez un nombre de lignes et colonnes: ");
	scanf("%d", &M);
	printf("\nRemplissage du tableau:\n\n");
	for (i=0; i<M; i++) {
		for (j=0; j<M; j++) {
			printf("\t(%d,%d) Entrez une valeur: ", i,j);
			scanf("%d", &T[i][j]);
		}
	}
	printf("\nAffichage du tableau:\n\n");
	for (i=0; i<M; i++) {
		for (j=0; j<M; j++) {
			printf("\t%d", T[i][j]);
		}
		printf("\n\n");
	}
// Test de symétrie
	sym = 1;
	for (i=0; i<M; i++) {
		for (j=0; j<M; j++) {
			if (i!=j && T[i][j]!=T[j][i]) {
				sym = 0;
				break;
			}
		}
	}
// -------------------------------------------------------
	if (sym == 1) {
		printf("\nLa matrice est symetrique.\n");
	} else {
		printf("\nLa matrice n'est pas symetrique.\n");
	}
// -------------------------------------------------------
system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;
}


