/* Exercice 6 : Nombre de chiffres d'un entier
Ecrire la fonction NCHIFFRES du type int qui obtient une valeur entière N (positive ou négative) du type long comme paramètre 
et qui fournit le nombre de chiffres de N comme résultat. Ecrire un petit programme qui teste la fonction NCHIFFRES:
Exemple: Introduire un nombre entier : 6457392 ---> Le nombre 6457392 a 7 chiffres. */
#include<stdio.h>
long NCHIFFRES(long N) {
	int n_chiff=0;
	do {
		N = N/10 ;
		n_chiff++;
	} while (N != 0);
	return n_chiff;
}
main()
{
	long X;
	start:
	printf("Nombre de chiffres d'un entier\n\n");
	printf("Entrez un entier: ");
	scanf("%ld", &X);
	printf("\nNombre de chiffres composants: %ld\n", NCHIFFRES(X)); 
	
system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;
}
