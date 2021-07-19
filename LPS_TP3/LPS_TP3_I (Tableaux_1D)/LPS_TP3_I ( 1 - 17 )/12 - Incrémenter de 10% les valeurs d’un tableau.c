/* Exercice 12 : incrémenter de 10% les valeurs d’un tableau
Ecrire un programme qui lit la taille N d'un tableau T du type entier, remplit le tableau par des valeurs entrées au clavier 
et affiche le tableau. Incrémenter ensuite de 10% les éléments supérieurs à 100 et afficher le tableau résultant. */
#include<stdio.h>
main()
{
	int i, j=0, N, T[100], I[100]; 
	start:
	printf("Incrementer de 10%% les valeurs d'un tableau\n\n");
	printf("Entrez un nombre de valeurs: ");
	scanf("%d", &N);
	printf("\n");
	
	for (i=0; i<N; i++) {
		printf("%d) Entrez une valeur: ", i+1);
		scanf("%d", &T[i]);
		if (T[i] > 100) {
			I[j] = T[i] + 0.1*T[i];
			j++;
		}
		
	}
	printf("\nTableau des valeurs incrementees:\n\n");
	for (i=0; i<j; i++) {
		printf("\t%d\n", I[i]);
	}

system("pause>nul");
system("cls");
fflush(stdin);
j=0;
goto start;
return 0;

}
