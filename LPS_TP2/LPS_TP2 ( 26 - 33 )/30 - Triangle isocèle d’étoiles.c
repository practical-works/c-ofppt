/* Exercice 30: Triangle isocèle d’étoiles
Ecrire un programme qui affiche un triangle isocèle (triangle à deux côtés de même longueur) formé d'étoiles. 
Sa hauteur N est saisie au clavier.
N.B: Il faut que la dernière ligne s'affiche sur le bord gauche de l'écran. */
#include<stdio.h>
main()
{
	int i, j, N, M;
	
	start:
	printf("Triangle isocele d'etoiles\n\n");
	printf("Entrez la hauteur du triangle: ");
	scanf("%d", &N);
	M = N;
	printf("\n");
	
	for (i=1; i<=N; i++) {
        for (j=1; j<=M; j++) {
		    printf(" ");
			}
			M--;
		for (j=1; j<=i; j++) {
		    printf("*");
	    }
	    for (j=1; j<=i-1; j++) {
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
