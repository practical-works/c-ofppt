#include<stdio.h>
#include<stdlib.h>
main() 
{
	system("title Les fichiers");
	FILE *mon_fichier;
	int i, choix;
	char text[100];
	start:
	system("color 0f");
	printf("Les fichiers °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
	printf(" \nMenu:\n");
	printf("\n\t1. Creer/ecrire fichier\n");
	printf("\n\t2. Lire fichier\n");
	printf("\nChoix: ");
	scanf("%d", &choix);
	switch (choix) {
	case 1: system("color 9f");
			mon_fichier = fopen("my_file.txt", "w");
			if (mon_fichier == NULL) {
				printf("\tLe fichier ne s'ouvre pas!");
				exit(1);
			} else {
				printf("\n\tFichier cree avec succes.\n");
			}
		fprintf(mon_fichier,"Bonsoir, Monsieur! Comment allez-vous ? ca a l'air de bien fonctionner. Cool ^_^");
		printf("\n\tTexte sauvegarde avec succes.\n");
		fclose(mon_fichier);
		break;
	case 2: system("color f0");
			mon_fichier =  fopen("my_file.txt", "r"); 
			if (mon_fichier == NULL) {
				printf("Le fichier ne s'ouvre pas!");
				exit(1);
			}
			printf("\n");
		while ( !feof(mon_fichier) ) {     // ou feof(mon_fichier) == 0 
			fgets(text, 100, mon_fichier);   // fgets(nom_variable, nombre_caractères, nom_fichier)
			printf("%s", text);
		}
		fclose(mon_fichier);
		break;
	default: fflush(stdin); printf("\n\tChoix invalide!\n"); break;
	}
system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;
}
