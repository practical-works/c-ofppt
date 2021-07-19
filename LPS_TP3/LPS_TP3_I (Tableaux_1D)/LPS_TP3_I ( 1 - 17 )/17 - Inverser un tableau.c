/* Exercice 17 : inverser un tableau
Ecrire un programme qui lit la taille N d'un tableau T d'entiers, le remplit par des valeurs entrees au clavier et l'affiche.
Ranger ensuite les elements du tableau T dans l'ordre inverse :
		1) En utilisant un tableau d'aide.		2) Sans utiliser un tableau d'aide.
Afficher le tableau resultant. */
#include<stdio.h>
main()
{
	int i,j, N, T[100], H[100];
	start:
	printf("Inverser un tableau\n\n");
	printf("Entrez une taille de tableau: ");
	scanf("%d", &N);
	printf("\n");
	for (i=0; i<N; i++) {
		printf("\t%d) Entrez une valeur: ", i+1);
		scanf("%d", &T[i]);
	}
//-------------------------------------------------------------------------------------	
	printf("\nTableau :\n\n");
	for (i=0; i<N; i++) {
		printf("\t%d) %d\n", i+1,T[i]);
	}
//-------------------------------------------------------------------------------------	
	printf("\n1) Inverser en utilisant un tableau d'aide :\n\n");
	j=0;
	for (i=N-1; i>=0; i--) {
			H[j] = T[i];
			j++;
	}
	for (i=0; i<N; i++) {
		printf("\t%d) %d\n", i+1,H[i]);
	}
//-------------------------------------------------------------------------------------	
	printf("\n2) Inverser sans utiliser un tableau d'aide :\n\n");
	for (i=N-1; i>=0; i--) {
		printf("\t%d) %d\n", N-i,T[i]);
	}
//-------------------------------------------------------------------------------------	
system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;
}
