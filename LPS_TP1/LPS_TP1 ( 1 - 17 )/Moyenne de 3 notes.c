//Moyenne de 3 notes
#include<stdio.h>
main()
{
	printf("Moyenne de trois notes:\n");
	printf("--------------------------------\n");
	float a,b,c,M;
	printf("Entrez la note 1: ");
	scanf("%f",&a);
	printf("Entrez la note 2: ");
	scanf("%f",&b);
	printf("Entrez la note 3: ");
	scanf("%f",&c);
	printf("--------------------------------\n");
	M=(a+b+c)/3;
	printf("La note moyenne est: %f\n", M);
	printf("--------------------------------\n");
}
