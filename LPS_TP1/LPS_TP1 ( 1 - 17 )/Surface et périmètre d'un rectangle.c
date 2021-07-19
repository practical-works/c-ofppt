//Surface et périmètre d'un rectangle
#include<stdio.h>
main()
{
	printf("================================\n");
	printf("Surface et périmètre d'un rectangle:\n");
	printf("================================\n");
	float l,L,S,P;
	printf("Entrez la largeur : ");
	scanf("%f",&l);
	printf("Entrez la longueur : ");
	scanf("%f",&L);
	S=l*L;
	P=2*(l+L);
	printf("________________________________\n");
	printf("La surface est: %f\nLe périmètre est: %f\n", S,P);
	printf("________________________________\n");
	system("pause");
}
