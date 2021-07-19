/* Exercice 13 : Ecrire une procédure qui fusionne deux tableaux d’entiers.
Exercice 14 : Ecrire une procédure qui fusionne trois tableaux d’entiers. */
#include<stdio.h>
int N[3], id=0;
// ----------------------------------------------
	void lire_afficher_tab(int tab[], int dim) {   // Remplissage du tableau
		int i;
		printf("\nTaille tableau: ");
		scanf("%d", &dim);
		N[id] = dim; id++;   // Sauvegarder les tailles des tableaux
		for(i=0; i<dim; i++) {
			printf("[%d] Entrez valeur: ", i);
			scanf("%d", &tab[i]);
		}
		printf("\n\tApercu tableau:\n");
		for(i=0; i<dim; i++) {
			printf("\t[%d] %d\n", i,tab[i]);
		}
	}
	void fus_afficher_tab(int tab1[], int tab2[], int dim1, int dim2, int fus[]) {   // Fusionner deux tableaux
		int i;
		for (i=0; i<dim1; i++) {
			fus[i] = tab1[i];
		}
		for (i=dim1; i<dim2; i++) {
			fus[i] = tab2[i];
		}
		printf("\n\t\tApercu tableau fusion:\n");
		for(i=0; i<dimf; i++) {
			printf("\t\t[%d] %d\n", i,fus[i]);
		}
	}
// ----------------------------------------------
main()
{
	system("color 70");
	int T1[100], T2[100], T3[100], Tfus[100];
	start:
	printf("Fusion de tableaux\n");
	lire_afficher_tab(T1, N[0]);
	lire_afficher_tab(T2, N[1]);
//	lire_afficher_tab(T3, N[2]);
	fus_afficher_tab(T1,T2, N[0],N[1], Tfus);
// ----------------------------------------------
system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;
}
