/* Exercice 16 : le schtroumpf d’un tableau
Écrire un programme qui calcule le schtroumpf des deux tableaux T1 de taille N1 et T2 de taille N2 remplis par l’utilisateur. 
Pour calculer le schtroumpf, il faut multiplier chaque élément du tableau 1 par chaque élément du tableau 2, 
et additionner le tout. 
Exemple: Tableau 1 : |4|8|7|12|
         Tableau 2 : |3|6| 
Le Schtroumpf sera : (3*4 + 3*8 + 3*7 + 3*12) + (6*4 + 6*8 + 6*7 + 6*12) = 279	 */
#include<stdio.h>
main()
{
	int i,j, N1,N2, T1[100],T2[100], S=0;
	start:
	printf("Schtroumpf d'un tableau\n\n");
	printf("Entrez une taille du tableau 1: ");
	scanf("%d", &N1);
	printf("Entrez une taille du tableau 2: ");
	scanf("%d", &N2);
	
	printf("\nTableau 1 :\n\n");
	for (i=0; i<N1; i++) {
		printf("\t%d) Entrez une valeur: ", i+1);
		scanf("%d", &T1[i]);
	}
	printf("\nTableau 2 :\n\n");
	for (i=0; i<N2; i++) {
		printf("\t%d) Entrez une valeur: ", i+1);
		scanf("%d", &T2[i]);
	}
	printf("\nCalcul du Schtroumpf :\n\n\t");
	for (i=0; i<N1; i++) {
		for (j=0; j<N2; j++) {
			S = S + T1[i]*T2[j];
			printf("%d*%d", T1[i],T2[j]);
			if (i != N1-1 || j != N2-1) {
				printf(" + ");
			} else {
				printf(" = ");
			}
		}	
	}
	printf("%d\n", S);

system("pause>nul");
system("cls");
fflush(stdin);
S=0;
goto start;
return 0;

}
