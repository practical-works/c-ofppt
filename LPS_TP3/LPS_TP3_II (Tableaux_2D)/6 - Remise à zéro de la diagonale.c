/* Exercice 6 : remise � z�ro de la diagonale
Ecrire un programme qui met � z�ro les �l�ments de la diagonale principale d'une matrice carr�e T. */
#include<stdio.h>
main()
{
	int i,j, M, T[100][100];
	start:
	system("color 70");
	printf("Remise a zero de la diagonale\n\n");
// Cr�ation, remplissage, et affichage de tableau
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
// Remise � z�ro de la diagonale et affiche de la matrice diagonalis�e
	for (i=0; i<M; i++) {
		for (j=0; j<M; j++) {
			if (i == j) {
				T[i][j] = 0;
			}
		}
	}
	printf("\nAffichage du tableau resultant:\n\n");
	for (i=0; i<M; i++) {
		for (j=0; j<M; j++) {
			printf("\t%d", T[i][j]);
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


