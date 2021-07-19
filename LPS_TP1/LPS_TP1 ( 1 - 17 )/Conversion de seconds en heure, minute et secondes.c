/*
	Name: Conversion de secondes en heure, minute et secondes
	Description: Convertit un nombre de secondes (entier seconde) en un nombre d’heure, de minutes et de seconds équivalents.
	X sec = H hrs + M min + S sec
	H = Entier(X/3600)
	M = Entier(R/60)   |Avcec: R=X-(H*3600)
	S = R-(M*60)
*/
#include<stdio.h>
main()
{
	printf("______________________________________________________________\n");
	printf("Converteur de secondes en format: heures : minutes : secondes\n");
	printf("--------------------------------------------------------------\n");
	int X, H, M, S, R;
	printf("\n");
	printf("Entrez le nombre de secondes: ");
	scanf("%d",&X);
	H=X/3600;
	R=X-(H*3600);
	M=R/60;
	S=R-(M*60);
	printf("--------------------------------------------------------------\n");
	printf("\n");
	printf("%d secondes = %d heures : %d minutes : %d secondes", X,H,M,S);
	printf("\n");
	system("pause");
}
