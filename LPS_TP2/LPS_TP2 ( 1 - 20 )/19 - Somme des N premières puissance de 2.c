/* Exercice 19: Somme des N premières puissance de 2
Ecrire un programme qui lit un entier positif N et qui affiche la somme des N premières puissances de 2.
Exemple :
Donnée : N=5
Résultat : {2^0 + 2^1 + 2^2 + 2^3 + 2^4 + 2^5} = {1 + 2 + 4 + 8 + 16 + 32} = 63 */
#include<stdio.h>
#include<math.h>
main()
{
	int i, N, P, S=0;
	
	start:
	printf("Somme de N premieres puissances de 2\n\n");
	printf("Entrez un exposant: ");
	scanf("%d", &N);
	
	printf("\n");
	
	for (i=0 ; i<=N ; i++) {
		P = pow(2,i);
		S = S + P;
		printf("2^%d", i);
		if (i<N) {
			printf(" + ");
		} else {
			printf(" = ");
		}	
	}
		for (i=0 ; i<=N ; i++) {
		P = pow(2,i);
		printf("%d", P);
		if (i<N) {
			printf(" + ");
		} else {
			printf(" = ");
		}	
	}
	printf("%d\n", S);
	
system("pause>nul");
system("cls");
goto start;
return 0;

}

