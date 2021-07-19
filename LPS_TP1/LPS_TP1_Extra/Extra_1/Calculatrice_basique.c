/* Nom: Calculatrice basique
   Description: Applique au choix l'une des quatres opérations basiques (+,-,*,/) sur deux entiers. */

#include<stdio.h>
#include<string.h>
main()
{
	int a,b, som, dif, prod;
	float div;
	char choix[1];
	
	start:
	printf("-------------------------\n");
	printf("Calculatrice basique\n");
	printf("-------------------------\n");
	
    printf("Entrez deux entiers:\n");
	
	printf("\n\tPremier nombre: ");
	scanf("%d", &a);
	printf("\tDeuxieme nombre: ");
	scanf("%d", &b);
	printf("_________________________\n");
	som = a+b ;
	dif = a-b ;
	prod = a*b ;
	div = (float)a/b ;
	
	printf("\n\tChoisissez l'operation:\n");
	printf("\t\tTapez + pour la somme.\n\t\tTapez - pour la difference.\n\t\tTapez * pour le produit.\n\t\tTapez / pour le quotient.\n");
	printf("Choix: ");
	scanf("%s", choix);
	printf("_________________________\n");
	printf("\n\tResultat:\n\t");
	
		if      (strcmp(choix,"+") == 0) {printf("Somme: %d", som);}
		else if (strcmp(choix,"-") == 0) {printf("Difference: %d", dif);}
		else if (strcmp(choix,"*") == 0) {printf("Produit: %d", prod);}
		else if (strcmp(choix,"/") == 0) {if (b==0) 
		                                    {printf("Quotient: /!\\ Resultat infini.");}
										  else 
										  {printf("Quotient: %.2f", div);} } 
		else {printf("Choix non valide."); system("cls"); goto start;}


system("pause>nul");
system("cls"); 
goto start;
return 0;
}
