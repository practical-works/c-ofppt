/* Exercice 13 : copier les valeurs positives
Ecrire un programme qui lit la taille N d'un tableau T1 du type entier, remplit le tableau par
des valeurs entrées au clavier et affiche le tableau.
Copier dans un tableau T2 les valeurs positives de T1 en complétant éventuellement par zéro. 
Exemple :
Tableau 1 : 4 -8 7 -9 1 5 -4 6
Tableau 2 : 4 7 1 5 6 0 0 0     */
#include<stdio.h>
main()
{
	int i, j=0, N, T1[100], T2[100];
	start:
	printf("Copier les valeurs positives\n\n");
	printf("Entrez un nombre de valeurs: ");
	scanf("%d", &N);
	printf("\n");
	
	for (i=0; i<N; i++) {
		printf("\t%d) Entrez une valeur: ", i+1);
		scanf("%d", &T1[i]);
		if (T1[i] > 0) {
			T2[j] = T1[i];
			j++;
		}
	} 
	printf("\nTableau des valeurs positives:\n\n");
	for (i=0; i<N; i++) {
		if (i < j) {
			printf("\t%d) %d\n", i+1,T2[i]);
		} else {
			printf("\t%d) 0\n", i+1);
		}
		
	}

system("pause>nul");
system("cls");
fflush(stdin);
j=0;
goto start;
return 0;

}
