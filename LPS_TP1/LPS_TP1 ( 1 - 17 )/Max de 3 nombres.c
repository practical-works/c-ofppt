//Max de 3 nombres
#include<stdio.h>
main()
{
	printf("--------------------------\n");
	printf("Max de 3 nombres\n");
	printf("--------------------------\n");
	printf("\n");
	float a,b,c, m,max;
	
	printf("Entrez le premier nombre: ");
	scanf("%f",&a);
	printf("Entrez le deuxième nombre: ");
    scanf("%f",&b);
    printf("Entrez le troisième nombre: ");
	scanf("%f",&c);
	
	if (a > b) {
		m = a ;
	} else {
		m = b ;
	}
	
	if (m > c) {
		max = m ;
	} else {
		max = c ;
	}
	
	printf("\n");
	printf("\n");
	printf("Le Maximum est: %f", max);
	printf("\n");
	printf("\n");
	system("pause");
	
}
