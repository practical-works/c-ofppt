/*  Nom: Montant du timbre d’une lettre
	Description: Affiche à partir du poids d'une lettre,
	le montant du timbre necessaire a son affranchissement. 
	     P <= 20 (gr) : 0,46 euros
	     20 < P <= 50 (gr) : 0,69 euros
	     50 < P <= 100 (gr) : 1,02 euros
	     P > 100 (gr) : 1,75 euros
------------------------------------------------------------------------- */
#include<stdio.h>
main()
{
	printf("--------------------------------\n");
	printf("Montant du timbre d'une lettre\n");
	printf("--------------------------------\n");
	float P;
	printf("\n");
	printf("Entrez le poids de la lettre (en grammes): ");
	scanf("%f",&P);
	printf("\n");
	
	if (P<=20)
	{
		printf("Le montant est de: 0,46 euros");
	}
	
	if (P>20 && P<=50)
	{
			printf("Le montant est de: 0,69 euros");
	}
	
	if (P>50 && P<=100)
	{
			printf("Le montant est de: 1,02 euros");
	}
	
	if (P>100)
	{
		printf("Le montant est de: 1,75 euros");
	}
	
	printf("\n");
	printf("\n");
	printf("--------------------------------\n");
	system("pause");
}
