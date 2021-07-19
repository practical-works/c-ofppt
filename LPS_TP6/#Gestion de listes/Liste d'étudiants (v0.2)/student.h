#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// ===== student version 2 ===============================================================================
// Ce fichier contient toute les fonctions n�cessaires au fonctionement du programme "Liste d'�tudiants".
// Il doit rester dans le m�me r�pertoire que le fichier source du programme.
/*
	Name: Student List 
	Author: Abdelhakim El hafid
	Date: 08-12-15 11:45
	Description: Mangage lists of students for school
*/
// =======================================================================================================
// Structures --------------------------------------------------------------------------------------------
struct etudiant {
	int code;
	char nom[100];
	float note1, note2, note3, moyenne;
};
// Fonctions d'accessibilit� et de globalisation ---------------------------------------------------------
void titre_program(void) {
	printf("������������������������������� Liste d'etudiants ������������������������������\n");
}
void menu_program(int *choix) {
	printf("\n");
	printf("\t\t*---------------------------------------------*\n");
	printf("\t\t|                       |                     |\n");
	printf("\t\t|  1. NOUVELLE LISTE    |                     |\n");
	printf("\t\t|  2. MEILLEUR MOYENNE  |                     |\n");
	printf("\t\t|  3. MENTION           |                     |\n");
	printf("\t\t|  4. RECHERCHER        |   9. SAUVEER LISTE  |\n");
	printf("\t\t|  5. AJOUTER           |  10. CHARGER LISTE  |\n");
	printf("\t\t|  6. SUPPRIMER         |                     |\n");
	printf("\t\t|  7. TRI PAR ALPHABET  |                     |\n");
	printf("\t\t|  8. TRI PAR MOYENNE   |                     |\n");
	printf("\t\t|                       |                     |\n");
	printf("\t\t*---------------------------------------------*\n");
	printf("\n * Choix: ");
	scanf("%d", &(*choix));
	
}
void lire_code(int *code_etud) {
	printf("\tCode de l'etudiant: ");
	scanf("%d", &(*code_etud));
}
void non_trouve(void) {
	printf("\tCe code ne correspond a aucun etudiant!\n");
}
void test_fichier(FILE *fichier) {
	if (fichier == NULL) {
		printf("\tErreur! Le fichier ne s'ouvre pas!");
		system("pause>nul");
		exit(1);
	} else {
		printf("\n\tFichier ouvert avec succes.\n");
	}
}
void chaine_espace(char chaine[], int espace) {
	int i, N = strlen(chaine);
	if (espace == 0) {    // Enlever les espaces
		for (i=0; i<N; i++) {
			if (chaine[i] == ' ') {
				chaine[i] = '_';
			}
		}
	} else {    //  R�cup�rer les espaces
		for (i=0; i<N; i++) {
			if (chaine[i] == '_') {
				chaine[i] = ' ';
			}
		}
	}
}
// Fonctions des fichiers --------------------------------------------------------------------------------
void sauver(struct etudiant list[], int dim) {
	int i;
	FILE *ecole;
	printf("\nExporter la liste vers un fichier:\n");
	ecole = fopen("student.txt","w");
	test_fichier(ecole);
	for (i=0; i<dim; i++) {
		chaine_espace(list[i].nom,0);
		fprintf(ecole,"%d %s %f %f %f %f\n",list[i].code,list[i].nom,list[i].note1,list[i].note2,list[i].note3,
		list[i].moyenne);
		chaine_espace(list[i].nom,1);
	}
	printf("\tListe exportee avec succes.\n");
	fclose(ecole);
}
void charger(struct etudiant list[], int *dim) {
	int i=0, j=0;
	FILE *ecole;
	printf("\nImporter la liste depuis un fichier existant:\n");
	ecole = fopen("student.txt","r");
	test_fichier(ecole);
	while (!feof(ecole)) {
		fscanf(ecole,"%d%s%f%f%f%f",&list[i].code,list[i].nom,&list[i].note1,&list[i].note2,&list[i].note3,
		&list[i].moyenne);
		chaine_espace(list[i].nom,1);
		i++;
	}
	(*dim) = i-1;
	printf("\tListe importee avec succes.\n");
	fclose(ecole);
}
// Fonctions et proc�dures principaux du programme -------------------------------------------------------
void lire_etudiant(struct etudiant list[], int dim, int id) {
	int i, code_exist;
	printf("\n[ Etudiant %d ]\n", id+1);		
	do {   // Test de l'existence du code (le code doit �tre unique � chaque �tudiant)
		code_exist = 0;
		printf("\n��� Code: "); scanf("%d", &list[id].code); 
		for (i=0; i<dim; i++) {
			if (list[id].code == list[i].code && id != i) {
				code_exist = 1;
				break;
			}
		}
		if (code_exist == 1) {
			printf("\tCe code appartient deja a un etudiant!\n");
		}
	} while (code_exist == 1);
	printf("\n��� Nom/Prenom: "); fflush(stdin); gets(list[id].nom);
	printf("\n��� Note 1: "); scanf("%f", &list[id].note1);
	printf("\n��� Note 2: "); scanf("%f", &list[id].note2);
	printf("\n��� Note 3: "); scanf("%f", &list[id].note3);
	list[id].moyenne = (list[id].note1 + list[id].note2 + list[id].note3) / 3;
	printf("\n��� Moyenne: %.2f\n", list[id].moyenne);	
}
void afficher_etudiant(struct etudiant list[], int id) {
	printf("  #%d : %s (N1:%.2f, N2:%.2f, N3:%.2f) MOY:%.2f\n", list[id].code, list[id].nom,
	list[id].note1, list[id].note2, list[id].note3, list[id].moyenne);
}
void lire_list(struct etudiant list[], int *dim) {
	int i;
	printf("\nTaille de la liste: "); scanf("%d", &(*dim));
	for (i=0; i<*dim; i++) {
		lire_etudiant(list,*dim,i);
	}
}
void afficher_list(struct etudiant list[], int dim) {
	int i;
	for (i=0; i<dim; i++) {
		afficher_etudiant(list,i);
	}
}

void top_moy(struct etudiant list[], int dim) {
	int i, max_moy_id = 0;
	float max_moy = list[0].moyenne;
	for (i=1; i<dim; i++) {
		if (list[i].moyenne >= max_moy) {
			max_moy_id = i;
			max_moy = list[i].moyenne;
		}
	}
	printf("\nEtudiant avec la meilleure moyenne:\n");
	afficher_etudiant(list,max_moy_id);
}
void mention(struct etudiant list[], int dim) {
	int i, code, code_id, code_trouve = 0;
	char mention[100];
	printf("\nMentien d'un etudiant:\n");
	lire_code(&code);
	for (i=0; i<dim; i++) {
		if (code == list[i].code) {
			code_trouve = 1;
			code_id = i;
			if (list[i].moyenne < 10) {
				strcpy(mention,"Ajourne");
				break;
			} else if (list[i].moyenne < 12) {
				strcpy(mention,"Admis");
				break;
			} else if (list[i].moyenne < 14) {
				strcpy(mention,"A.bien");
				break;
			} else if (list[i].moyenne < 16) {
				strcpy(mention,"Bien");
				break;
			} else {
				strcpy(mention,"T.Bien");
				break;
			}	
		} 
	}
	if (code_trouve == 0) {
		non_trouve();
	} else {
		afficher_etudiant(list,code_id);
		printf("        Mention: %s\n", mention);	
	}
}

void rechercher(struct etudiant list[], int dim) {
	int i, code, code_id, code_trouve = 0;
	printf("\nRechercher un etudiant:\n");
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
		afficher_etudiant(list,code_id);
	}
}
void ajouter(struct etudiant list[], int *dim) {
	int i, pos;
	printf("\nAjouter un etudiant:\n");
	do {
		printf("\tPosition d'ajout (Entre 0 et %d): ", *dim-1);
		scanf("%d", &pos);
	} while (pos < 0 || pos > *dim-1);
	for (i=*dim; i>pos; i--) {   // D�calage pour pr�parer l'ins�rtion
		list[i] = list[i-1];
	}
	(*dim)++; // Incr�menter le tableau pour la case suppl�mentaire
	lire_etudiant(list,*dim,pos); // Ins�rtion
}
void supprimer(struct etudiant list[], int *dim) {
	int i,j, code, code_id, code_trouve = 0;
	char nom[100];
	printf("\nSupprimer un etudiant:\n");
	lire_code(&code);
	for (i=0; i<*dim; i++) {
		if (code == list[i].code) {   // Tester si l'�tudiant � supprimer existe ou non
			code_trouve = 1;
			strcpy(nom,list[i].nom);
			for (j=i; j<*dim; j++) {   // D�calage pour suppression
				list[j] = list[j+1];
			}
			(*dim)--; // Dicr�menter le tableau pour la case enlev�e
			break;
		}
	}
	if (code_trouve == 0) {
		non_trouve();
	} else {
		printf("\tEtudiant ""%s"" de code %d SUPPRIME avec succes.\n", nom,code);
	}		
}

void tri_alpha(struct etudiant list[], int dim) {
	int i = dim, j, echange = 1;
	struct etudiant tmp;
	printf("Tri par ordre alphabetique:\n"); 
    while ( i>0 && echange==1 ) {   // Proc�dure de Tri (Tri � bulle)
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
void tri_moy(struct etudiant list[], int dim) {
	int i = dim, j, echange = 1;
	struct etudiant tmp;
	printf("Tri par ordre de moyenne:\n");
    while ( i>0 && echange==1 ) {   // Proc�dure de Tri (Tri � bulle)
		echange = 0;
        for (j=0; j<i-1; j++) {   
			if (list[j].moyenne < list[j+1].moyenne) {
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
