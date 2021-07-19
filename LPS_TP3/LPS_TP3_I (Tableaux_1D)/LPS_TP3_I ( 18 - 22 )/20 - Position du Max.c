/* Exercice 20 : position du max
Programme permettant de remplir un tableau.
Afficher la plus grande valeur (Max) en précisant quelle position elle occupe dans le tableau. 
Exemple: N=8 : |4|8|7|9|1|5|4|6| ; Max = 9, la position du max est 4 (i=3) */
#include<stdio.h>
main()
{
	int i, N, T[100], max, pos;
	start:
	printf("Position du max\n\n");
	printf("Entrez un nombre de valeurs: ");
	scanf("%d", &N);
	printf("\n");
	for (i=0; i<N; i++) {
		printf("\t%d) Entrez une valeur: ", i+1);
		scanf("%d", &T[i]);
		if (i == 0) {
			max = T[i];
			pos = i+1;
		} else {
			if (T[i] >= max) {
				max = T[i];
				pos = i+1;
			}
		}
	}
	printf("\n\tMax = %d\n\tPosition : %d\n", max,pos);
	
system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;
	
}
