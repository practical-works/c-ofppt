/* Exercice 29 *** : Recherche dichotomique
Programme: Créer Tableau d'entiers T[N] --> Remplir T[N] --> Trie par ordre Croissant --> Afficher T[N] --> Lire Entier X --> 
Si X appartient à T --> Afficher sa position P dans T. Utiliser la méthode suivante dite dichotomique :
Comparer X à la valeur au "milieu" (Vm) du tableau T, selon le résultat de comparaison on exécute les actions suivante :
~ (X == Vm) ou (Tableau épuisé) : Arrêter le traitement avec un message correspondant.
~ (X < Vm) : Continuer la recherche dans le demi-tableau à gauche de la position actuelle.
~ (X > Vm) : Continuer la recherche dans le demi-tableau a droite de la position actuelle.
T[N]: |V0|V1|...|Vm|...|V(N-2)|V(N-1)| ; Question: Quel est l'avantage de la recherche dichotomique? */ 
#include<stdio.h>
main()
{
	int i, j, N, x, T[100], X, P, m, debut, fin, trouve;
	start:
	system("color 2f");
	printf("Rechreche dichotomique\n\n");
	
// Création et Remplissage du tableau
	printf("Entrez une taille de tableau : ");
	scanf("%d", &N);
	printf("\nRemplissez le tableau :\n\n");
	for (i=0; i<N; i++) {
		printf("\t[%d]\t", i+1);
		scanf("%d", &T[i]);
	}
	
// Tri du tableau (Ordre croissant)
	for (i=1; i<N; i++) {
		x = T[i];
		j = i;
		while (j>0 && T[j-1]>x) {
			T[j] = T[j-1];
			j--;
		}
		T[j] = x;
	}
	printf("\nTableau trie (Ordre croissant) : \n\n");
	for (i=0; i<N; i++) {
		printf("\t[%d]\t%d\n", i+1,T[i]);
	}
	printf("\n");
	
// Saisi de la valeur à rechercher
	printf("Entrez une valeur de recherche : ");
	scanf("%d", &X);
	printf("\n");
	
// Recherche dichotomique
	debut = 0;
	fin = N-1;
	trouve = 0;
	do {
		m = (debut+fin)/2;
		if (X == T[m]) {
			trouve = 1;
		} else {
			if (X > T[m]) {
				debut = m + 1;
			} else {
				fin = m - 1;
			}
		}
	} while (trouve==0 && debut<=fin);

// Affichage du résultat de recherche
	printf("\n");
	if (trouve == 1) {
		printf("   La valeur %d est trouve au rang %d.\n", X, m+1);
	} else {
		printf("   La valeur %d n'est pas dans le tableau.\n", X);
	}
// ------------------------------------
system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;
}
