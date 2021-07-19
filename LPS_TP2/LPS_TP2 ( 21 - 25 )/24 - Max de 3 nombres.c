/* Exercice 24: Max de 3 nombres
Ecrire le programme qui affiche la valeur la plus grande des trois nombres a, b et c. */
#include<stdio.h>
main()
{
	int i, n, N=3, max;
	
	start:
	printf("Max de 3 nombres\n\n");
	
	for (i=1; i<=N; i++) {
		printf("\tEntrez le nombre (%d): ", i);
		scanf("%d", &n);
		if (i==1) {
			max = n;
		} else {
			if (n >= max) {
				max = n;
			}
		}
	}
	
	printf("\n\tMaximum: %d", max);

system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;
	
}

