/* Exercice 4: Entiers cons�cutifs
Ecrire un programme qui affiche un nombre donn� n d�entiers cons�cutifs, � partir d�une valeur donn�e p, 
les valeurs not�es ici n et p �tant lues en donn�es. */
// Nombre d'entiers (n) = Valeur finale (N) - Valeur initiale (p) + 1
// => N = n + p - 1 
#include<stdio.h>
main()
{
	int n,p,i;
	
	start:
	printf("Entiers consecutifs\n");
	printf("\nEntrez une valeur eniere initiale: ");
	scanf("%d", &p);
	printf("\nEntrez le nombres d'entiers consecutifs: ");
	scanf("%d", &n);
	printf("\n");
	
	for (i=p ; i<=n+p-1 ;i++) {
		printf("\t%d\n", i);
		sleep(1);
	}
	
	system("pause>nul");
	system("cls");
	goto start;
	return 0;	
}
