/* Exercice 10 : Supprimer les apparitions d'un caractère dans une chaîne
Ecrire un programme qui lit un texte TXT (de moins de 200 caractères) et qui
enlève toutes les apparitions du caractère 'e' en tassant les éléments restants. Les
modifications se feront dans la même variable TXT.
Exemple: " Cette ligne contient quelques lettres e "  ---> " Ctt lign contint qulqus lttrs " */
#include<stdio.h>
main()
{
	int i,j,N;
	char str[100], c;
	start:
	system("color f0");
	printf("Supprimer les apparitions d'un caractere dans une chaine\n\n");
	printf("Entrez un texte: ");
	gets(str);
	N=strlen(str);
	printf("\nEntrez un caractere a supprimer: ");
	scanf("%c", &c);
	printf("\n\n\t");
	for (i=0; i<N; i++) {
		if (str[i]==c) {
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
