/* Nom: Etat de l'eau
   Description: Affiche l'état de l'eau à partir de sa température.
    T < 0 : Glace.
    0 < T < 100 : Eau liquide.
    T > 100 : Vapeur.    */
#include<stdio.h>
main()
{
	float T; 
	start:
	printf("{ Etat de l'eau }\n");
	printf("\n\tEntrez la temperature de l'eau: ");
	scanf("%f", &T);
	printf("\nEtat: ");
	
	if (T==0) {
		printf("En changement ... (Solidification de l'eau ou Fusion de la glace)\n");
	} else if (T==100) {
		printf("En changement ... (Vaporisation de l'eau ou Liquéfaction de la vapeur)\n");
	} else if (T<0) {
		printf("Solide (Glace)\n");
	} else if (T<100) {
		printf("Liquide (Eau)\n");
	} else {
		printf("Gaz (Vapeur)\n");
	}

system("pause>nul");
system("cls");
goto start;
return 0;
}
