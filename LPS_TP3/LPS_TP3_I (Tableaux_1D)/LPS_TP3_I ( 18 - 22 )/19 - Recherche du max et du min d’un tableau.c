/* Exercice 19 : recherche du max et du min d’un tableau
Programme qui lit la taille N d'un tableau T d'entiers, le remplit par des valeurs entrées au clavier et l'affiche.
Afficher ensuite le minimum et le maximum des éléments du tableau. */
#include<stdio.h>
main()
{
	int i, N, T[100], max, min;
	start:
	printf("Recherche du max et du min d'un tableau\n\n");
	printf("Entrez une taille de tableau: ");
	scanf("%d", &N);
	printf("\n");
	for (i=0; i<N; i++) {
		printf("%d) Entrez une valeur: ", i+1);
		scanf("%d", &T[i]);
		if (i == 0) {
			max = T[i];
			min = T[i];
		} else {
			if (T[i] >= max) {
				max = T[i];
			}
			if (T[i] <= min) {
				min = T[i];
			}
		}
	}
	printf("\n\tMaximum: %d\n\tMinimum: %d", max,min);
system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;

}
