// Tri et Recherche
#include<stdio.h>
#include<stdlib.h>
main()
{
	int i,j, N, T[100], tmp, echange, VAL;
	printf("Tri et Recherche\n\n");
	printf("Entrez une taille de tableau: ");
	scanf("%d", &N);
	printf("Remplissez le tableau:\n");
	for(i=0; i<N; i++) {
		printf("\t%d) Entrez une valeur: ");
		scanf("%d", &T[i]);
	}
	printf("Apercu du tableau (trie par ordre croissant):\n");
	// Tri
	i = N;
	while (i > 0 && echange == 1) {
		echange = 0;
		for (j=0; j<i; j++) {
			if (T[j] > T[j+1]) {
				tmp = T[j];
				T[j] = T[j+1];
				T[j+1] = tmp;
				echange = 1;
			}	
		}
		i--;
	}
	// Affichage
	for (i=0; i<N; i++) {
		printf("%d) %d\n", i+1, T[i]);
	}
	printf("Recherche d'une valeur:\n");
	printf("Entrez une valeur a rechercher: ");
	scanf("%d", &VAL);
	// Recherche (Recherche dichotomique)
	
}
