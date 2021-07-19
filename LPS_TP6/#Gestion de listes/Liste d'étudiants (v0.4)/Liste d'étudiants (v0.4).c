#include<stdio.h>
#include<stdlib.h>
#include "student.h"  // Fichier contenant les fonctions utilisées
main()               
{
	system("title Liste d'étudiants"); system("color 4f");  // Interface de la console
	struct etudiant E[100];  // Liste d'étudiants (E)
	int C, N=0;  // Choix dans le menu (C), Taille de la liste d'étudiants (N)
	start:
	titre_program(); afficher_list(E,N); menu_program(&C);                // Interface du programme
	switch (C) {                                                          // Menu de choix
		case 1:  system("cls"); titre_program(); lire_list(E,&N); break;  // 1. NOUVELLE LISTE
		case 2:  system("cls"); titre_program(); top_moy(E,N);    break;  // 2. MEILLEUR MOYENNE
		case 3:  system("cls"); titre_program(); mention(E,N);    break;  // 3. MENTION
		case 4:  system("cls"); titre_program(); rechercher(E,N); break;  // 4. RECHERCHER
		case 5:  system("cls"); titre_program(); ajouter(E,&N);   break;  // 5. AJOUTER
		case 6:  system("cls"); titre_program(); modifier(E,N);   break;  // 6. MODIFIER
		case 7:  system("cls"); titre_program(); supprimer(E,&N); break;  // 7. SUPPRIMER
		case 8:  system("cls"); titre_program(); tri_alpha(E,N);  break;  // 8. TRI PAR ALPHABET 
		case 9:  system("cls"); titre_program(); tri_moy(E,N);    break;  // 9. TRI PAR MOYENNE
		case 10: system("cls"); titre_program(); sauver(E,N);     break;  // 10. SAUVEER LISTE
		case 11: system("cls"); titre_program(); charger(E,&N);   break;  // 11. CHARGER LISTE
		case 12: exit(0);   											  // 12. QUITTER
		default: choix_invalide();                                        // <AUTRE CHOIX>
	}	system("pause>nul"); system("cls"); fflush(stdin); goto start;    // Opérations de redémarrage	
}	                                                                      // Mis à jour le 15-12-15 16:50 
