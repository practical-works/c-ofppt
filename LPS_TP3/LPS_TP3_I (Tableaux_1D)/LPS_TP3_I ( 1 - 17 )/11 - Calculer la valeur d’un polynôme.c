/* Exercice 11 : calculer la valeur d’un polynôme
Calculer pour un réel X donnée la valeur d'un polynôme de degré n: P(X) = An.X^n + An-1.X^n-1 + ... + A1.X + A0 
Les valeurs des coefficients An, ..., A0 seront entrées au clavier et mémorisées dans un tableau A de réels et de taille n+1. */
#include<stdio.h>
#include<math.h>
main()
{
	int i, n;
	float P=0, X, A[100], a;
	start:
	
	printf("Valeur d'un polynome\n\n");
	printf(" P(X) = A(n)*X^n + A(n-1)*X^n-1 + ... + A(2)*X^2 + A(1)*X + A(0)\n\n");
// Déterminer la taille n du tableau de coefficient
	printf("\tEntrez un degre (n): ");
	scanf("%d", &n);
	printf("\n");
// Remplissage manuel du tableau de coefficient A
	for (i=0; i<=n; i++) {
		printf("\tEntrez le coefficient A(%d): ", i);
		scanf("%f", &A[i]);
	}
// Affichage de l'expression du polynome : P(X) = An.X^n + An-1.X^n-1 + ... + A1.X + A0
	printf("\n P(X) = ");
	for (i=n; i>=0; i--) {
		printf("(%.2f)", A[i]);
		if (i > 1) {
			printf("*X^%d + ", i);
		} else if (i == 1) {
			printf("*X + ", i);
		} else if (i == 0) {
			printf("\n\n");
		}
	}
// Calcul et affichage de l'expression de P(X) : P(Valeur) = <Resultat_n> + <Resultat_n-1> + ... + <Resultat_0> = <Resultat>
	printf("\tEntrez une valeur du polynome a calculer (X): ");
	scanf("%f", &X);
	printf("\n P(%.2f) = ", X);
	for (i=n; i>=0; i--) {
		a = A[i] * pow(X,n);
		P = P + a;
		printf("%.2f", a);
		if (i >= 1) {
			printf(" + ");
		} else if (i == 0) {
			printf(" = ");
		}
	}
	printf("%.2f\n\n", P);
	
system("pause>nul");
system("cls");
fflush(stdin);
P=0;
goto start;
return 0;
}
