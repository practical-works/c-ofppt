//Calcul des salaires brut et net d’un employé
#include<stdio.h>
main()
{
	printf("Calcul des salaires brut et net d’un employé:\n");
	float Sal_brt,Sal_net, Sal_hrs_brt,Nbr_hrs, charge;
	float taux_impo=0.25;
	printf("Entrez le nombre d'heures de travail par mois: ");
	scanf("%f",&Nbr_hrs);
	printf("Entrez le salaire horaire brut (en DH): ");
	scanf("%f",&Sal_hrs_brt);
	Sal_brt=Sal_hrs_brt*Nbr_hrs;
	charge=Sal_brt*taux_impo;
	Sal_net=Sal_brt-charge;
	printf("Le salaire brut est: %f DH.\nLe salaire net est: %f DH.\n", Sal_brt, Sal_net);
	system("pause");
}
