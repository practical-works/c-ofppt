/*	Exercice 3: Rechercher un mot dans un fichier */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main() 
{
	system("title Les fichiers");
	char nom_fichier[100], text[100], mot[100];
	FILE *fichier;	
	start:
	system("color 0f");
	printf("Les fichiers 같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같�");
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
	printf("\nRechercher dans le fichier:\n");
	printf("\n\tEntrez le mot a chercher: ");
	gets(mot);
	while (!feof(fichier)) {
		fscanf(fichier,"%s",text);
		if (strcmp(text,mot) == 0) {
			break;
		}
	//	puts(text);
	}
	fclose(fichier);
	if (strcmp(text,mot) == 0) {
		system("color 2f");
		printf("\n\tMot { %s } trouve :)", mot);
	} else {
		printf("\n\tMot non trouve !");
	}
	
system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;
}

