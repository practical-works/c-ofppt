//Op�rations arithm�tiques
#include<stdio.h>
main()
{
	printf("Op�rations arithm�tiques sur deux nombres entiers:\n");
	printf("--------------------------------\n");
	int a,b,S,So,M,D;
	printf("Entrez le premier nombre: ");
	scanf("%d",&a);
	printf("Entrez le deuxi�me nombre: ");
	scanf("%d",&b);
	printf("--------------------------------\n");
	S=a+b;
	So=a-b;
	M=a*b;
	D=a/b;
	printf("Somme: %d\nDiff�rence: %d\nMultipliant: %d\nQuotient: %d\n", S,So,M,D);
	printf("--------------------------------\n");
	system("pause");
}
