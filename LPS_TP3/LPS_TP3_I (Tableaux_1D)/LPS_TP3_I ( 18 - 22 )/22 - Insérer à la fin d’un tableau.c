/* Exercice 22 : ins�rer � la fin d�un tableau
Programme qui lit la taille N d'un tableau T d'entiers, le remplit par des valeurs entr�es au clavier.
Ins�rer une valeur X donn�e au clavier dans la derni�re case du tableau T de mani�re � obtenir un tableau de N+1 valeurs.
Afficher le tableau r�sultant. */
#include<stdio.h>
main()
{
	int i,N,T[100],X;
	start:
	printf("Inserer a la fin d'un tableau\n\n");
	printf("Entrez une taille de tableau: ");
	scanf("%d", &N);
	printf("\n");
	for (i=0; i<N; i++) {
		printf("%d) Entrez une valeur: ", i+1);
		scanf("%d", &T[i]);
	}
	printf("\nEntrez une valeur (X) a inserer: ");
	scanf("%d", &X);
	printf("\n");
	for (i=0; i<N+1; i++) {
		if (i == N) {
			T[i] = X;
		}
		printf("%d) %d\n", i+1,T[i]);
	}
system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;

}
