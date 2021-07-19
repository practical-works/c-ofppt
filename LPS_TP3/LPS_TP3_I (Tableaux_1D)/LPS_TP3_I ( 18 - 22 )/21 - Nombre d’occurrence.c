/* Exercice 21 : Nombre d’occurrence
Programme qui lit la taille N d'un tableau T d'entiers, le remplit par des valeurs entrées au clavier et l'affiche.
Calculer ensuite le nombre d’occurrence de l'entier X entré au clavier et afficher la position (le rang) de sa première
occurrence dans le tableau donné. */
#include<stdio.h>
main() 
{
	int i, N, T[100], X, first=0, Occur=0, Rang=0;
	start:
	printf("Nombre d'occurrence\n\n");
	printf("Entrez un nombre de valeurs: ");
	scanf("%d", &N);
	printf("\n");
	for (i=0; i<N; i++) {
		printf("%d) Entrez une valeur: ", i+1);
		scanf("%d", &T[i]);
	}
	printf("\nEntrez un nombre (X): ");
	scanf("%d", &X);
	for (i=0; i<N; i++) {
		if (T[i] == X) {
			Occur++;
			if (first == 0) {
				Rang = i+1;
				first++;
			}
			
			
		}
	}
	
	printf("\n\tNombre d'occurrence: %d\n\tRang: %d\n", Occur,Rang);

system("pause>nul");
system("cls");
fflush(stdin);
first=0, Occur=0, Rang=0;
goto start;
return 0;

}
