/* Nom: Montant de participation au prix du repas des employ�s
   Description: Un patron d�cide de calculer le montant de sa participation au prix du repas 
   de ses employ�s de la fa�on suivante :
   ~ Salari� c�libataire : 20%
   ~ Salari� mari� : 25%  (+10% par enfant)
   ~ Salaire mensuel inf�rieur � 5000 DH : Participation major�e de 10%
   /@\ La participation est plafonn�e � 50%
   Afficher (depuis les information entr�es) le montant de la participation (%) � laquelle a droit le salari�.
   */
#include<stdio.h>
main()
{
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("Montant de participation au prix du repas des employes\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	float P, S, M; //Particiapation (P), Salaire mensuel (S), Majoration (M)
	int C, E ; //Choix C�libataire (1) ou mari� (2), Enfants (E)
	printf("Entrez le salaire mensuel du salariee (en DH): ");
	scanf("%f", &S);
	printf("___________________________________________________________\n");
	printf("\nEntrez l'etat du salarie:\n");
	printf("\t1. Celibataire (Tapez 1)\n");
	printf("\t2. Mari� (Tapez 2)\n");
	printf("Choix: ");
	scanf("%d", &C);
	printf("___________________________________________________________\n");
	if (S<5000) {
		M = 0.1 ;    // Participation major�e de 10% | P + 0.1*P
	} else {
		M = 0 ;
	}
	switch (C) {
		case 1: //C�libataire
		P = 20; // 20%
		P = P + (M*P) ;
		if (P>50) { P = 50 ; }
		printf("\nLe montant de la participation est de: %.2f %%\n", P);
		break;
		
		case 2: //Mari�
		P = 25; // 25%
		printf("\nEntrez le nombre d'enfants: ");
	    scanf("%d", &E);
	    printf("___________________________________________________________\n");
	    P = P + E*10 ;
		P = P + (M*P) ;
		if (P>50) { P = 50 ; }
		printf("\nLe montant de la participation est de: %.2f %%\n", P);
		break;
		
		default: printf("\nErreur! Choix non valide.\n");
	}
	
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	system("pause");
}

