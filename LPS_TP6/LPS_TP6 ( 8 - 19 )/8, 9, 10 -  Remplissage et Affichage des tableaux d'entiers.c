/* Exercice 8 : Remplir un tableau d'entiers
Ecrire une fonction LIRE_TAB, à deux paramètres TAB et N, qui permet de remplir un tableau d’entiers. 
Exercice 9 : La fonction LIRE_TAB à trois paramètres TAB, N et NMAX lit la dimension N et les
composantes d'un tableau TAB du type int. La dimension N doit être inférieure à NMAX.
Implémenter la fonction LIRE_TAB en choisissant bien le type des paramètres.
Exercice 10 : Afficher un tableau d'entiers
Ecrire la fonction ECRIRE_TAB à deux paramètres TAB et N qui affiche N composantes du
tableau TAB du type int.*/
#include<stdio.h>
// Fonction V1: Tableau à deux paramètres
int m;
void LIRE_TAB_V1 (int TAB[], int N) {
	int i;
	for (i=0; i<N; i++) {
		printf("\t[%d] Entrez une valeur: ", i);
		scanf("%d", &TAB[i]);
	}
}
// Fonction V2: Tableau à trois paramètres
void LIRE_TAB_V2 (int TAB[], int N, int NMAX) {
	int i;
	printf("\nTableau a trois parametres :\n");
	do {
		printf("\tDimension du tableau (max.%d): ", NMAX);
		scanf("%d", &N);
	} while(N > NMAX);
	m = N;
	for (i=0; i<N; i++) {
		printf("\tElement[%d]: ", i);
		scanf("%d", &TAB[i]);	
	}
}
// Affichage du tableau
void ECRIRE_TAB (int TAB[], int N) {
	int i;
	for (i=0; i<N; i++) {
		printf("\t%d) %d\n", i+1,TAB[i]);
	}
}
main()
{
	system("color 70");
	int n, T[100], U[100];
	start:
	printf("Remplissage et Affichage des tableaux d'entiers\n\n");
	
	// Remplissage Version 1
	printf("Tableau a deux parametres :\n");
	printf("\tEntrez une taille de tableau: ");
	scanf("%d", &n);
	LIRE_TAB_V1(T,n);
	
	// Remplissage Verion 2
	LIRE_TAB_V2(U, &m, 10);
	
	// Affichage
	printf("\nTableau V1:\n");
	ECRIRE_TAB(T,n);
	printf("\nTableau V2:\n");
	ECRIRE_TAB(U,m);
	
system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;
}
