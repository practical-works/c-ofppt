/* Nom: Répartition d’une somme d’argents en billets et pièces
   Description: Pour une somme d'argent donnée, 
   répartir selon les billets et les pièces habituelles 
   (200DH, 100DH, 50DH, 20DH, 10DH, 5DH, 1DH). 
   On désire fournir le minimum de billets et de pièces. */
#include<stdio.h>
main()
{
	printf("**************************************************************\n");
	printf("Répartition d’une somme d’argents en billets et pièces\n");
	printf("**************************************************************\n");
	int S, _200,R_200, _100,R_100, _50,R_50, _20,R_20, _10,R_10, _5,R_5, _1 ;
	printf("\nEntrez une somme d'argent (en DH): ");
	scanf("%d", &S);
	_200 = S/200 ;
	R_200 = (int)S%200 ;
	_100 = R_200/100 ;
	R_100 = (int)R_200%100 ;
	_50 = R_100/50 ;
	R_50 = (int)R_100%50 ;
	_20 = R_50/20 ;
	R_20 = (int)R_50%20 ;
	_10 = R_20/10 ;
	R_10 = (int)R_20%10 ;
	_5 = R_10/5 ;
	_1 = (int)R_10%5 ;
	
	printf("\n%d DH se compose de:\n\n", S);
	printf("\t%d billets de 200 DH.\n", _200);
	printf("\t%d billets de 100 DH.\n", _100);
	printf("\t%d billets de 50 DH.\n", _50);
	printf("\t%d billets de 20 DH.\n", _20);
	printf("\t%d pieces de 10 DH.\n", _10);
	printf("\t%d pieces de 5 DH.\n", _5);
	printf("\t%d pieces de 1 DH.\n", _1);
	
	printf("\n");
	printf("**************************************************************\n");
	system("pause");
}
