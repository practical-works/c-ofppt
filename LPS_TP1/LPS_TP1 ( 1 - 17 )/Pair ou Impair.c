//Nombre Pair ou Impair (Pair: n=2p (n/2 = p) | Impair: n=2p+1 (n/2 = p + 1/2)
#include<stdio.h>
main()
{
	printf("**************************\n");
	printf("Déterminer si un nombre entier est pair ou impair\n");
	printf("**************************\n");
	printf("\n");
	
	int n , q, r ;
	printf("Entrez un nombre entier: ");
	scanf("%d", &n);
	q = n/2 ;
	r = n%2 ;
	
	printf("-------------------------\n");
	printf("\n");
	
	if (r==0) {
		printf("Le nombre %d est pair.\nSa moitié est %d.\n", n,q);
	} else {
		printf("Le nombre %d est impair.\nIl en reste %d de sa division en deux d'un quotient de %d.\n", n,r,q);
	}	
	
    printf("\n");
	printf("-------------------------\n");
	printf("\n");
	system("pause");
}
