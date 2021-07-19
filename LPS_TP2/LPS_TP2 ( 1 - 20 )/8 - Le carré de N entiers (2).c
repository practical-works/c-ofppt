/* Exercice 8: Le carré de N entiers (2)
Ecrire un programme qui demande à l'utilisateur de saisir des entiers, qui affiche, après chaque saisie, 
le carré de la valeur saisie et qui interrompt la saisie si l'utilisateur entre la valeur -1.*/
#include<stdio.h>
main()
{
	int n=0, i=1;
	
	start:
	printf("Le carre de N entiers\n");
	
	while (n != -1) {
		printf("\n\t%d) Nombre: ", i);
		scanf("%d", &n);
		printf("\tCarre: %d\n", n*n);
		i++;
	}

puts("\n______________________________________________________________________________");
system("pause>nul");
system("cls");
fflush(stdin);
n=0, i=1;
goto start;
return 0;
}
