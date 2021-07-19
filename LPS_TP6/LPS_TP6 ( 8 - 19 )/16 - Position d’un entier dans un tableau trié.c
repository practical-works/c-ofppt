/* Exercice 16 : Ecrire une fonction qui retourne la première position d’un entier dans un tableau trié. */
#include<stdio.h>
int N_T;
// --------------------------------------------------------------------
void lire_tab(int tab[], int N) {   // Remplissage du tableau
	int i;
	printf("\nTaille tableau: ");
	scanf("%d", &N);
	N_T = N;
	for(i=0; i<N; i++) {
		printf("\t[%d] Entrez une valeur: ", i);
		scanf("%d", &tab[i]);
	}
}
void afficher_tab(int tab[], int N) {   // Affichage du tableau
	int i;
	for(i=0; i<N; i++) {
		printf("\t[%d] %d\n", i,tab[i]);
	}
}
void trier_tab(int tab[], int N) {     // Tri du tableau (Tri par insértion)
    int i,j,x;
	for (i=1; i<N; i++) {
		x = tab[i];
    	j = i;
    	while ( j>0 && tab[j-1]>x ) {	
        	tab[j] = tab[j-1];
        	j--;
   		 }
    	tab[j] = x;
	}
}
int pos_tab_trie(int tab[], int N, int val) {   // Recherche de la position de la valeur concernée
	int i, P = -1;  // Valeur quand il'y a aucune position à récupérer (valeur introuvable)
	for (i=0; i<N; i++) {
		if (tab[i] == val) {
			P = i;
			break;
		}
	}
	return P;
}
// --------------------------------------------------------------------
main()   // Principal
{
	system("color 70");
	int T[256], X, pos;
	start:
	printf("Premiere position d'un entier dans un tableau trie\n");
	lire_tab(T, N_T);
	trier_tab(T, N_T);
	printf("\nApercu du tableau trie (ordre croissant):\n");
	afficher_tab(T, N_T);
	printf("\nEntrez une valeur a rechercher: ");
	scanf("%d", &X);
	pos = pos_tab_trie(T, N_T, X);
	if (pos == -1) {
		printf("\nValeur introuvable!\n");
	} else {
		printf("\nValeur %d trouvee en premier dans la position %d.\n", X,pos);
	}

// --------------------------------------------------------------------
system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;
}
