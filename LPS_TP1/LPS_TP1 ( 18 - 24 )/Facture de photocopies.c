/*  Nom: Facture de photocopies
	Description: Un magasin de reprographie facture :
	0,10 DH les dix premières photocopies. 
	0,09 DH les vingt suivantes.
	0,08 DH au-delà.
    Le programme demande à l’utilisateur le nombre de photocopies effectuées 
	et lui affiche la facture correspondante. */
#include<stdio.h>
main()
{
	printf("*********************************************\n");
	printf("Facture de photocopies\n");
	printf("*********************************************\n");
	int n ;
	float p ;
	printf("\nEntrez le nombre de photocopies effectueess: ");
	scanf("%d", &n);
	printf("_____________________________________________\n");
	if (n <= 10) {
		p = n*0.10 ;
		printf("\nFacture: %.2f DH", p);
	} else if (n <= 20) {
		n = n-10 ;
		p = n*0.09 ;
		p = p + 0.10*10 ;
		printf("\nFacture: %.2f DH", p);
	} else {
		n = n-20 ;
		p = n*0.08 ;
		p = p + 0.09*20 ;
		printf("\nFacture: %.2f DH", p);
	}
	
    printf("\n");
    printf("\n");
    printf("*********************************************\n");
	system("pause");
}

