//Cube d'un nombre
#include<stdio.h>
main()
{
	printf("Cube d'un nombre réel:\n");
	printf("--------------------------------\n");
	float x,X;
	printf("Entrez le nombre: ");
	scanf("%f",&x);
	printf("--------------------------------\n");
	X=x*x*x;
	printf("Le cube de %f est: %f\n", x,X);
	printf("--------------------------------\n");
	system("pause");
}
