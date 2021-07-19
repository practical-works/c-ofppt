/* Exercice 1 : Informations d’un stagiaire
Définir une structure Stagiaire (Matricule, Nom, Prenom, Age), lire et afficher les informations d’un stagiaire.
Ajouter à la structure stagiaire, la date de naissance du stagiaire (Jour, Mois, Annee). 
Modifier l’algorithme pour lire et afficher les nouvelles informations d’un stagiaire. */
#include<stdio.h>
#include<string.h>
struct stagiaire {
	int mat, age;
	char nom[100], prenom[100];
	int jour, mois, an;
} S ;

main()
{
	//struct stagiaire S;
	start:
	printf("Informations d'un stagiaire\n\n");
	printf("Matricule: ");
	scanf("%d", &S.mat);
	printf("Nom: ");
	fflush(stdin);
	gets(S.nom);
	printf("Prenom: ");
	gets(S.prenom);
	printf("Age: ");
	scanf("%d", &S.age);
	
	printf("Date de naissance:\n");
	printf("Jour: ");
	scanf("%d", &S.jour);
	printf("Mois: ");
	scanf("%d", &S.mois);
	printf("Annee: ");
	scanf("%d", &S.an);
	
	printf("\nApercu des informations:\n\n");
	printf("\t#%d\t%s %s\t%d/%d/%d (%d ans)\n", S.mat,S.nom,S.prenom,S.jour,S.mois,S.an,S.age);
	
system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;

}
