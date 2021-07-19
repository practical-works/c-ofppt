/* Exercice 32: Triangle des multiples de 5
Ecrire un programme qui affiche un triangle rempli de nombres entiers multiple de 5, 
s'étendant sur un nombre de lignes entré au clavier.*/
#include<stdio.h>
main() 
{
	int i, j, N, M, X=5;
		
	start:
	printf("Triangle de multiples de 5\n\n");
	printf("Entrez la hauteur du triangle: ");
	scanf("%d", &N);
	M = N;
//-------------------------------------------------------------------------------------------------------------------------	
// Ce ligne est juste pour garder la forme d'un triangle en cas ou les multiples 
// sont composé de plus de deux chiffres ( à désactiver si désiré :3 )           
			if (N <= 5) {
            	X = 5;
			} else if (N < 19) {
				X = 95;
			} else {
				X = 995;
			}
//-------------------------------------------------------------------------------------------------------------------------	
	printf("\n");
	
	for (i=1; i<=N; i++) {
		for (j=1; j<=M; j++) {		 
			X = X + 5;
			printf(" %d", X);
		}
		M--;
		printf("\n");
	}

system("pause>nul");
system("cls");
fflush(stdin);
X=5;
goto start;
return 0;
}
