/* Exercice 25: Nombre d’occurrences du maximum et minimum
1- Programme pour permettre la saisie de N entiers afin de calculer et afficher :
· Le maximum · Le nombre d’occurrences du maximum · Le minimum · Le nombre d’occurrences du minimum · La moyenne
2- Idem à 1°, mais le nombre d’entiers saisis est inconnu. On demandera de taper 'o' pour saisir ou 'n' pour arrêter. */
//------------------------
// Partie 2 :
//------------------------
#include<stdio.h>
main()
{
	int i=0, x, max, min, nmax=1, nmin=1;
	char c;
	
	start:
	printf(" Nombre d'occurrences du maximum et minimum °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
	printf("\n");
	
	do {
		i++;
		printf("\t%d) Entrez un entier: ", i);
		scanf("%d", &x);
		if (i == 1) {
			max = x;
			min = x;
		} else {
			if (x >= max) {
				if (x == max) {
					nmax++;
				} else {
					nmax=1;
				}
				max = x;
			}
			if (x <= min) {
				if (x == min) {
					nmin++;
				} else {
					nmin=1;
				}
				min = x;
			}
		}
		fflush(stdin);
		printf("\tEntrez un autre entier (o/n) ? ");
		scanf("%c", &c);
	} while (c=='o');
	
	printf("\n\tMaximum = %d \tNombre d'occurrences du maximum = %d\n", max,nmax);
	printf("\tminimum = %d \tNombre d'occurrences du minimum = %d\n", min,nmin);

system("pause>nul");
system("cls");
fflush(stdin);
nmax=1, nmin=1;
goto start;
return 0;

}
