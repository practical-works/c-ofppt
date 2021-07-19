//Carré d'un nombre
#include<stdio.h>
main()
{
	printf("Carré d'un nombre réel:\n");
	printf("--------------------------------\n");
	float x,X;
	printf("Entrez le nombre: ");
	scanf("%f",&x);
	printf("--------------------------------\n");
	X=x*x;
	printf("Le carré de %f est: %f\n", x,X);
	printf("--------------------------------\n");
	system("pause");
}
