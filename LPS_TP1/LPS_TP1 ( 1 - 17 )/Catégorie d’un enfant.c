/*
	Nom: Cat�gorie d�un enfant
	Description: Demande l��ge d�un enfant � l�utilisateur. Ensuite, il l�informe de sa cat�gorie :
	� � Poussin � de 6 � 7 ans
    � � Pupille � de 8 � 9 ans
    � � Minime � de 10 � 11 ans
    � � Cadet � apr�s 12 ans
--------------------------------------------------------------   
*/
#include<stdio.h>
main()
{
	printf("--------------------------------\n");
	printf("Cat�gorie d'�ge d�un enfant\n");
	printf("--------------------------------\n");
	float A;
	printf("Entrez l'�ge de l'enfant: ");
	scanf("%f",&A);
//--------------------------------------------------------------
	if (A<6 || A>=18)
	{
	printf("\n");
	printf("Veuillez entrer un �ge entre 6 et 17 ans ^_^");
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
