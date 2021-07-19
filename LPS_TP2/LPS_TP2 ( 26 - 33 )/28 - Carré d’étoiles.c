/* Exercice 28: Carré d’étoiles
Ecrire un programme qui affiche un carré rempli d'étoiles, s'étendant sur un nombre de lignes entré au clavier. */
#include<stdio.h>
main()
{
	int i,j, l,L;
	
	start:
	printf("Carre d'etoiles\n\n");
	printf("Entrez la largeur du carre (Nombre de caracteres par ligne): ");
	scanf("%d", &l);
	printf("Entrez la longueur du carre (Nombre de lignes): ");
	scanf("%d", &L);
	printf("\n");
	for (j=1; j<=L; j++) {
		for (i=1; i<=l; i++) {
		printf("*");
	    }
	    printf("\n");
	}



system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;

}
