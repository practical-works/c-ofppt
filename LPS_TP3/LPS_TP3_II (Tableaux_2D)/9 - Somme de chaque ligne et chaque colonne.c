/* Exercice 9 : somme de chaque ligne et chaque colonne
Programme qui lit un tableau T(L,C) d'entiers (50 lignes et 50 colonnes max). Remplir le tableau par des valeurs
entrées au clavier et afficher le tableau ainsi que la somme de chaque ligne et de chaque colonne. */
#include<stdio.h>
main()
{
	int i,j, L,C, T[50][50], SL[50], SC[50];
	start:
	system("color 70");
	printf("Somme de chaque ligne et chaque colonne\n\n");
// Création, remplissage, et affichage de tableau
	printf("Taille du tableau:\n\n");
	printf("Entrez un nombre de lignes: ");
	scanf("%d", &L);
	printf("Entrez un nombre de colonnes: ");
	scanf("%d", &C);
	printf("\nRemplissage du tableau:\n\n");
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
// Initialisation des tableaux SL et SC
	for (i=0; i<L; i++) {
		SL[i] = 0;
	}
	for (i=0; i<C; i++) {
		SC[i] = 0;
	}
// Sommation des lignes et des colonnes
	for (i=0; i<L; i++) {
		for (j=0; j<C; j++) {
			SL[i] = SL[i] + T[i][j];
			}
	}
	for (j=0; j<C; j++) {
		for (i=0; i<L; i++) {
			SC[j] = SC[j] + T[i][j];
			}
	}
// Affichage des sommes
	printf("Sommes par lignes:\n\n");
	for (i=0; i<L; i++) {
		printf("\tSomme ligne %d : %d\n", i,SL[i]);
	}
	printf("\nSommes par colonnes:\n\n");
	for (i=0; i<C; i++) {
		printf("\tSomme colonne %d : %d\n", i,SC[i]);
	}
// -------------------------------------------------------
system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;
}


