/* Exercice 2 : Informations d'un étudiant
Ecrire un algorithme qui permet de lire les informations d’un étudiant (nom, prenom, 3 notes) et calculer la moyenne des notes.
Afficher les informations de l’étudiant de la forme suivante : « La moyenne de Ali Benali est 15 » */
#include<stdio.h>
#include<string.h>
struct etudiant {
	char nom[100], prenom[100];
	float note_1, note_2, note_3;
};
main()
{
	struct etudiant E;
	float moy;
	start:
	printf("Informations d'un etudiant\n\n");
	printf("\tNom: ");
	gets(E.nom);
	printf("\tPrenom: ");
	gets(E.prenom);
	printf("\tNote 1: ");
	scanf("%f", &E.note_1);
	printf("\tNote 2: ");
	scanf("%f", &E.note_2);
	printf("\tNote 3: ");
	scanf("%f", &E.note_3);
	moy = (E.note_1+E.note_2+E.note_3)/3;
	printf("\n{ La moyenne de %s %s est %.2f }\n", E.prenom,E.nom,moy);
	
system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;
}
