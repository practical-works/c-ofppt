/* Exercice 4: Entiers consécutifs
Ecrire un programme qui affiche un nombre donné n d’entiers consécutifs, à partir d’une valeur donnée p, 
les valeurs notées ici n et p étant lues en données. */
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
