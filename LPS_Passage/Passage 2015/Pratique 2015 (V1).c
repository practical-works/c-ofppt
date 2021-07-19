// Gestion de l’ensemble des routes nationales au Maroc
#include<stdio.h>
#include<stdlib.h>
#include "route1.h"   // Fichier contenant les structures/fonctions nécessaires
main()
{
	system("title Gestion des routes nationales"); system("color f0");
	struct RouteN les_routes[100]; 
	int C, N=0;
	start: titre(); menu(&C);
	switch(C) {
		case 1: system("cls"); titre(); ajouter(les_routes,&N); 	break; 
		case 2: system("cls"); titre(); afficher(les_routes,N); 	break;
		case 3: system("cls"); titre(); chercher(les_routes,N); 	break;
		case 4: system("cls"); titre(); supprimer(les_routes,&N); 	break;
		case 5: system("cls"); titre(); sauver(les_routes,N); 		break;
		case 6: system("cls"); titre(); quitter(); 					break;
		default: invalid();
	}
	system("pause>nul"); system("cls"); goto start;
}
