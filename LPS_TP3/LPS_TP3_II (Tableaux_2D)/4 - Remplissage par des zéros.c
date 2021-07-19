/* Exercice 4 : remplissage par des zéros
Écrivez un algorithme remplissant un tableau de 6 sur 13, avec des zéros. */
#include<stdio.h>
main()
{
	int i,j, L=6,C=13, T[6][13];
	start:
	system("color 70");
	printf("Remplissage par des zeros\n");
// Création, remplissage, et affichage de tableau
	for (i=0; i<L; i++) {
		for (j=0; j<C; j++) {
			T[i][j] = 0;
		}
	}
	printf("\nAffichage du tableau de zeros (%d,%d):\n\n", L,C);
	for (i=0; i<L; i++) {
		for (j=0; j<C; j++) {
			printf("   %d", T[i][j]);
		}
		printf("\n\n");
	}
// -------------------------------------------------------
	
// -------------------------------------------------------
system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;
}

