/* Exercice 25 * : Tri d’un tableau
Programme qui lit la taille N d'un tableau T d'entiers, le remplit par des valeurs entrées au clavier et l'affiche.
Trier ensuite les éléments du tableau T par ordre croissant et afficher le tableau résultant.
Remarque : chercher et essayer différents algorithmes (les algorithmes de tri). */
#include<stdio.h>
main()
{
	int i, j, N, T[100], tmp, echange, check;
	start:
	system("color 5f");
	printf("Tri d'une tableau\n\n");
// Création et remplissage de tableau
	printf("Entrez une taille de tableau: ");
	scanf("%d", &N);
	printf("\nRemplissez le tableau:\n\n");
	for (i=0; i<N; i++) {
		printf("\t%d) Entrez une valeur: ", i+1);
		scanf("%d", &T[i]);
	}
	printf("\n");
// Affichage du tableau
	printf("\nTableau:\n\n");
	for (i=0; i<N; i++) {
		printf("\t%d) %d\n", i+1,T[i]);
	}
	
// Algorithme de tri (tri à bulle optimisé)
	check = 0;
	check:
	i = N, echange = 1;
	while (i>0 && echange==1) {
		echange = 0;
		for (j=0; j<i; j++) {
			if (T[j] > T[j+1]) {
				tmp = T[j];
				T[j] = T[j+1];
				T[j+1] = tmp;
				echange = 1;
			}
		}
		j--;
	}
	if (check==0) {
		check = 1;
		goto check;
	}
	
// Affichage du tableau trié
	printf("\nTableau triee (ordre croissant):\n\n");
	for (i=0; i<N; i++) {
		printf("\t%d) %d\n", i+1,T[i]);
	}

// ----------------------------------
system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;
}

