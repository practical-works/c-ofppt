/* Exercice 23 : ins�rer dans une position p
Programme qui lit la taille N d'un tableau T d'entiers, le remplit par des valeurs entr�es au clavier.
Ins�rer un X donn� au clavier dans une position P (entr� au clavier) du tableau T de mani�re � obtenir un tableau de N+1 valeurs.
Afficher le tableau r�sultant. */
#include<stdio.h>
main()
{
	int i,N,T[100],X,P;
	start:
	system("color 1f");
	printf("Inserer dans une position P\n\n");
	printf("Entrez une taille de tableau: ");
	scanf("%d", &N);
	printf("\nRemplissez le tableau:\n");
	for (i=0; i<N; i++) {
		printf("\t%d) Entrez une valeur: ", i+1);
		scanf("%d", &T[i]);
	}
	
	printf("\nEntrez une valeur (X) a inserer: ");
	scanf("%d", &X);
	
// Demander une position valide (Existante dans le tableau cr��)
	do {
		printf("Entrez une position (P): ");
		scanf("%d", &P);
	} while (P<1 || P>N);
	
// Ins�rtion de X dans la position P	
	for (i=N; i>P-1; i--) {
		T[i] = T[i-1];
	}
	T[P-1] = X;
// -----------------------------------
	
	printf("\nTableau resultant:\n");
	for (i=0; i<=N; i++) {
		printf("\t%d) %d\n", i+1,T[i]);
	}

system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;
}
