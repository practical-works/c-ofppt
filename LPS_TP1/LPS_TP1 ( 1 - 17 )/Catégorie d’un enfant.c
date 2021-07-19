/*
	Nom: Catégorie d’un enfant
	Description: Demande l’âge d’un enfant à l’utilisateur. Ensuite, il l’informe de sa catégorie :
	• « Poussin » de 6 à 7 ans
    • « Pupille » de 8 à 9 ans
    • « Minime » de 10 à 11 ans
    • « Cadet » après 12 ans
--------------------------------------------------------------   
*/
#include<stdio.h>
main()
{
	printf("--------------------------------\n");
	printf("Catégorie d'âge d’un enfant\n");
	printf("--------------------------------\n");
	float A;
	printf("Entrez l'âge de l'enfant: ");
	scanf("%f",&A);
//--------------------------------------------------------------
	if (A<6 || A>=18)
	{
	printf("\n");
	printf("Veuillez entrer un âge entre 6 et 17 ans ^_^");
	printf("\n");
	}
//--------------------------------------------------------------	
	if (A>=6 && A<=7)
	{
	printf("\n");
	printf("L'enfant est un Poussin.");
	printf("\n");
	}
//--------------------------------------------------------------	
	if (A>=8 && A<=9)
	{
	printf("\n");
	printf("L'enfant est un Pupille.");
	printf("\n");
	}	
//--------------------------------------------------------------	
	if (A>=10 && A<=11) 
	{
	printf("\n");
	printf("L'enfant est un Minime.");
	printf("\n");
	}
//--------------------------------------------------------------	
	if (A>=12 && A<18)  
	{
	printf("\n");
	printf("L'enfant est un Cadet.");
	printf("\n");
	}
	
	printf("\n");
	system("pause");
}
//--------------------------------------------------------------
