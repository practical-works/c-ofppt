/*
	Name: Conversion de secondes en JOUR, heure, minute et secondes
	Description: lit un nombre de secondes (entier) au clavier et puis affiche cette durée en
	jours, heures, minutes et secondes au format suivant : x jours, x heures, x minutes et x secondes
	X sec = J jrs + H hrs + M min + S sec
	J = Entier(X/86400)
	H = Entier(R1/3600)   |Avcec: R1=X-(J*86400)
	M = Entier(R2/60)     |Avec: R2=R1-(H*3600)
	S = R2-(M*60)
	
*/
#include<stdio.h>
main()
{
	printf("_____________________________________________________________________\n");
	printf("Converteur de secondes en format: jours : heures : minutes : secondes\n");
	printf("---------------------------------------------------------------------\n");
	int X, J, H, M, S, R1,R2;
	printf("\n");
	printf("Entrez le nombre de secondes: ");
	scanf("%d",&X);
	J=X/86400;
	R1=X-(J*86400);
	H=R1/3600;
	R2=R1-(H*3600);
	M=R2/60;     
	S=R2-(M*60);
	printf("---------------------------------------------------------------------\n");
	printf("\n");
	printf("%d secondes = %d jours : %d heures : %d minutes : %d secondes", X,J,H,M,S);
	printf("\n");
	system("pause");
}
