/* Exercice 18 : Recherchee, insértion, suppression, et tri des tableaux
1- Ecrire une procédure qui recherche un élément X dans un tableau d’entiers.
2- Ecrire une procédure qui insère un élément X dans une position P d’un tableau d’entiers.
3- Ecrire une procédure qui supprime un élément X d’un tableau d’entiers.
4- Ecrire la fonction INSERER qui place un élément X à l'intérieur d'un tableau qui contient N
éléments triés par ordre croissant, de façon à obtenir un tableau à N+1 éléments triés par
ordre croissant. La dimension du tableau est incrémentée dans la fonction INSERER.
5- Ecrire un programme qui teste les fonctions définies plus haut. */
#include<stdio.h>
int N; // Taille globale du tableau en principal
// --------------------------------------------------------------------
	void lire_tab(int tab[], int dim) {   // Remplissage du tableau
		int i;
		printf("\nTaille tableau: ");
		scanf("%d", &dim);
		N = dim; // Affecter globalement la taille au tableau
		for(i=0; i<dim; i++) {
			printf("\t[%d] Entrez valeur: ", i);
			scanf("%d", &tab[i]);
		}
	}
	void afficher_tab(int tab[], int dim) {   // Affichage du tableau
		int i;
		printf("\nApercu tableau:\n");
		for(i=0; i<dim; i++) {
			printf("\t[%d] %d\n", i,tab[i]);
		}
	}
	
	void rechercher_tab(int tab[], int dim, int val) {   // Recherche d'une valeur dans le tableau
		int i, trouve=0;
		printf("\nEntrez valeur a rechercher: ");
		scanf("%d", &val);
		for(i=0; i<dim; i++) {
			if (val == tab[i]) {
				trouve++;
			}
		}
		if (trouve == 0) {
			printf("\nValeur introuvable!\n");
		} else {
			printf("\nValeur %d trouvee %d fois.\n", val,trouve);
		}
	}
	void inserer_tab(int tab[], int dim, int val, int pos) {   // Insértion d'une valeur dans une position du tableau
		int i;
		printf("\nEntrez valeur a inserer: ");
		scanf("%d", &val);
		do { 
			printf("\nEntrez position ou inserer: ");
			scanf("%d", &pos);
		} while (pos<0 || pos>dim);   // Redemander ou cas ou la position entrée n'existe pas
		for (i=dim+1; i>pos; i--) {   // Décalage pour préparer l'insértion
			tab[i] = tab[i-1];
		}
		tab[pos] = val;   // Insértion de la valeur dans la position précisée
		N++;   // Incrémenter le tableau pour la case supplémentaire
	}
	void supprimer_tab(int tab[], int dim, int val) {   // Suppression d'une valeur du tableau
		int i,j, trouve=0;
		printf("\nEntrez valeur a supprimer: ");
		scanf("%d", &val);
		for(i=0; i<dim; i++) {
			if (val == tab[i]) {
				trouve=1;
				for (j=i; j<dim; j++) {
					tab[j] = tab[j+1];
				}
				dim--; // Dicrémenter localement le tableau pour la case enlevée
				N = dim; // Dicrémenter globalement la taille du tableau
				//break; On arrête ici si on désire épargner les occurences de la valeur à supprimer
			}
			
		}
		if (trouve == 0) {
			printf("\nValeur a supprimer introuvable!\n");
		} else {
			printf("\nValeur(s) %d supprimee(s).\n", val);
		}
	}
	
	void INSERER(int tab[], int dim, int val) {   // Insértion d'une valeur et tri du tableau
		int i,j,x;
		dim++; // Incrémenter localement le tableau pour la case supplémentaire
		N = dim; // Incrémenter globalement le tableau pour la case supplémentaire
		printf("\nEntrez valeur a inserer: ");
		scanf("%d", &val);
		tab[dim-1] = val;
		for (i=1; i<dim; i++) {   // Tri du tableau (Tri par insértion)
			x = tab[i];
    		j = i;
    		while ( j>0 && tab[j-1]>x ) {	
        		tab[j] = tab[j-1];
        		j--;
   		 	}
    		tab[j] = x;
		}
	}
// --------------------------------------------------------------------
main()
{
	system("color 2f");
	int T[256], X, P, choix, new_tab=0;;
	start:
	printf("°°°°°°°°°°° Recherchee, insertion, suppression, et tri des tableaux °°°°°°°°°°°°");
	if (new_tab == 0) {
		lire_tab(T,&N);
		afficher_tab(T,N);
		new_tab = 1;
	} else {
		afficher_tab(T,N);
	}
	menu:
	printf("\nMenu:\n");
	printf("\t1. Rechercher\n");
	printf("\t2. Inserer\n");
	printf("\t3. Supprimer\n");
	printf("\t4. Inserer et Trier\n");
	printf("\t5. Nouveau tableau\n");
	printf("\nEntrez choix: ");
	scanf("%d", &choix);
	switch (choix) {
		case 1: rechercher_tab(T,N,&X); break;
		case 2: inserer_tab(T,N,&X,P); afficher_tab(T,N); break;
		case 3: supprimer_tab(T,N,&X); afficher_tab(T,N); break;
		case 4: INSERER(T,N,&X); afficher_tab(T,N); break;
		case 5: break;
		default: printf("\nChoix invalide!\n"); break;
	}	
// --------------------------------------------------------------------
system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;
}
