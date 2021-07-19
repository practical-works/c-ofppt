/* Exercice 24 : Supprimer une valeur
Programme qui lit un tableau T de N entiers et qui supprime ensuite une valeur X (entré au clavier) dans le tableau T.
Afficher le tableau résultant. */
#include<stdio.h>
main()
{
	int i, N, T[100], X, P;
	start:
	system("color 1f");
	printf("Supprimer une valeur\n\n");
// Création et remplissage de tableau
	printf("Entrez une taille de tableau: ");
	scanf("%d", &N);
	printf("\nRemplissez le tableau:\n\n");
	for (i=0; i<N; i++) {
		printf("\t%d) Entrez une valeur: ", i+1);
		scanf("%d", &T[i]);
	}
	printf("\n");
// Demander une valeur qui appartient au tableau et déterminer sa position
	do {
		printf("Entrez une valeur (X) du tableau a supprimer: ");
		scanf("%d", &X);
		for (i=0; i<N; i++) {
			if (X == T[i]) {
			P = i;
			break;	
			}	
		}
	} while (i==N);
// Supprimer la valeur du tableau
	for (i=P; i<N-1; i++) {
		T[i] = T[i+1];
	}
	printf("\nTableau resultant:\n\n");
	for (i=0; i<N-1; i++) {
		printf("\t%d) %d\n", i+1, T[i]);
	}
// ----------------------------------
system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;	
}
