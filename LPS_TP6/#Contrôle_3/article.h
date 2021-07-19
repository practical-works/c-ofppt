#include<stdio.h>
#include<stdlib.h>
#include<string.h>	
// Structures --------------------------------------------------------------------------------------------
struct article {
	int code;
	char nom[100];
	float prix;
};
// Fonctions d'accessibilité et de globalisation ---------------------------------------------------------
void titre_program(void) {
	printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°° Liste d'articles °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
}
void menu_program(int *choix) {
	printf("\n");
	printf("\t\t**********************************************\n");
	printf("\t\t| 1. NOUVELLE LISTE    | 7. Tri par Prix     |\n");
	printf("\t\t| 2. AFFICHER LISTE    | 8. Tri par Nom      |\n");
	printf("\t\t|----------------------|                     |\n");
	printf("\t\t| 3. Plus Cher article |---------------------|\n");
	printf("\t\t|----------------------| 9.  SAUVER LISTE    |\n");
	printf("\t\t| 4. Rechercher        | 10. CHARGER LISTE   |\n");
	printf("\t\t| 5. Ajouter           |---------------------|\n");
	printf("\t\t| 6. Supprimer         | 11. QUITTER         |\n");
	printf("\t\t**********************************************\n");
	printf("\n * Choix: ");
	scanf("%d", &(*choix));
}
void choix_invalide(void) {
	printf("\n\t/!\\ Choix invalide!\n");
}
void lire_code(int *code_arti) {
	printf("\n\tCode de l'article: ");
	scanf("%d", &(*code_arti));
}
void non_trouve(void) {
	printf("\n\t/!\\ Ce code ne correspond a aucun etudiant!\n");
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
void chaine_espace(char chaine[], int espace) {   // Converteur (chaine chaine) <---> (chaine_chaine)
	int i, N = strlen(chaine);
	if (espace == 0) {    // Enlever les espaces
		for (i=0; i<N; i++) {
			if (chaine[i] == ' ') {
				chaine[i] = '_';
			}
		}
	} else {    //  Récupérer les espaces
		for (i=0; i<N; i++) {
			if (chaine[i] == '_') {
				chaine[i] = ' ';
			}
		}
	}
}
// Fonctions des fichiers --------------------------------------------------------------------------------
void sauver(struct article list[], int dim) {   // Exporter vers un fichier
	int i;
	FILE *produit;
	printf("\nExporter la liste vers un fichier:\n");
	produit = fopen("article.txt","w");
	test_fichier(produit);
	for (i=0; i<dim; i++) {
		chaine_espace(list[i].nom,0);   // Sauvegarder le nom/Prénom sans espace (remplacée par un caractère)
		fprintf(produit,"%d %s %f\n",list[i].code,list[i].nom,list[i].prix);
		chaine_espace(list[i].nom,1);
	}
	printf("\n\tListe exportee avec succes.\n");
	fclose(produit);
}
void charger(struct article list[], int *dim) {   // Importer depuis un fichier
	int i=0, j=0;
	FILE *produit;
	printf("\nImporter la liste depuis un fichier existant:\n");
	produit = fopen("article.txt","r");
	test_fichier(produit);
	while (!feof(produit)) {
		fscanf(produit,"%d%s%f",&list[i].code,list[i].nom,&list[i].prix);
		chaine_espace(list[i].nom,1);  
		i++;
	}
	(*dim) = i-1;   // Pour éliminer la dernière ligne vide générée par le saut de ligne
	printf("\n\tListe importee avec succes.\n");
	fclose(produit);
}
// Fonctions et procédures principaux du programme -------------------------------------------------------
void lire_article(struct article list[], int dim, int id) {
	int i, code_exist;
	printf("\n{ Article %d }\n", id+1);		
	do {   // Test de l'existence du code (le code doit être unique pour chaque étudiant)
		code_exist = 0;
		printf("\n\tCode: "); scanf("%d", &list[id].code); fflush(stdin);
		for (i=0; i<dim; i++) {
			if (list[id].code == list[i].code && id != i) {
				code_exist = 1;
				break;
			}
		}
		if (code_exist == 1) {
			printf("\n\t/!\\ Ce code appartient deja a un article!\n");
		}
	} while (code_exist == 1);
	printf("\n\tNom: "); fflush(stdin); gets(list[id].nom);
	printf("\n\tPrix: "); scanf("%f", &list[id].prix);
	printf("\n\tArticle %d ajoute dans la position %d.\n",id+1, id);
}
void afficher_article(struct article list[], int id) {
	printf("\n #%d : %s\tPrix: %.2f DH\n", list[id].code, list[id].nom, list[id].prix);
}
void lire_list(struct article list[], int *dim) {
	int i;
	printf("\nTaille de la liste: "); scanf("%d", &(*dim));
	for (i=0; i<*dim; i++) {
		lire_article(list,*dim,i);
	}
}
void afficher_list(struct article list[], int dim) {
	int i;
	for (i=0; i<dim; i++) {
		afficher_article(list,i);
	}
}

struct article plusCher(struct article list[], int dim) {
	int i, max_prix_id = 0;
	float max_prix = list[0].prix;
	for (i=1; i<dim; i++) {
		if (list[i].prix >= max_prix) {
			max_prix_id = i;
			max_prix = list[i].prix;
		}
	}
	return list[max_prix_id];
}
void rechercher(struct article list[], int dim) {
	int i, code, code_id, code_trouve = 0;
	printf("\nRechercher un article:\n");
	lire_code(&code);
	for (i=0; i<dim; i++) {
		if (code == list[i].code) {
			code_trouve = 1;
			code_id = i;
			break;
		} 
	}
	if (code_trouve == 0) {
		non_trouve();
	} else {
		afficher_article(list,code_id);
	}
}
void ajouter(struct article list[], int *dim) {
	int i, pos;
	printf("\nAjouter un article:\n");
	if (*dim <= 0) { printf("\n\t/!\\ Liste vide!\n"); return; } // Cas ou aucune liste existe
	do {
		printf("\n\tPosition d'ajout (Entre 0 et %d): ", *dim-1);
		scanf("%d", &pos); fflush(stdin);
	} while (pos < 0 || pos > *dim-1);
	for (i=*dim; i>pos; i--) {   // Décalage pour préparer l'insértion
		list[i] = list[i-1];
	}
	(*dim)++; // Incrémenter le tableau pour la case supplémentaire
	lire_article(list,*dim,pos); // Insértion
}
void supprimer(struct article list[], int *dim) {
	int i,j, code, code_id, code_trouve = 0;
	char nom[100];
	printf("\nSupprimer un article:\n");
	lire_code(&code);
	for (i=0; i<*dim; i++) {
		if (code == list[i].code) {   // Tester si l'étudiant à supprimer existe ou non
			code_trouve = 1;
			strcpy(nom,list[i].nom);
			for (j=i; j<*dim; j++) {   // Décalage pour suppression
				list[j] = list[j+1];
			}
			(*dim)--; // Dicrémenter le tableau pour la case enlevée
			break;
		}
	}
	if (code_trouve == 0) {
		non_trouve();
	} else {
		printf("\n\tArticle { %s } de code %d SUPPRIME avec succes.\n", nom,code);
	}		
}

void tri_nom(struct article list[], int dim) {
	int i = dim, j, echange = 1;
	struct article tmp;
	printf("\nTri par nom:\n"); 
    while ( i>0 && echange==1 ) {   // Procédure de Tri (Tri à bulle)
		echange = 0;
        for (j=0; j<i-1; j++) {
			if (strcmp(list[j].nom,list[j+1].nom) > 0) {
                  tmp = list[j];
                  list[j] = list[j+1];
                  list[j+1] = tmp;
                  echange = 1;
            } 
		}
        i--;
    }
    afficher_list(list,dim);   // Affichage
}
void tri_prix(struct article list[], int dim) {
	int i = dim, j, echange = 1;
	struct article tmp;
	printf("\nTri par prix:\n");
    while ( i>0 && echange==1 ) {   // Procédure de Tri (Tri à bulle)
		echange = 0;
        for (j=0; j<i-1; j++) {   
			if (list[j].prix > list[j+1].prix) {
                  tmp = list[j];
                  list[j] = list[j+1];
                  list[j+1] = tmp;
                  echange = 1;
            } 
		}
        i--;
    }
    afficher_list(list,dim);   // Affichage
}
// =======================================================================================================

