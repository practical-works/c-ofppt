//Opérations arithmétiques
#include<stdio.h>
main()
{
	printf("Opérations arithmétiques sur deux nombres entiers:\n");
	printf("--------------------------------\n");
	int a,b,S,So,M,D;
	printf("Entrez le premier nombre: ");
	scanf("%d",&a);
	printf("Entrez le deuxième nombre: ");
	scanf("%d",&b);
	printf("--------------------------------\n");
	S=a+b;
	So=a-b;
	M=a*b;
	D=a/b;
	printf("Somme: %d\nDifférence: %d\nMultipliant: %d\nQuotient: %d\n", S,So,M,D);
	printf("--------------------------------\n");
	system("pause");
}
