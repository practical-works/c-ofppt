#include<stdio.h>
#include<stdlib.h>
#include "student.h"
main()
{
	system("title Liste d'étudiants");
	system("color 17");
	struct etudiant E[100];    // Liste d'étudiants (E)
	int C, N;                 // choix dans le menu (C), Taille de la liste d'étudiants (N)
	start:
	titre_program();
	afficher_list(E,N);
	menu_program(&C);
	switch (C) {
		case 1: system("cls"); titre_program(); lire_list(E,&N); break;
		case 2: system("cls"); titre_program(); top_moy(E,N);    break;
		case 3: system("cls"); titre_program(); mention(E,N);    break;
		case 4: system("cls"); titre_program(); rechercher(E,N); break;
		case 5: system("cls"); titre_program(); ajouter(E,&N);   break;
		case 6: system("cls"); titre_program(); supprimer(E,&N); break;
		case 7: system("cls"); titre_program(); tri_alpha(E,N);  break;
		case 8: system("cls"); titre_program(); tri_moy(E,N);    break;
		default: printf("\n\tChoix invalide!\n");                break;
	}

system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;
}
