//Carr� d'un nombre
#include<stdio.h>
main()
{
	printf("Carr� d'un nombre r�el:\n");
	printf("--------------------------------\n");
	float x,X;
	printf("Entrez le nombre: ");
	scanf("%f",&x);
	printf("--------------------------------\n");
	X=x*x;
	printf("Le carr� de %f est: %f\n", x,X);
	printf("--------------------------------\n");
	system("pause");
}
