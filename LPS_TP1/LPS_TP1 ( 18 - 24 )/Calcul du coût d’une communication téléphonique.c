/*  Nom: Calcul du coût d’une communication téléphonique
    Description: Calculer le coût d’une communication téléphonique en fonction de la durée selon les règles suivantes :
    
         - 1 unit = 20 sec.
         - 1 unit price = 1,40 DH (3 first minutes = first 180 sec)
         - 1 unit price = 1,20 DH (next)
         - (1st: minute) price = (1st: 60-i secondes) price ; with i = {0,1,2, ... ,60} */ 
//---------------------------------------------------------------------------------------------------------------------------   
//     temp_appel = (nbr_min*60) + nbr_sec    //(en secondes)
//     nbr_unit = temp_appel/unit    //(unit = 20 sec)  
//     cout_3min = 12,6 DH  //(cout_3min = 180/20 * 1,40 = 9*1,40 = 12,6)
//     cout_next = nbr_unit * prix_unit + rest_sec //(rest_sec = 0 si: temp_appel%unit=0 , sinon: rest_sec = 1,20)
//     cout_appel = cout_3min + cout_next
//--------------------------------------------------------------------------------------------------------------------------- 
#include<stdio.h>
int main()
{
	int nbr_min, nbr_sec, temp_appel, unit=20 ;
	float nbr_unit, prix_unit, cout_min, rest_sec, cout_appel ;
	
	start:
	printf("===========================================================\n");
	printf("Calcul du cout d’une communication par appel telephonique\n");
	printf("===========================================================\n");
	printf("\nEntrez la duree de l'appel (en minutes et secondes):\n");
	printf("___________________________________________________________\n");
	printf("\n\tMinutes: ");
	scanf("%d", &nbr_min);
	printf("\tSecondes: ");
	scanf("%d", &nbr_sec);
//---------------------------------------------------------------------------------------------------------------------------	

//---------------------------------------------------------------------------------------------------------------------------	
	temp_appel = (nbr_min*60)+nbr_sec ;
	nbr_unit = temp_appel/unit ;
	rest_sec = temp_appel%unit ;
	cout_min = (60/unit)*1.40 ;
//---------------------------------------------------------------------------------------------------------------------------	
	if (temp_appel == 0) { cout_appel = 0; } else
//---------------------------------------------------------------------------------------------------------------------------	
	if (temp_appel <= 60) {
		cout_appel = cout_min ;
	} else if (temp_appel <= 180) {
		prix_unit = 1.40 ;
		if (rest_sec != 0) { rest_sec = prix_unit; }
		cout_appel = nbr_unit*prix_unit + rest_sec ;
		
	} else {
		prix_unit = 1.20 ;
		temp_appel = temp_appel - 180 ;
		nbr_unit = temp_appel/unit ;
	    rest_sec = temp_appel%unit ;
		if (rest_sec != 0) { rest_sec = prix_unit; };
		cout_appel = nbr_unit*prix_unit + rest_sec ;
		cout_appel = cout_appel + 3*cout_min ;
	}

//---------------------------------------------------------------------------------------------------------------------------
	printf("___________________________________________________________\n");
	printf("\n\tLe cout de l'appel est: %.2f DH\n", cout_appel);
	printf("___________________________________________________________\n");
	system("pause>nul");
	system("cls");
	goto start;
	return 0;
}
//---------------------------------------------------------------------------------------------------------------------------
