/* Exercice 11 : Supprimer les espaces de début et fin
Ecrire un programme qui élimine les espaces de début et de fin d’une chaîne.
Exemple : Une chaîne de 13 caractères (les cases vides contiennent un espace)
S:  | | |C|H|E|R| | |A|M|I| | |\0|   --->   |C|H|E|R| | |A|M|I|\0|   */
#include<stdio.h>
#include<string.h>
main()
{
	int i,j, N;
	char str[100];
	system("color f0"); 
	start:
	printf("Supprimer les espaces de debut et fin\n\n");
	printf("Entrez un texte: ");
	gets(str);
	N=strlen(str);
	
//    (-_____-)'

	printf("\n\n\t{%s}\n", str);
	
system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;
}
