//Etat de l'eau (Version alternatif) avec effet d'altérnance en température de changement d'états
#include<stdio.h>
main()
{
	float T;
	int i=0 ;
	start:
	printf("{ Etat de l'eau }\n");
	printf("\n\tEntrez la temperature de l'eau: ");
	scanf("%f", &T);
	printf("\nEtat: ");
	
	if (T==0) {
		while (i<=1000) {
		if (i%2 == 0) {
			printf("\rEtat: \tSolide (Glace)\r");
		} else {
			printf("\rEtat: \tLiquide (Eau) \r");
		}
		sleep(1);
		i++;
	}
	} else if (T==100) {
		while (i<=1000) {
		if (i%2 == 0) {
			printf("\rEtat: \tGaz (Vapeur) \r");
		} else {
			printf("\rEtat: \tLiquide (Eau)\r");
		}
		sleep(1);
		i++;
	}
	} else if (T<0) {
		printf("\tSolide (Glace)\n");
	} else if (T<100) {
		printf("\tLiquide (Eau)\n");
	} else {
		printf("\tGaz (Vapeur)\n");
	}

system("pause>nul");
system("cls");
goto start;
return 0;
}
