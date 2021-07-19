/* Exercice 22: Division euclidienne
Division euclidienne : Soient a un entier positif et b un entier strictement positif. Effectuer la division euclidienne 
(division entiere) de a par b, c'est determiner l'unique couple (q, r) de deux entiers (appeles quotient et reste) 
tel que a = b * q + r avec 0 <= r < b.
Ecrire un programme qui, etant donnes deux entiers a>=0 et b>0, calcule le quotient et le reste de la division entiere 
de a par b par soustractions successives.
Exemple: a=7 b=2
                   i=1 : 7-2=5
                   i=2 : 5-2=3
                   i=3 : 3-2=1
        1<2 ---> q=3 et r=1                           */
#include<stdio.h>
main()
{
	int a,b,c, Q=0,R=0; start:
	printf("같같같같같같같같같같같같같같같Division Euclidienne같같같같같같같같같같같같같같같\n");
	printf("  Entrez le premier nombre (a): "); scanf("%d", &a);
	printf("  Entrez le deuxieme nombre (b): "); scanf("%d", &b);
	
	if (a>=0 && b>0) {
			if (a>b && a!=0) {
	c = a ;
	printf("\n\t--------------------------------------------------------");
	printf("\n\t Algorithme:\n");
	printf("\t--------------------------------------------------------\n");
	do {
		Q++;
		printf("\t\t%d - %d = ", c,b);
		c = c - b;
		printf("%d\t     Q = %d", c,Q);
		R = c;
		printf("     R = %d\n", R);
	} while (c>=b);
			} else if (a<b) {
				Q = 0;
				R = a;
			} else {
				Q = R = 0;
			}
	printf("\t--------------------------------------------------------\n");
	printf("\n  Resultat de la division entiere de %d par %d :\n", a,b);
	printf("\n\tQuotient (Q): %d\n\tReste (R): %d\n\n", Q,R);
	} else {
		printf("\n\t Les donnes doivent verifier ceci: a >= 0 et b > 0");
	}
	
system("pause>nul");
system("cls");
fflush(stdin);
Q=0;
goto start;
return 0;
}
