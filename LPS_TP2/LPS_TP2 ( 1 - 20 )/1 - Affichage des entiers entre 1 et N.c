/* Exercice 1: Affichage des entiers entre 1 et N
Ecrire un programme qui affiche les entiers de 1 à n en utilisant :
– une boucle pour
– une boucle tant que
– une boucle faire …tant que */
#include<stdio.h>
main()
{
	int N, i;
	
start:
	
	printf("Affichage des entiers entre 1 et N\n");
	printf("\nEntrez une valeur pour N: ");
	scanf("%d", &N);

printf("\nResultat avec boucle: for\n\n");	
// Boucle " pour " ----------------------------------------------------------------------------------------------------------
	for (i=1 ; i<=N ; i++) {
		printf("\t%d\n", i);
	}
	
printf("\n\nResultat avec boucle: while\n\n");
// Boucle " tant que "  -----------------------------------------------------------------------------------------------------
    i = 1;
    while (i<=N) {
    	printf("\t%d\n", i);
    	i++;
	}
	
printf("\n\nResultat avec boucle: do ... while\n\n");   
// Boucle " faire ... tant que "  -------------------------------------------------------------------------------------------
   i = 1;
   do {
   	printf("\t%d\n", i);
   	i++;
   } while (i<=N);
   
//----------------------------------------------------------------------------------------------------------------------------

system("pause>nul");
system("cls");
goto start;
return 0;
}
