#include<stdio.h>
main()
{
	int i,n;
	float K;
	start:
	printf("Produit de fractions successives\n\n");
	do {
		printf("Entrez un entier postitif: ");
		scanf("%d",&n);
	} while (n<=0);
	K=1;
	printf("K = ");
	for (i=1; i<=n; i++) {
		K = K*(1/(float)i);
		printf("1/%d", i);
		if (i == n) {
			printf(" = %f", K);
		} else {
			printf(" * ");
		}
	}
system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;
}
