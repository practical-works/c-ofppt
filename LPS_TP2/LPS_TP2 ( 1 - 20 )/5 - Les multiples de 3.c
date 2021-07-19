/* Exercice 5: Les multiples de 3
Ecrire un programme qui affiche les multiples de 3 se trouvant entre 3 et N */
#include<stdio.h>
main()
{
	int N, i;
	
	start:
	printf("\n\t\t\t{ Les multiples de 3 }\n");
	printf("\n Entrez une valeur maximale: ");
	scanf("%d", &N);
	printf("\n");
	for (i=3 ; i<=N ; i++) {
		if (i%3 == 0) {
			printf("   %d\t", i);
			sleep(1);
		}
	}
	
	system("pause>nul");
	system("cls");
	goto start;
	return 0;
}

