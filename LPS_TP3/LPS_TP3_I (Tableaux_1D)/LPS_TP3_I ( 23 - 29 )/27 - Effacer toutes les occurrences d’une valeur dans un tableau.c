/* Exercice 27 ** : Effacer toutes les occurrences d’une valeur dans un tableau
Programme qui lit un tableau entier T[N], le remplit au clavier et l'affiche. Effacer ensuite toutes les occurrences d'une 
valeur X (entré au clavier) dans le tableau T et tasser les éléments restants. Afficher le tableau résultant.
Exemple: T: |4|-8|7|5|1|5|0|6| -----> (X=5) -----> T: |4|-8|7|1|0|6| */
#include<stdio.h>
main()
{
	int i, j, N, T[100], X, P[100], p;
	start:
	system("color 1f");
	printf("Effacer toutes les occurrences d'une valeur dans un tableau\n\n");
	
// Création et remplissage de tableau
	printf("Entrez une taille de tableau: ");
	scanf("%d", &N);
	printf("\nRemplissez le tableau:\n\n");
	for (i=0; i<N; i++) {
		printf("\t%d) Entrez une valeur: ", i+1);
		scanf("%d", &T[i]);
	}
	printf("\n");
	
// Demander une valeur (X) qui appartient au tableau
	p=0;
	do {
		printf("Entrez une valeur (X) du tableau a supprimer: ");
		scanf("%d", &X);
		for (i=0; i<N; i++) {
			if (X == T[i]) {
				P[p] = i;
				p++;
			}	
		}
	} while (p==0);
	
// Supprimer toutes les occurrences de la valeur (X) dans le tableau
	for (j=0; j<p; j++) {
		for (i=P[j]; i<N-1; i++) {
			T[i] = T[i+1];	
		}	
		P[j+1] = P[j+1] - (j+1);
	}

// Affichage du tableau resultant
	printf("\nTableau resultant:\n\n");
	for (i=0; i<N-p; i++) {
		printf("\t%d) %d\n", i+1, T[i]);
	}
	
// ----------------------------------
system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;
}

