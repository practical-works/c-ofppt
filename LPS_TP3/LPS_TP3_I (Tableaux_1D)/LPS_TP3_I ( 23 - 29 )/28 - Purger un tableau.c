/* Exercice 28 *** : Purger un tableau
Programme qui permet de purger un tableau (supprimer les éléments qui se répètent). 
Exemple: T(original): |4|7|7|9|1|7|4|9| -----> T(Purgé): |4|7|9|1| */
#include<stdio.h>
main()
{
	int i, j, k, N, T[100], n;
	start:
	system("color 1f");
	printf("Purger un tableau\n\n");
// Création et remplissage de tableau
	printf("Entrez une taille de tableau: ");
	scanf("%d", &N);
	printf("\nRemplissez le tableau:\n\n");
	for (i=0; i<N; i++) {
		printf("\t%d) Entrez une valeur: ", i+1);
		scanf("%d", &T[i]);
	}
	printf("\n");
	
// ----------------------------------
	n=0;
	for (k=0; k<N; k++) {
		for (i=0; i<N-n; i++) {
			for (j=i+1; j<N-n; j++) {
				if (T[i] == T[j]) {
					T[j] = T[j+1];
					n++;
				}
			}
		}
	}

	
// Affichage du tableau resultant
	printf("\nTableau resultant:\n\n");
	for (i=0; i<N-n; i++) {
		printf("\t%d) %d\n", i+1, T[i]);
	}

// ----------------------------------
system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;
}

