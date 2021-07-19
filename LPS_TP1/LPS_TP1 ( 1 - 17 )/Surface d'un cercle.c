//Surface d'un cercle
#include<stdio.h>
main()
{
	float R,S;
	printf("Surface d'un cercle de rayon R:\n");
	printf("********************************\n");
	printf("Entrez le rayon R: ");
	scanf("%f",&R);
	S=R*R*3,14;
	printf("La surface du cercle est: %f\n", S);
	printf("********************************\n");
	system("pause");
}
