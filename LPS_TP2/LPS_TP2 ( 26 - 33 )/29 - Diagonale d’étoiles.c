/* Exercice 29: Diagonale d��toiles
Ecrire un programme qui affiche une � diagonale � d�ast�risques (symboles d'�toiles) dont le nombre est fourni au clavier. */
#include<stdio.h>
main()
{
	int i, j, n;
	
	start:
	printf("Diagonale d'etoiles\n\n");
	printf("Entrez un nombre d'etoiles: ");
	scanf("%d", &n);
	printf("\n");
	
	for (i=1; i<=n; i++) {
		printf("*\n");
		for (j=1; j<=i; j++) {
			printf("    ");
		}
		
	}
	
system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;

}
