/* Exercice 6 : Chaîne inverse
Écrire un programme qui renverse une chaîne.*/
#include<stdio.h>
#include<string.h>
main()
{
	int i,N;
	char str[100], tmp;
	start:
	system("color f0");
	printf("Chaine inverse\n\n");
	printf("Entrez un texte: ");
	gets(str);
	N=strlen(str);
	
	for (i=0; i<N/2; i++) {
		tmp = str[i];
		str[i] = str[N-1-i];
		str[N-1-i] = tmp;
	}
	
	printf("\n\n\t");
	puts(str);
	
system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;

}
