/* Exercice 18 : la recherche séquentielle
Programme qui lit la taille N d'un tableau T d'entiers, le remplit par des valeurs entrées au clavier et l'affiche.
Déterminer si un entier X (entré au clavier) appartient au tableau T. */
#include<stdio.h>
main()
{
	int i, N, T[100], X, XcT=0;
	start:
	printf("Recherche sequentielle\n\n");
	printf("Entrez une taille de tableau: ");
	scanf("%d", &N);
	
	printf("\nTableau :\n");
	for (i=0; i<N; i++) {
		printf("\t%d) Entrez une valeur: ", i+1);
		scanf("%d", &T[i]);
	}
	printf("\nEntrez un entier (X): ");
	scanf("%d", &X);
	
	for (i=0; i<N; i++) {
		if (T[i] == X) {
			XcT++;
			break;
		}
	}
	
	if (XcT == 0) {
		printf("\n\t%d n'appartient pas au tableau.\n", X);
	} else {
		printf("\n\t%d appartient au tableau !\n", X);
	}
system("pause>nul");
system("cls");
fflush(stdin);
XcT=0;
goto start;
return 0;

}
