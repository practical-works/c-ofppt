//________________________________________________________________________________
//Signe du produit de deux nombre (Sans calcul de produit)
#include<stdio.h>
main()
{
	printf("");
	printf("***********************************************\n");
	printf("Signe du produit de deux nombres\n");
	printf("***********************************************\n");
	float a,b ;
	int sa=0, sb=0;
	printf("Entrez le premier nombre: ");
	scanf("%f", &a);
	printf("Entrez le deuxième nombre: ");
	scanf("%f", &b);
	printf("");
	printf("-----------------------------------------------\n");
//________________________________________________________________________________

    if (a != 0 && b != 0) {
    	if (a > 0) {
    		sa = +1;
		} else {
			sa = -1;
		}
		if (b > 0) {
			sb = +1;
		} else {
			sb = -1;
		}
	} else {
		sa = 0;
		sb = 0;
	}

//________________________________________________________________________________
	if (sa==0 & sb==0) {
		printf("Le produit n'a pas de signe (0).");
	} else if (sa==sb) {
		printf("Le produit est de signe positif (+).");
	} else {
		printf("Le produit est de signe négatif (-).");
	}
	printf("\n");
	printf("\n");
	printf("\n");
	system("pause");
}
//________________________________________________________________________________
