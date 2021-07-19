/* Exercice 6: Les nombres impairs
Ecrire un programme qui affiche les nombres impairs se trouvant entre 1 et N */
#include<stdio.h>
main()
{
	int N, i;
	
	start:
	printf("\n\t\t\t{ Les nombres impairs }\n");
	printf("\n Entrez une valeur maximale: ");
	scanf("%d", &N);
	printf("\n");
	for (i=1 ; i<=N ; i++) {
		if (i%2 != 0) {
			printf("   %d\t", i);
			sleep(1);
		}
	}
	
	system("pause>nul");
	system("cls");
	goto start;
	return 0;
}
