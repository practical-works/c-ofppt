#include<stdio.h>
main()
{
	system("title Moyenne de multiplication"); system("color 5f");
	int n, N, P;
	float M;
	start:
	printf("Moyenne de multiplication\n\n");
	printf("\tEntrez des entiers POSITIFS.\n\tEntrez 0 pour FINIR la saisie.\n\n");
	P = 1, N = 0;
	do {
		do {
			printf("Entrez un entier: ");
			scanf("%d", &n);
			if (n<0) {
				printf("\n\tRESSAYER!\n\n");
			}
		} while (n<0);
		if (n != 0) {
			P = P*n;
			N++;	
		}
	} while (n != 0);
	printf("\n\t°°° Moyenne: ");
	if (N == 0) {
		printf("ERREUR!\n");
	} else {
		M = P/N;
		printf("%.0f\n", M);
	}
	
system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;

}
