/* Exercice 4 : le nombre des valeurs positives et négatives
Ecrire un programme qui lit la taille N d'un tableau T du type entier, remplit le tableau par des valeurs entrées au clavier.
Calculer et afficher ensuite le nombre de valeurs négatives et le nombre de valeurs positives. */
#include<stdio.h>
main()
{
	int T[100], i, N, pos=0, neg=0;
	start:
	printf("Nombre des valeurs positives et negatives\n\n");
	printf("Entrez un nombre de valeurs: ");
	scanf("%d", &N);
	printf("\n");
	for (i=0; i<N; i++) {
		printf("\t%d) Entrez une valeur: ", i+1);
		scanf("%d", &T[i]);
		if (T[i] > 0) {
			pos++;
		} else if (T[i] < 0) {
			neg++;
		}
	}
	
	printf("\nNombre des valeurs positives: %d\nNombre des valeurs negatives: %d\n", pos,neg);

system("pause>nul");
system("cls");
fflush(stdin);
pos=0; neg=0;
goto start;
return 0;
}

