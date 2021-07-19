/* Exercice 20: Table de multiplication
Ecrire le programme permettant d'afficher la table de multiplication d'un entier N. */
#include<stdio.h>
main()
{
	int i, N;
	
	start:
	printf("같같같같같같같같같같같같같같Table de Multiplication같같같같같같같같같같같같같같�\n");
	printf("Table de Multiplication de: ");
	scanf("%d", &N);
	
	for (i=1 ; i<=10 ; i++) {
		printf("\n\t%d x %d = %d\n", N, i, N*i);
	}
	
system("pause>nul");
system("cls");
goto start;
return 0;
}
