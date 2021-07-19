/* Exercice 7 : le nombre des notes
Ecrire un programme qui lit 10 notes entières et qui affiche le nombre de notes supérieures à 10. */
#include<stdio.h>
main()
{
	int T[100], i, sup=0;
	start:
	printf("Nombre de notes\n\n");
	printf("\n");
	
	for (i=0; i<10; i++) {
		printf("\t%d) Entrez une note: ", i+1);
		scanf("%d", &T[i]);
		if (T[i] > 10) {
			sup++;
		}
	}
	printf("\nNombre de notes superieures a dix: %d\n", sup);

system("pause>nul");
system("cls");
fflush(stdin);
sup=0;
goto start;
return 0;
}
