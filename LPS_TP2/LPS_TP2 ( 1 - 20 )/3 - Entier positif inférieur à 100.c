/* Exercice 3: Entier positif inf�rieur � 100
Ecrire un programme qui demande � l�utilisateur de lui fournir un nombre entier positif et inf�rieur � 100 
et ceci jusqu�� ce que la r�ponse soit satisfaisante ; le dialogue se pr�sentera ainsi.*/
#include<stdio.h>
main()
{
	int N;
	
start:
	printf("Entier positif inf�rieur � 100\n");
	printf("\nDonnez un entier positif inferieur a 100:\n");
	
	do {
		printf("\n\tEntrez le nombre: ");
		scanf("%d", &N);
	} while (N<=0 || N>=100);
	
	printf("\n\tL'entier est bien positif, et inferieur a 100.\n\tBon travail :3\n");
	
system("pause>nul");
system("cls");
goto start;
return 0;

}
