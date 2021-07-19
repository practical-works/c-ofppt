#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct RouteN {
	char nom[100];
	float distance;
	char villeD[100], villeA[100];
};
void titre() {
	printf("************************ Gestion des routes nationales *************************");
}
void menu(int *choix) {
	printf("\n  * Tapez le numero de l'operation a realiser:\n\n");
	printf("\t1 ------ Ajouter une nouvelle route\n");
	printf("\t2 ------ Afficher les routes\n");
	printf("\t3 ------ Chercher une route\n");
	printf("\t4 ------ Supprimer une route\n");
	printf("\t5 ------ Sauvegarder dans un fichier\n");
	printf("\t6 ------ Quitter\n\n");
	printf("********************************************************************************");
	printf("\n\t* Choix: ");
	scanf("%d", &(*choix));
}
void invalid() {
	printf("\n\tChoix invalide!\n");
}
void afficher_element(struct RouteN list[], int id) {
	printf("Route %s (%.2f km) de %s a %s.\n", list[id].nom, list[id].distance, list[id].villeD, list[id].villeA);
}
void ajouter(struct RouteN list[], int *dim) {
	printf("\nAjouter une nouvelle entree:\n");
	printf("\t*** Nom: ");
	fflush(stdin); gets(list[*dim+1].nom); 
	printf("\t*** Distance: ");
	scanf("%f",&list[*dim+1].distance);
	printf("\t*** Ville de Depart: ");
	fflush(stdin); gets(list[*dim+1].villeD); 
	printf("\t*** Villde d'Arrivee: ");
	fflush(stdin); gets(list[*dim+1].villeA); 
	(*dim)++;
}
void afficher(struct RouteN list[], int dim) {
	int i;
	printf("\nApercu de la liste:\n");
	for (i=0; i<dim; i++) {
		afficher_element(list,i);
	}
} 
void chercher(struct RouteN list[], int dim) {
	int i;
	char ville[100];
	printf("\nRecheche:\n");
	printf("\t>>> Ville de Depart: ");
	fflush(stdin); gets(ville); 
	for (i=0; i<dim; i++) {
		if (strcmp(list[i].nom,ville) == 0) {
			afficher_element(list,i);
		}
	}	
}
void supprimer(struct RouteN list[], int *dim) {
	int i, j;
	char nom[100];
	printf("\nSupprimer un element:\n");
	printf("\t>>> Nom: ");
	fflush(stdin); gets(nom); 
	for (i=0; i<*dim; i++) {
		if (strcmp(list[i].nom,nom) == 0) {
			for (j=i; j<*dim; j++) {
				list[j] = list[j+1];
			}
			(*dim)--;
			break;
		}
	}
}
void test_fichier(FILE *fichier) {
	if (fichier == NULL) {
		printf("\n\t/!\\ Erreur! Le fichier ne s'ouvre pas!");
		system("pause>nul");
		exit(-1); 
	} else {
		printf("\n\tFichier ouvert avec succes.\n");
	}
}
void sauver(struct RouteN list[], int dim) {
	int i;
	char nom_fichier[100];
	FILE *routes;
	printf("\nExporter la liste vers un fichier:\n");
	printf("\t>>> Nom du fichier: ");
	fflush(stdin); gets(nom_fichier); 
	routes = fopen(nom_fichier,"w");
	test_fichier(routes);
	for (i=0; i<dim; i++) {
		fprintf(routes,"%s,%f,%s,%s\n",list[i].nom,list[i].distance,list[i].villeD,list[i].villeA);
	}
	printf("\n\tListe exportee avec succes.\n");
	fclose(routes);
}
void quitter() {
	exit(1);
}
