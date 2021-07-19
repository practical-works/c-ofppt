/* Exercice 17: Factorielle
Ecrire un programme qui calcule la factorielle d’un nombre entier positif n. 
Rappelons que si n est un entier positif, sa factorielle notée n! est définie par : n! = 1 x 2 x 3 x ... x (n-1) x n
Exemple : Calcul de la factorielle de 5 : 5! = 1 x 2 x 3 x 4 x 5 = 120 */
#include<stdio.h>
main()
{
	int i, n, nf=1;
	
	start:
	printf("Factorielle d'un entier positif\n\n");
	printf("Entrez un entier positif: ");
	scanf("%d", &n);
	if (n<0) {
		printf("\a\n\tVeuillez entrer une valeure positive !");
		system("pause>nul");
		system("cls");
		goto start;
	} else {
		
		for (i=n; i>0; i--) {
			nf = nf * i ;
		}
	}
	printf("\n\t%d! = %d", n,nf);

system("pause>nul");
system("cls");
nf=1;
goto start;
return 0;

}
