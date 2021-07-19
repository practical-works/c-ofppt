/* Exercice 12: La somme d’une série d’entiers (2)
Modifier le programme précédent pour demander à l'utilisateur à chaque fois s'il veut saisir un autre entier. */
#include<stdio.h>
main()
{
	int n, s=0, end=0;
	char c;
	
	start:
	printf("La somme d'une serie d'entiers\n");
	printf("\nDonnez les nombres a sommer:\n\n");
	    printf("\t+ ");
		scanf("%d", &n);
		s = s + n ;
    while (end==0) {
	printf("\nAjouter un autre entier (O/N) : ");
	fflush(stdin);
		scanf("%c", &c);
		if (c=='O') {
			printf("\n\t+ ");
		    scanf("%d", &n);
		    s = s + n ;
		} else if (c=='N') {
			break;	
	    } 
    }
	
	printf("\n_________________________________________\n");
	printf("\n\tSomme = %d", s);

system("pause>nul");
system("cls");
s=0;
goto start;
return 0;

}
