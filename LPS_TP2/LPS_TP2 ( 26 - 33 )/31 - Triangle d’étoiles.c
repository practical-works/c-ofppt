/* Exercice 31: Triangle d��toiles
Ecrire un programme qui affiche un triangle rectangle (triangle avec un angle droit) rempli d'�toiles, 
s'�tendant sur un nombre de lignes entr�es au clavier */
#include<stdio.h>
main()
{
	int i, j, N;
	
	start:
	printf("Triangle rectangle d'etoiles\n\n");
	printf("Entrez la hauteur du triangle: ");
	scanf("%d", &N);
	
	for (i=1; i<=N; i++) {
		printf("\n");
		for (j=1;  j<=i; j++) {
			printf("*");
		}
	}
system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;

}
