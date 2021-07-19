/* Exercice 26 ** : Insérer une valeur dans un tableau trié
Programme qui lit un tableau T de N entiers, le remplit au clavier, le trie par ordre croissant, et l'affiche.
Insérer une valeur VAL donnée au clavier dans le tableau T de manière à obtenir un tableau de N+1 valeurs triées. 
Exemple: T[N]: |1|3|6|8|9|11|12| -----> (X=5) -----> T[N+1]: |1|3|5|6|8|9|11|12| */
#include<stdio.h>
main()
{
	int i, j, N, x, T[100], VAL;
	start:
	system("color 1f");
	printf("Inserer une valeur dans un tableau trie\n\n");
	
// Création et Remplissage du tableau
	printf("Entrez une taille de tableau: ");
	scanf("%d", &N);
	printf("\nRemplissez le tableau:\n\n");
	for (j=0; j<N; j++) {
		printf("\t%d) Entrez une valeur: ", j+1);
		scanf("%d", &T[j]);
	}
	
// Tri du tableau (en utilisant le tri par insertion) et Affichage du tableau trié
    for (i=1; i<N; i++) {
    	x = T[i];
        j = i;
        while ( j>0 && T[j-1]>x ) {	
            T[j] = T[j-1];
            j--;
        }
        T[j] = x;
	}
    printf("\nTableau trie (ordre croissant):\n\n");
	for (j=0; j<N; j++) {
		printf("\t%d) %d\n", j+1, T[j]);
	}

// Demander une valeur (VAL) à insérer dans le tableau trié
	printf("\nEntrez une valeur a inserer: ");
	scanf("%d", &VAL);

// Insértion de la valeur (VAL) dans le tableau trié
	for (i=0; i<N; i++) {
		// Déterminer la position d'insértion par comparaison
		if (VAL <= T[i]) {
			// Décaler les cases pour préparer l'insértion
			for (j=N; j>i; j--) {
				T[j] = T[j-1];	
			}
			T[i] = VAL; // Insértion de la valeur VAL dans la position correspondante
			break; // La tâche étant accomplie, pas besoin de continuer la boucle
		} else if (i == N-1) {
			T[N] = VAL;
		}
	}
	
// Affichage du tableau résultant
    printf("\nTableau resultant:\n\n");
	for (j=0; j<N+1; j++) {
		printf("\t%d) %d\n", j+1, T[j]);
	}
// ---------------------------------------------------------
system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;

}
