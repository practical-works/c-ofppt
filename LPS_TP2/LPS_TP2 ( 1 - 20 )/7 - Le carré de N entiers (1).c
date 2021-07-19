/* Exercice 7: Le carré de N entiers (1)
Ecrire un programme qui demande à l'utilisateur de saisir N entiers et qui affiche, après chaque saisie, 
le carré de la valeur saisie. Modifier le programme pour que l'utilisateur puisse entrer le nombre de valeurs à saisir. */
#include<stdio.h>
main()
{
	int N, n, i;
	
	start:
	printf("Le carre de N entiers\n");
	
	printf("\nEntrez un nombre d'entiers: ");
	scanf("%d", &N);
	
	for (i=1; i<=N; i++) {
		printf("\n\t%d) Nombre: ", i);
		scanf("%d", &n);
		printf("\tCarre: %d\n", n*n);
	}

puts("\n______________________________________________________________________________");
system("pause>nul");
system("cls");
goto start;
return 0;
}
