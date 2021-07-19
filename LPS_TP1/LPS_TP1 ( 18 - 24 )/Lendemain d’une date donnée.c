/* Nom: Lendemain d’une date donnée
   Description: ~ Lit trois données (jj, mm, aaaa) représentant respectivement le jour, le mois et l’année.
                ~ Calcule et affiche le lendemain de la date donnée.
   Tenir compte des années bissextiles (de 366 jours).
//--------------------------------------------------------------------------------------------------------------------------- 
Analyse:
    jour: 1<=j<=(28, 29, 30 ou 31)
    mois: 1<=m<=12
    année: 1<=a<=...
    
    annee_biss = 1 si (annee%4 = 0) et (annee%100 != 0)
    annee_biss = true si (annee%400 = 0)
//---------------------------------------------------------------------------------------------------------------------------*/  
#include<stdio.h>
main()
{
	int jour, mois, annee, j_suiv, m_suiv, a_suiv ;
	int annee_biss, jour_max ;
	
	start:
	printf(" -----------------------------------------\n");
	printf("  Lendemain d'une date donnee\n");
	printf(" -----------------------------------------\n");
	printf(" \n  Entrez une date (Jour/Mois/Annee):\n\n");
	printf("\tJour: ");
	scanf("%d", &jour);
	printf("\tMois: ");
	scanf("%d", &mois);
	printf("\tAnnee: ");
	scanf("%d", &annee);
	
if(jour>=1 && jour<=31 && mois>=1 && mois<=12 && annee>=1) {
	
	if ( (jour==30 || jour==31) && (mois==2) ) {
	printf("\n\t  Erreur!\n\t  Le mois 2 ne contient pas plus de 29 jours.\n");
	system("pause>nul");
	system("cls");
	goto start;
	}
		
//Déterminer si l'annéee est bissextile
	if (annee%4 != 0) {
		annee_biss = 0 ;
	} else if (annee%100 !=0) {
		annee_biss = 1 ;
	} else if (annee%400 !=0) {
		annee_biss = 0 ;
	} else {
		annee_biss = 1 ;
	}
	
//Déterminer le dernier jour du mois
    switch (mois) {
    	case 1: case 3: case 5: case 7: case 8: case 10: case 12: {
    		jour_max = 31 ;
			break;
		}
    	case 4: case 6: case 9: case 11: {
    		jour_max = 30 ;
			break;
		}
    	case 2: {
    		if (annee_biss == 1) {
    			jour_max = 29 ;
			} else if (annee_biss == 0) {
				jour_max = 28 ;
			}
			break;
		}
	}

//Déterminer la date du jour suivant
    if (jour == jour_max) {
    	j_suiv = 1 ;
    	if (mois == 12) {
    		m_suiv = 1 ;
    		a_suiv = annee + 1 ;
		} else {
			m_suiv = mois + 1 ;
    	    a_suiv = annee ;
		}	
	} else {
		j_suiv = jour + 1 ;
		m_suiv = mois ;
		a_suiv = annee ;
	}
	
//Afficher la date du jour suivant	
	printf("\n  La date du lendemain est:\n  \n\t%d / %d / %d\n", j_suiv,m_suiv,a_suiv);	
} else {
	printf("\n\t  Erreur!\n\t  Donnees non valides.\n");
}
	printf("\n -----------------------------------------\n");
system("pause>nul");
system("cls");
goto start;
}
