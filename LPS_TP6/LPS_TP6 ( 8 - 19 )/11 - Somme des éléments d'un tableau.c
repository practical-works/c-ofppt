/* Exercice 11 : Somme des éléments d'un tableau
Fonction SOMME_TAB de paramètres (TAB,N), qui calcule la somme des N éléments d'un tableau TAB (int).  
la somme est retournée comme résultat du type long.
Programme qui lit un tableau A d'une dimension <= 100 et affiche le tableau et la somme de ses éléments*/
#include<stdio.h>
// Somme du tableau
int Na;
long SOMME_TAB (long TAB[], int N) {
	int i, S=0;
	for (i=0; i<N; i++) {
		S = S + TAB[i];
	}
	return S;
}
// Affichage du tableau
void AFFICHER_TAB (int TAB[], int N) {
	int i;
	for (i=0; i<N; i++) {
		printf("\t%d) %d\n", i+1,TAB[i]);
	}
}
// Remlissage
void LIRE_TAB (int TAB[], int N, int NMAX) {
	int i;
	do {
		printf("\tTaille du tableau (max.%d): ", NMAX);
		scanf("%d", &N);
	} while(N > NMAX);
	Na = N;
	printf("\n");
	for (i=0; i<N; i++) {
		printf("\tElement[%d]: ", i);
		scanf("%d", &TAB[i]);	
	}
}
main()
{
	system("color 70");
	long A[256];
	start:
	printf("Somme des elements d'un tableau\n\n");
	LIRE_TAB(A,&Na,100);
	printf("\n");
	AFFICHER_TAB(A,Na);
	printf("\n");
	printf("\tSomme: %d", SOMME_TAB(A,Na));

system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;
}
