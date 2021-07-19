/*	Exercice 4: Remplir un fichier avec les données d'un tableau de structure date (jour, mois, année) */
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
	FILE *dates;	
	printf("Les fichiers °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
	dates = fopen("dates.txt","w");
	if (!dates) {
		printf("\nFichier introuvable!");
		system("pause>nul");
		exit(1);
	} else {
		printf("\nFichier ouvert avec succes.\n");
	}
	printf("\nRemplir fichier des dates:\n\n");
	printf("Entrez une taille de tableau: ");
	scanf("%d",&dim);
	printf("\n");
	for (i=0; i<dim; i++) {
		printf("Date %d:\n", i);
		printf("\tJour: "); scanf("%d",&D[i].jour); fprintf(dates,"%d ",D[i].jour);
		printf("\tMois: "); fflush(stdin); gets(D[i].mois); fprintf(dates,"%s ",D[i].mois);
		printf("\tAnnee: "); scanf("%d",&D[i].annee); fprintf(dates,"%d\n",D[i].annee);é
	}
	printf("\nTexte enregistre avec succes.\n");
	fclose(dates);
	printf("\nApercu:\n");
	for (i=0; i<dim; i++) {
		printf("\t%d %s %d\n", D[i].jour,D[i].mois,D[i].annee);
	}

system("pause>nul");
system("cls");
fflush(stdin);
return 0;
}
