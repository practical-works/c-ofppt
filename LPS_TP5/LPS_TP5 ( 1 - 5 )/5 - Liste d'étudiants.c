/* Exercice 5 : Liste d'étudiants 
Définir la structure Etudiant caractérisée par: Code(Entier), Nom(Chaine), Date_naiss(Date), Note(3 Réels), Moyenne(Réel)
La structure Date est caractérisée par : Jour(Entier), Mois(Entier), Annee(Entier) 
Soit E un tableau de N étudiants.
1- Remplir et afficher la liste des étudiants (le tableau E).
2- Afficher le nom de l’étudiant qui a eu la meilleure moyenne.
3- Afficher la liste des étudiants nés entre deux dates données.
4- Afficher la mention obtenue par un étudiant donné. (Ajourné, Admis, A. Bien, Bien, T.Bien).
5- Rechercher un étudiant dans la liste.
6- Ajouter un étudiant dans la liste.
7- Supprimer un étudiant de la liste.
8- Trier la liste des étudiants par ordre alphabétique des noms.
9- Trier la liste des étudiants par ordre de Moyenne.
10- Trier la liste des étudiants par ordre date de naissance.
11- Créer un menu pour tester les différents traitements décrits ci-dessus. */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// Définition des structures
struct date {
	int jour, mois, annee;
};
struct etudiant {
	int code;
	float note1, note2, note3, moyenne;
	char nom[100];
	struct date date_naiss;
};
// Programme principal
main()
{
	system("color 5f");
	struct etudiant E[100];
	struct date date1, date2;
	int i,j,N, choix, indice_naiss[100], code_etud, code_trouve, nom_trouve, position, echange, tmp_int;
	float max_moy, tmp_fl;
	char top_etud[100], mention[100], nom_etud[100], tmp_str[100];
//-------------------------------------------------------------------------------------------------------
	menu:
	printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°° Liste d'etudiants °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
	// 11- Créer un menu pour tester les différents traitements décrits dans l'exercice
	printf("\t1.Nouvelle liste\n");
	printf("\t2.Meilleure moyenne\n");
	printf("\t3.Naissances entre deux dates donnees\n");
	printf("\t4.Mention d'un etudiant\n");
	printf("\t5.Rechercher un etudiant\n");
	printf("\t6.Ajouter un etudiant\n");
	printf("\t7.Supprimer un etudiant\n");
	printf("\t8.Tri alphabetique\n");
	printf("\t9.Tri par moyenne\n");
	printf("\t10.Tri par date de naissance.\n");
	printf("\n * Choix: ");
	scanf("%d", &choix);
	switch (choix) {
	
	case 1: // 1- Remplir et afficher la liste des étudiants (le tableau E).
		printf("\nTaille de la liste: ");
		scanf("%d", &N); 
		for (i=0; i<N; i++) {
			printf("\n[ Etudiant %d ]\n", i+1);
			
			printf("\n°°° Code: ");
			scanf("%d", &E[i].code);
			
			printf("\n°°° Nom/Prenom: ");
			fflush(stdin);
			gets(E[i].nom);
			
			printf("\n°°° Date de naissance: \n");
			printf("\n\t°°° Jour: ");
			scanf("%d", &E[i].date_naiss.jour);
			printf("\n\t°°° Mois: ");
			scanf("%d", &E[i].date_naiss.mois);
			printf("\n\t°°° Annee: ");
			scanf("%d", &E[i].date_naiss.annee);
			
			printf("\n°°° Note 1: ");
			scanf("%f", &E[i].note1);
			printf("\n°°° Note 2: ");
			scanf("%f", &E[i].note2);
			printf("\n°°° Note 3: ");
			scanf("%f", &E[i].note3);
			
			E[i].moyenne = (E[i].note1 + E[i].note2 + E[i].note3) / 3;
			printf("\n°°° Moyenne: %.2f\n", E[i].moyenne);	
			}
		break;
		
	case 2: // 2- Afficher le nom de l’étudiant qui a eu la meilleure moyenne.
		max_moy = E[0].moyenne;
		strcpy(top_etud,E[0].nom);
		for (i=1; i<N; i++) {
			if (E[i].moyenne >= max_moy) {
				max_moy = E[i].moyenne;
				strcpy(top_etud,E[i].nom);
			}
		}
		printf("\nLa meilleure moyenne est { %.2f } de l'etudiant { %s }.\n", max_moy,top_etud);
		break;
			
	case 3: // 3- Afficher la liste des étudiants nés entre deux dates données.
		printf("\nEtudiants nes entre deux date:\n"); 
		// Date 1
		printf("1ere date:\n");
		do {
			printf("\tJour: ");
			scanf("%d", &date1.jour);	
			fflush(stdin);
		} while (date1.jour<=0 || date1.jour>31);
		do {
			printf("\tMois: ");
			scanf("%d", &date1.mois);	
			fflush(stdin);
		} while (date1.mois<=0 || date1.mois>12);
		do {
			printf("\tAnnee: ");
			scanf("%d", &date1.annee);
			fflush(stdin);
		} while (date1.annee<0);
		// Date 2
		printf("2eme date:\n");
		do {
			printf("\tJour: ");
			scanf("%d", &date2.jour);	
			fflush(stdin);
		} while (date2.jour<=0 || date2.jour>31);
		do {
			printf("\tMois: ");
			scanf("%d", &date2.mois);	
			fflush(stdin);
		} while (date2.mois<=0 || date2.mois>12);
		do {
			printf("\tAnnee: ");
			scanf("%d", &date2.annee);
			fflush(stdin);
		} while (date2.annee<0);
		// Comparaison
		j=0;
		if (date1.annee < date2.annee) {    // Intervalle de dates [date1.année , date2.année]
			for (i=0; i<N; i++) {
				if (E[i].date_naiss.annee>date1.annee && E[i].date_naiss.annee<date2.annee) {
					indice_naiss[j] = i;
					j++;
				}
			}		
		} else if (date1.annee > date2.annee) {   // Intervalle de dates [date2.année , date1.année]
			for (i=0; i<N; i++) {
				if (E[i].date_naiss.annee<date1.annee && E[i].date_naiss.annee>date2.annee) {
					indice_naiss[j] = i;
					j++;
				}
			}
		} else {
			if (date1.mois < date2.mois) {     // Intervalle de dates [date1.mois , date2.mois] (date1.année==date2.année)
			for (i=0; i<N; i++) {
				if (E[i].date_naiss.mois>date1.mois && E[i].date_naiss.mois<date2.mois 
				&& E[i].date_naiss.annee==date1.annee) {
					indice_naiss[j] = i;
					j++;
				}
			}
			} else if (date1.mois > date2.mois) {   // Intervalle de dates [date2.mois , date1.mois] (date1.année==date2.année)
			for (i=0; i<N; i++) {
				if (E[i].date_naiss.mois<date1.mois && E[i].date_naiss.mois>date2.mois 
				&& E[i].date_naiss.annee==date1.annee) {
					indice_naiss[j] = i;
					j++;
					}
				} 
			} else {
				if (date1.jour < date2.jour) {          // [date1.jour , date2.jour] (année et mois identiques)
				for (i=0; i<N; i++) {
				if (E[i].date_naiss.jour>date1.jour && E[i].date_naiss.jour<date2.jour 
				    && E[i].date_naiss.annee==date1.annee && E[i].date_naiss.mois==date1.mois) {
					indice_naiss[j] = i;
					j++;
				}
				}
				} else if (date1.jour > date2.jour) {        // [date2.jour , date1.jour] (année et mois identiques)
				for (i=0; i<N; i++) {
				if (E[i].date_naiss.jour<date1.jour && E[i].date_naiss.jour>date2.jour 
				    && E[i].date_naiss.annee==date1.annee && E[i].date_naiss.mois==date1.mois) {
					indice_naiss[j] = i;
					j++;
				}
				}
				} else {
				for (i=0; i<N; i++) {
				if (E[i].date_naiss.annee==date1.annee && E[i].date_naiss.mois==date1.mois && E[i].date_naiss.jour==date1.jour) {
					indice_naiss[j] = i;
					j++;
				}
				}
				}
			}
		}
		printf("\nEtudiants nes entre les deux date:\n");
		for (i=0; i<j; i++) {
			printf("\t%s\t%d/%d/%d\n", E[indice_naiss[i]].nom, E[indice_naiss[i]].date_naiss.jour,
			E[indice_naiss[i]].date_naiss.mois,E[indice_naiss[i]].date_naiss.annee);
		}
		break; 
		
	case 4: // 4- Afficher la mention obtenue par un étudiant donné. (Ajourné, Admis, A. Bien, Bien, T.Bien).
		printf("\nMentien d'un etudiant:\n");
		printf("\nCode de l'etudiant: ");
		scanf("%d", &code_etud);
		code_trouve = 0;
		for (i=0; i<N; i++) {
			if (code_etud == E[i].code) {
				code_trouve = 1;
				if (E[i].moyenne < 10) {
					strcpy(mention,"Ajourne");
					break;
				} else if (E[i].moyenne < 13) {
					strcpy(mention,"Admis");
					break;
				} else if (E[i].moyenne < 16) {
					strcpy(mention,"A.bien");
					break;
				} else if (E[i].moyenne < 18) {
					strcpy(mention,"Bien");
					break;
				} else {
					strcpy(mention,"T.Bien");
					break;
				}	
			} 
		}
		if (code_trouve == 0) {
			printf("\tCe code ne correspond a aucun etudiant!\n");
		} else {
			printf("\t%s\tMoyenne: %.2f\tMention: %s\n", E[i].nom, E[i].moyenne, mention);	
		}
		break;
		
	case 5: // 5- Rechercher un étudiant dans la liste.
		printf("\nRechercher un etudiant:\n");
		printf("Nom de l'etudiant: ");
		fflush(stdin);
		gets(nom_etud);
		nom_trouve = 0;
		for (i=0; i<N; i++) {
			if (strcmp(nom_etud,E[i].nom) == 0) {
				nom_trouve = 1;
				break;
			} 
		}
		if (nom_trouve == 0) {
			printf("\tEtudiant non trouve!\n");
		} else {
			printf("\tEtudiant {%s} trouve (Position: %d).\n", nom_etud, i+1);
		}
		break;
		
	case 6: // 6- Ajouter un étudiant dans la liste.
		printf("\nAjouter un etudiant:\n");
		do {
			printf("Position d'ajout (Entre 1 et %d): ", N+1);
			scanf("%d", &position);
		} while (position < 1 || position >N+1);
		// Décalage pour préparer l'insértion
		for (i=N+1; i>position; i--) {
			E[i].code = E[i-1].code;
			strcpy(E[i].nom , E[i-1].nom);
			E[i].date_naiss.jour = E[i-1].date_naiss.jour;
			E[i].date_naiss.mois = E[i-1].date_naiss.mois;
			E[i].date_naiss.annee = E[i-1].date_naiss.annee;
			E[i].note1 = E[i-1].note1;
			E[i].note2 = E[i-1].note2;
			E[i].note3 = E[i-1].note3;
			E[i].moyenne = E[i-1].moyenne;
		}
		N++; // Incrémenter le tableau pour la case supplémentaire
		// Insértion
		printf("\n[ Etudiant %d ]\n", position);
		printf("\n°°° Code: ");
		scanf("%d", &E[position-1].code);
		
		printf("\n°°° Nom/Prenom: ");
		fflush(stdin);
		gets(E[position-1].nom);
		
		printf("\n°°° Date de naissance: \n");
		printf("\n\t°°° Jour: ");
		scanf("%d", &E[position-1].date_naiss.jour);
		printf("\n\t°°° Mois: ");
		scanf("%d", &E[position-1].date_naiss.mois);
		printf("\n\t°°° Annee: ");
		scanf("%d", &E[position-1].date_naiss.annee);
		
		printf("\n°°° Note 1: ");
		scanf("%f", &E[position-1].note1);
		printf("\n°°° Note 2: ");
		scanf("%f", &E[position-1].note2);
		printf("\n°°° Note 3: ");
		scanf("%f", &E[position-1].note3);
		break;
		
	case 7: // 7- Supprimer un étudiant de la liste.
		printf("\nSupprimer un etudiant:\n");
		printf("Nom de l'etudiant: ");
		fflush(stdin);
		gets(nom_etud);
		nom_trouve = 0;
		for (i=0; i<N; i++) {
			if (strcmp(nom_etud,E[i].nom) == 0) {   // Tester si l'étudiant à supprimer existe ou non
				nom_trouve = 1;
			// Décalage pour suppression
				for (j=i; j<N; j++) {
					E[j].code = E[j+1].code;
					strcpy(E[i].nom , E[j+1].nom);
					E[j].date_naiss.jour = E[j+1].date_naiss.jour;
					E[j].date_naiss.mois = E[j+1].date_naiss.mois;
					E[j].date_naiss.annee = E[j+1].date_naiss.annee;
					E[j].note1 = E[j+1].note1;
					E[j].note2 = E[j+1].note2;
					E[j].note3 = E[j+1].note3;
					E[j].moyenne = E[j+1].moyenne;
				}
				N--; // Dicrémenter le tableau pour la case enlevée
				break;
			} 
		}
		if (nom_trouve == 0) {
			printf("\tEtudiant a supprimer non trouve!\n");
		} else {
			printf("\tEtudiant {%s} trouve et supprime.\n", nom_etud);
		}
		break;
		
	case 8: // 8- Trier la liste des étudiants par ordre alphabétique des noms.
		printf("Tri par ordre alphabetique:\n");
		// Procédure de Tri
		i = N;
	    echange = 1;
	    while ( i>0 && echange==1 ) {
			echange = 0;
	        for (j=0; j<i; j++) {
				if (strcmp(E[j].nom,E[j+1].nom) > 0) {
	                  strcpy(tmp_str , E[j].nom);
	                  strcpy(E[j].nom , E[j+1].nom);
	                  strcpy(E[j+1].nom , tmp_str);
	                  echange = 1;
	            } 
			}
	        i--;
	    }
	    // Affichage
	    for (i=0; i<N; i++) {
	    	printf(" #%d %s (%d)  %d\n", E[i].code,E[i].nom,E[i].date_naiss.annee,E[i].moyenne);
		}
		break;
			
		case 9: // 9- Trier la liste des étudiants par ordre de Moyenne.
		printf("Tri par ordre de moyenne:\n");
		// Procédure de Tri
		i = N;
	    echange = 1;
	    while ( i>0 && echange==1 ) {
			echange = 0;
	        for (j=0; j<i; j++) {
				if (E[j].moyenne > E[j+1].moyenne) {
	                  tmp_fl = E[j].moyenne;
	                  E[j].moyenne = E[j+1].moyenne;
	                  E[j+1].moyenne = tmp_fl;
	                  echange = 1;
	            } 
			}
	        i--;
	    }
	    // Affichage
	    for (i=0; i<N; i++) {
	    	printf(" #%d %s (%d)  %d\n", E[i].code,E[i].nom,E[i].date_naiss.annee,E[i].moyenne);
		}
		break;
		
	case 10: // 10- Trier la liste des étudiants par ordre date de naissance.
		printf("Tri par ordre de naissance:\n");
		// Procédure de Tri
		i = N;
	    echange = 1;
	    while ( i>0 && echange==1 ) {
			echange = 0;
	        for (j=0; j<i; j++) {
				if (E[j].date_naiss.annee > E[j+1].date_naiss.annee) {
	                tmp_int = E[j].date_naiss.annee;
	                E[j].date_naiss.annee = E[j+1].date_naiss.annee;
	                E[j+1].date_naiss.annee = tmp_int;
	                echange = 1;
	        		} else if (E[j].date_naiss.annee == E[j+1].date_naiss.annee) {
		            	if (E[j].date_naiss.mois > E[j+1].date_naiss.mois) {
			                tmp_int = E[j].date_naiss.mois;
			                E[j].date_naiss.mois = E[j+1].date_naiss.mois;
			                E[j+1].date_naiss.mois = tmp_int;
			                echange = 1;
		            	}
	        	} else if (E[j].date_naiss.mois == E[j+1].date_naiss.mois) {
					if (E[j].date_naiss.jour > E[j+1].date_naiss.jour) {
		                tmp_int = E[j].date_naiss.jour;
		                E[j].date_naiss.jour = E[j+1].date_naiss.jour;
		                E[j+1].date_naiss.jour = tmp_int;
		                echange = 1;
	           		}
	           	}
	        i--;
	    	}
		}
	    // Affichage
	    for (i=0; i<N; i++) {
	    	printf(" #%d %s   %d/%d/%d\n", E[i].code,E[i].nom, E[i].date_naiss.jour,E[i].date_naiss.mois,E[i].date_naiss.annee);
		}
		break;
			
		default: printf("\nChoix non valide!\n"); 
		}
//-------------------------------------------------------------------------------------------------------
system("pause>nul");
system("cls");
fflush(stdin);
goto menu;
return 0;
}
