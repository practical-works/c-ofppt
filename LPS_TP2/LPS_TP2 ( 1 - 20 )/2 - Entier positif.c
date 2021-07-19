/* Exercice 2: Entier positif
Ecrire un programme qui oblige l'utilisateur de saisir un entier N positif avant de passer à la suite d'un traitement donné.*/
#include<stdio.h>
main()
{
	int N;
	
start:
	printf("Entier positif\n");
	printf("\nPour passer a la suite du traitement, donnez un entier positif:\n");
	
	do {
		printf("\n\tEntrez le nombre: ");
		scanf("%d", &N);
	} while (N<=0);
	
	printf("\n\tL'entier est bien positif, suite du traitement donc ...\n");
	sleep(3);
	printf("\tEuh... Au fait y'a pas de suite xD\n");
	sleep(1);
	printf("\tLoL\n");
	
system("pause>nul");
system("cls");
goto start;
return 0;

}

