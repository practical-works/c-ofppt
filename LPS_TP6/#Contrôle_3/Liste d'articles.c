#include<stdio.h>
#include<stdlib.h>
#include "article.h"  // Fichier contenant les fonctions utilisées
main()               
{
	system("title Liste d'articles"); system("color 70");
	struct article A[100], PC;
	int C, N=0;
	start:
	PC = plusCher(A,N);
	titre_program(); afficher_list(A,N); menu_program(&C);                
	switch (C) {                                                          
		case 1:  system("cls"); titre_program(); lire_list(A,&N); 		break;  
		case 2:  system("cls"); titre_program(); afficher_list(A,N);    break; 
		case 3:  system("cls"); titre_program(); printf("\nArticle le plus cher:\n");
				 printf("\n #%d : %s\tPrix: %.2f DH\n", PC.code, 
				 PC.nom, PC.prix); break;   // Rempalcer ceci par une procédure réduira l'écriture ;)
		case 4:  system("cls"); titre_program(); rechercher(A,N); 		break;  
		case 5:  system("cls"); titre_program(); ajouter(A,&N);   		break;   
		case 6:  system("cls"); titre_program(); supprimer(A,&N); 		break;  
		case 7:  system("cls"); titre_program(); tri_prix(A,N);  		break;  
		case 8:  system("cls"); titre_program(); tri_nom(A,N);    		break;
		case 9:  system("cls"); titre_program(); sauver(A,N);    		break;
		case 10: system("cls"); titre_program(); charger(A,&N);    		break;
		case 11: exit(0);   											  
		default: choix_invalide();                                        
	}	system("pause>nul"); system("cls"); fflush(stdin); goto start;    	
}	                                                                      

