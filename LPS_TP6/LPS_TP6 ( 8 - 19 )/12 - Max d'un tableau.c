/* Exercice 12 : Max d'un tableau
Déterminer le maximum de N éléments d'un tableau TAB d'entiers de deux façons différentes:
a) la fonction MAX1 retourne la valeur maximale
b) la fonction MAX2 retourne l'indice de l'élément maximal
Ecrire un programme pour tester les trois fonctions.             */
#include<stdio.h>
int taille;
// la fonction MAX1 retourne la valeur maximale
int MAX1 (int TAB[], int N) {
	int i, max;
	max = TAB[0];
	for (i=1; i<N; i++) {
		if (TAB[i] > max) {
			max = TAB[i];
		}
	}
	return max;
}
// la fonction MAX2 retourne l'indice de l'élément maximal
int MAX2 (int TAB[], int N) {
	int i, max, max_id;
	max = TAB[0]; max_id = 0;
	for (i=1; i<N; i++) {
		if (TAB[i] > max) {
			max = TAB[i]; max_id = i;
		}
	}
	return max_id;
}
	
// Remlissage du tableau
void lire_tab (int TAB[], int N, int NMAX) {
	int i;
	do {
		printf("\tTaille du tableau (max.%d): ", NMAX);
		scanf("%d", &N);
	} while(N > NMAX);
	taille = N;
	printf("\n");
	for (i=0; i<N; i++) {
		printf("\tElement[%d]: ", i);
		scanf("%d", &TAB[i]);	
	}
}
// Principal
main()
{
	system("color 70");
	int T[100];
	start:
	printf("Max d'un tableau\n\n");
	lire_tab(T,&taille,100);
	printf("\n  La max est: %d.\n  L'indice du max est: %d.", MAX1(T,taille), MAX2(T,taille));

system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;
}
