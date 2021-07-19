/* Exercice 6 : la somme, le produit et la moyenne d’un tableau
Ecrire un programme qui lit la taille N d'un tableau T du type entier, remplit le tableau par des valeurs entrées et l'affiche.
Calculer et afficher ensuite la somme, le produit et la moyenne des éléments du tableau. */
#include<stdio.h>
main()
{
	int T[100], i, N, S=0, P=1; 
	float M;
	start:
	printf("Somme, produit, et moyenne d'un tableau\n\n");
	printf("Entrez un nombre de valeurs: ");
	scanf("%d", &N);
	printf("\n");
	
	for (i=0; i<N; i++) {
		printf("\t%d) Entrez une valeur: ", i+1);
		scanf("%d", &T[i]);
		S = S + T[i];
		P = P * T[i];
	}
	M = S/(float)N;
	printf("\nSomme: %d\nProduit: %d\nMoyenne: %.2f\n", S,P,M);

system("pause>nul");
system("cls");
fflush(stdin);
S=0; P=1;
goto start;
return 0;
}
