/* Exercice 4 : Nombre d'occurrences d'un caract�re
Ecrire un programme qui affiche le nombre d�occurrences d�un caract�re dans une
ligne de texte (une cha�ne de caract�res pouvant contenir des blancs).*/
#include<stdio.h>
#include<string.h>
main() 
{
	int i,N, occ;
	char str[100], c;
	start:
	system("color f0");
	printf("Nombre d'occurrences d'un caractere\n\n");
	printf("Entrez un texte: ");
	gets(str);
	N=strlen(str);
	printf("Entrez un caractere: ");
	scanf("%c", &c);
	occ = 0;
	for (i=0; i<N; i++) {
		if (str[i]==c) {
			occ++;
		}	
	}
	printf("\nLe caractere '%c' se trouve %d fois dans le texte.\n", c,occ);
	
system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;
}
