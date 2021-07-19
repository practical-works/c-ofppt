/*
	Nom: Calcul de la moyenne et affichage de la mention
	Description: Lire trois notes (a,b,c) à partir du clavier, calculer et afficher la moyenne (M) de ces notes. 
	En fin, il affiche la mention (Mnt) correspondante : 
	   • Mnt=Bien si M>12.
       • Mnt=Passable si 10<M<12.
       • Mnt=‘Non admis’ si M<10.
*/
#include<stdio.h>
main()
{
	printf("Calcul de la moyenne de trois notes et affichage de la mention\n");
	float a,b,c, M;
	printf("Entrez la première note: ");
	scanf("%f", &a);
	printf("Entrez la deuxième note: ");
	scanf("%f", &b);
	printf("Entrez la troisième note: ");
	scanf("%f", &c);
	M=(a+b+c)/3;
	printf("Note moyenne: %.2f\nMentien: ",M);
	if (M>=12) 
		printf("Bien\n");
	if (M<12) 
	{
	   if (M>=10)
	   		printf("Passable\n");
	   if (M<10) 
	   		printf("Non admis\n");
	}
	printf("\n");
	system("pause");
}

