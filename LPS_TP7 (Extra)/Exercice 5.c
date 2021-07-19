/*	Exercice 5: Lire un fichier avec les données d'un tableau de structure date (jour, mois, année) */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct date {
	int jour, annee;
	char mois[100];
};
main() 
{
	system("title Les fichiers");
	system("color 0f");
	struct date D[100];
	int i, dim;
	char text[100];
	FILE *dates;	
	printf("Les fichiers °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
	dates = fopen("dates.txt","r");
	if (!dates) {
		printf("\nFichier introuvable!");
		system("pause>nul");
		exit(1);
	} else {
		printf("\nFichier ouvert avec succes.\n");
	}
	printf("\nLecture du fichier de dates :\n\n");
	i=0;
	while (!feof(dates)) {
		fscanf(dates,"%d,%s,%d",&D[i].jour,D[i].mois,&D[i].annee);
		//fscanf(dates,"%d,",&D[i].jour);
		//fscanf(dates,"%s*,",D[i].mois);
		//fscanf(dates,"%d",&D[i].annee);
		i++;
	}
	dim = i-1;
	fclose(dates);
	printf("Apercu:\n");
	for (i=0; i<dim; i++) {
		printf("\t%d - %s - %d\n", D[i].jour,D[i].mois,D[i].annee);
	}

system("pause>nul");
system("cls");
fflush(stdin);
return 0;
}
