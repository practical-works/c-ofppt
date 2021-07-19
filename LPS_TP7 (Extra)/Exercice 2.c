/* Exercice 2: Demander à l'ultilisateur le nom d'un fichier et la saisie d'un texte et l'enregistrer dans le fichier */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main() 
{
	system("title Les fichiers");
	system("color 0f");
	char nom_fichier[100], text[100];
	FILE *fichier;	
	printf("Les fichiers °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
	printf("\nEntrez un nom de fichier: ");
	gets(nom_fichier);
	strcat(nom_fichier,".txt");
	fichier = fopen(nom_fichier,"w");
	if (!fichier) {
		printf("\nFichier introuvable!");
		system("pause>nul");
		exit(1);
	} else {
		printf("\nFichier ouvert avec succes.\n");
	}
	printf("\nRemplir fichier:\n\n");
	printf("Texte: ");
	gets(text);
	fputs(text,fichier);
	printf("\nTexte enregistre avec succes.\n");
	fclose(fichier);

system("pause>nul");
system("cls");
fflush(stdin);
return 0;
}

