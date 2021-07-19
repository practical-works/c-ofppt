/* Nom: Montant de participation au prix du repas des employés
   Description: Un patron décide de calculer le montant de sa participation au prix du repas 
   de ses employés de la façon suivante :
   ~ Salarié célibataire : 20%
   ~ Salarié marié : 25%  (+10% par enfant)
   ~ Salaire mensuel inférieur à 5000 DH : Participation majorée de 10%
   /@\ La participation est plafonnée à 50%
   Afficher (depuis les information entrées) le montant de la participation (%) à laquelle a droit le salarié.
   */
#include<stdio.h>
main()
{
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("Montant de participation au prix du repas des employes\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	float P, S, M; //Particiapation (P), Salaire mensuel (S), Majoration (M)
	int C, E ; //Choix Célibataire (1) ou marié (2), Enfants (E)
	printf("Entrez le salaire mensuel du salariee (en DH): ");
	scanf("%f", &S);
	printf("___________________________________________________________\n");
	printf("\nEntrez l'etat du salarie:\n");
	printf("\t1. Celibataire (Tapez 1)\n");
	printf("\t2. Marié (Tapez 2)\n");
	printf("Choix: ");
	scanf("%d", &C);
	printf("___________________________________________________________\n");
	if (S<5000) {
		M = 0.1 ;    // Participation majorée de 10% | P + 0.1*P
	} else {
		M = 0 ;
	}
	switch (C) {
		case 1: //Célibataire
		P = 20; // 20%
		P = P + (M*P) ;
		if (P>50) { P = 50 ; }
		printf("\nLe montant de la participation est de: %.2f %%\n", P);
		break;
		
		case 2: //Marié
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

