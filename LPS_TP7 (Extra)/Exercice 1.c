/*	Exercice 1: Demander à l'ultilisateur le nom d'un fichier et affiche son contenu à l'écran */
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
	fichier = fopen(nom_fichier,"r");
	if (!fichier) {
		printf("\nFichier introuvable!");
		system("pause>nul");
		exit(1);
	} else {
		printf("\nFichier ouvert avec succes.\n");
	}
	printf("\nContenu du fichier:\n\n");
	while (!feof(fichier)) {
		fgets(text,100,fichier);
		puts(text);
	}
	fclose(fichier);

system("pause>nul");
system("cls");
fflush(stdin);
return 0;
}

