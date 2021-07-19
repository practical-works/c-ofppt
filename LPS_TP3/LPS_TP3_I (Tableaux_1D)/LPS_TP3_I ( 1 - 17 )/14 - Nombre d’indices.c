/* Exercice 14 : le nombre d’indices
Ecrire un programme qui lit la taille N de deux tableaux T1 et T2 du type entier, remplit les
tableaux par des valeurs entrées au clavier, puis créer et afficher le nombre d’indices i tels que T1(i) = T2(i). 
Exemple :
Tableau 1 : 4 -8 7 -9 1 5 0 6
Tableau 2 : 4  7 7  5 6 5 0 0
Le nombre d’indice tel que T1(i)=T2(i) est 4. */
#include<stdio.h>
main()
{
	int i, N, T1[100], T2[100], I=0;
	start:
	printf("Nombre d'indices\n\n");
	printf("Entrez un nombre de valeurs: ");
	scanf("%d", &N);
	printf("\nTableau 1\n\n");
	for (i=0; i<N; i++) {
		printf("\t%d) Entrez une valeur: ", i+1);
		scanf("%d", &T1[i]);
	}
	printf("\nTableau 2\n\n");
	for (i=0; i<N; i++) {
		printf("\t%d) Entrez une valeur: ", i+1);
		scanf("%d", &T2[i]);
	}
	
	for (i=0; i<N; i++) {
		if (T1[i] == T2[i]) {
			I++;
		}
	}
	printf("\nLe nombre d'indices avec les meme valeurs est: %d", I);

system("pause>nul");
system("cls");
fflush(stdin);
I=0;
goto start;
return 0;

}
