/* Nom: Etat de l'eau
   Description: Affiche l'�tat de l'eau � partir de sa temp�rature.
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
		printf("En changement ... (Vaporisation de l'eau ou Liqu�faction de la vapeur)\n");
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
