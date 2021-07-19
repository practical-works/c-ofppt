#include<stdio.h>
#include<stdlib.h>
#include "student.h"    // Fichier contenant les fonctions utilisée
main()                                                                         /* Mis à jour le 08-12-15 11:45 */
{
	system("title Liste d'étudiants"); system("color 17");     // Interface de la console
	struct etudiant E[100];     // Liste d'étudiants (E)
	int C, N;                  // Choix dans le menu (C), Taille de la liste d'étudiants (N)
	start:
	titre_program(); afficher_list(E,N); menu_program(&C);     // Interface du programme
	switch (C) {                                                           // Menu de choix
		case 1:  system("cls"); titre_program(); lire_list(E,&N); break;   // 1. NOUVELLE LISTE
		case 2:  system("cls"); titre_program(); top_moy(E,N);    break;   // 2. MEILLEUR MOYENNE
		case 3:  system("cls"); titre_program(); mention(E,N);    break;   // 3. MENTION
		case 4:  system("cls"); titre_program(); rechercher(E,N); break;   // 4. RECHERCHER
		case 5:  system("cls"); titre_program(); ajouter(E,&N);   break;   // 5. AJOUTER  
		case 6:  system("cls"); titre_program(); supprimer(E,&N); break;   // 6. SUPPRIMER
		case 7:  system("cls"); titre_program(); tri_alpha(E,N);  break;   // 7. TRI PAR ALPHABET 
		case 8:  system("cls"); titre_program(); tri_moy(E,N);    break;   // 8. TRI PAR MOYENNE
		case 9:  system("cls"); titre_program(); sauver(E,N);     break;   // 9. SAUVEER LISTE
		case 10: system("cls"); titre_program(); charger(E,&N);   break;   // 10. CHARGER LISTE
		default: printf("\n\tChoix invalide!\n");                 break;   // <AUTRE CHOIX>
	}
	system("pause>nul"); system("cls"); fflush(stdin); goto start; return 0; //Opérations utiles de finalisation
}
