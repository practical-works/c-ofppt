/* Exercice 9 : Supprimer les espaces d'une chaîne de caractères
Écrire un programme qui supprime les espaces et tabulations d'une chaîne de caractères. 
Cette fonction ne doit pas utiliser de tableau intermédiaire.*/
#include<stdio.h>
main()
{
	int i,j,N;
	char str[100];
	start:
	system("color f0");
	printf("Supprimer les espaces d'une chaine de caracteres\n\n");
	printf("Entrez un texte: ");
	gets(str);
	N=strlen(str);
	printf("\n\n\t");
	for (i=0; i<N; i++) {
		if (str[i]==' ') {
			for (j=i; j<N-1; j++) {
				str[j]=str[j+1];	
			}
			i--;
			N--;
		}
	}
	str[N]='\0';
	puts(str);
system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;
}
