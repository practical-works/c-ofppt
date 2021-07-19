/*Exercice 5 : Puissance nième
Fonction qui calcule la valeur X^N pour une valeur réelle X (type double) et une valeur entière positive N (type int).
Ecrire un programme qui teste la fonction à l'aide de valeurs lues au clavier. */
#include<stdio.h>
double puissance(double X, int N) {
	int i;
	float P=1;
	for (i=1; i<=N; i++) {
		P = P*X;
	}
	return P;
}
main()
{
	double X;
	int N;
	start:
	printf("Puissance Nieme d'un reel\n\n");
	printf("Entrez un nombre: ");
	scanf("%lf", &X);
	printf("Entrez une puissance: ");
	scanf("%d", &N);
	printf("\n\t%.2lf^%d = %.2lf\n", X,N, puissance(X,N));

system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;
}
