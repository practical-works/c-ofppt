/* Exercice 18: Somme des i
Ecrire un programme qui demande un nombre n, calcule et affiche la somme :
(i=1)SIGMA(n) { i^3 } =  1^3 + 2^3 + 3^3 + ... + n^3 
Exemple:   Donnée : n=4
           Résultat: 1^3 + 2^3 + 3^3 + 4^3 = 1 + 8 + 27 + 64 = 100 */
#include<stdio.h>
main()
{
	int i, n, S=0;
	
	start:
	printf("Somme des i °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
	printf("________________________________________________________________________________\n");
	printf("Entrez un nombre: ");
	scanf("%d", &n);
	printf("\nLa somme des puissances i^3 de i=1 a n=%d est:\n", n);
	printf("________________________________________________________________________________\n\n");
	for (i=1; i<=n; i++) {
		S = S + i*i*i;
		printf("%d^3", i);
		if (i != n) {
			printf(" + ");
		} else {
			printf("    =    ");
		}
		
	}
	for (i=1; i<=n; i++) {
		printf("%d", i*i*i);
		if (i != n) {
			printf(" + ");
		} else {
			printf("   =   ");
		}
		
	}
	printf("%d", S);

system("pause>nul");
system("cls");
goto start;
return 0;

}
