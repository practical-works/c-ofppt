/* Exercice 18 : Recherchee, ins�rtion, suppression, et tri des tableaux
1- Ecrire une proc�dure qui recherche un �l�ment X dans un tableau d�entiers.
2- Ecrire une proc�dure qui ins�re un �l�ment X dans une position P d�un tableau d�entiers.
3- Ecrire une proc�dure qui supprime un �l�ment X d�un tableau d�entiers.
4- Ecrire la fonction INSERER qui place un �l�ment X � l'int�rieur d'un tableau qui contient N
�l�ments tri�s par ordre croissant, de fa�on � obtenir un tableau � N+1 �l�ments tri�s par
ordre croissant. La dimension du tableau est incr�ment�e dans la fonction INSERER.
5- Ecrire un programme qui teste les fonctions d�finies plus haut. */
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
	void inserer_tab(int tab[], int dim, int val, int pos) {   // Ins�rtion d'une valeur dans une position du tableau
		int i;
		printf("\nEntrez valeur a inserer: ");
		scanf("%d", &val);
		do { 
			printf("\nEntrez position ou inserer: ");
			scanf("%d", &pos);
		} while (pos<0 || pos>dim);   // Redemander ou cas ou la position entr�e n'existe pas
		for (i=dim+1; i>pos; i--) {   // D�calage pour pr�parer l'ins�rtion
			tab[i] = tab[i-1];
		}
		tab[pos] = val;   // Ins�rtion de la valeur dans la position pr�cis�e
		N++;   // Incr�menter le tableau pour la case suppl�mentaire
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
				dim--; // Dicr�menter localement le tableau pour la case enlev�e
				N = dim; // Dicr�menter globalement la taille du tableau
				//break; On arr�te ici si on d�sire �pargner les occurences de la valeur � supprimer
			}
			
		}
		if (trouve == 0) {
			printf("\nValeur a supprimer introuvable!\n");
		} else {
			printf("\nValeur(s) %d supprimee(s).\n", val);
		}
	}
	
	void INSERER(int tab[], int dim, int val) {   // Ins�rtion d'une valeur et tri du tableau
		int i,j,x;
		dim++; // Incr�menter localement le tableau pour la case suppl�mentaire
		N = dim; // Incr�menter globalement le tableau pour la case suppl�mentaire
		printf("\nEntrez valeur a inserer: ");
		scanf("%d", &val);
		tab[dim-1] = val;
		for (i=1; i<dim; i++) {   // Tri du tableau (Tri par ins�rtion)
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
	printf("����������� Recherchee, insertion, suppression, et tri des tableaux ������������");
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
