/* Exercice 10 : un tableau des paires et un tableau des impaires
Ecrire un programme qui lit la taille N d'un tableau T du type entier, remplit le tableau par des valeurs entrées au clavier 
et affiche le tableau. Créer ensuite un tableau T1 contenant les entiers impairs de T et un tableau T2 contenant les entiers 
paires de T, et afficher les deux tableaux T1 et T2. */
#include<stdio.h>
main()
{
	int T[100], T1[100], T2[100], i, N;
	start:
	printf("Tableau des paires et tableau des impaires\n\n");
	printf("Entrez une taille de tableau: ");
	scanf("%d", &N);
	printf("\n");
	
	for (i=0; i<N; i++) {
		printf("\t%d) Entrez une valeur: ", i+1);
		scanf("%d", &T[i]);
	}
	printf("\nTableau des impaires:\n\n");
	for (i=0; i<N; i++) {
		if (T[i]%2 != 0) {
			T1[i] = T[i];
			printf("\t%d\n", T1[i]);
		}
		
	}
	printf("\nTableau des paires:\n\n");
	for (i=0; i<N; i++) {
		if (T[i]%2 == 0) {
			T2[i] = T[i];
			printf("\t%d\n", T2[i]);
		}
	}

system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;

}
