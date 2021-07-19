/*
	Nom: Test et comparaison 
	Description: Lit 3 nombres et teste si l’un de ces derniers est égal à la somme des deux autres. 
	Si un tel nombre existe on l’affiche, sinon on affiche un message.
*/
#include<stdio.h>
main()
{
	printf("Test de 3 nombres et comparaison\n");
	printf("\n"); 
	float a,b,c;  //a+b=c? a+c=b? b+c=a?
	printf("Entrez le 1er nombre: ");
	scanf("%f",&a);
	printf("Entrez le 2eme nombre: ");
	scanf("%f",&b);
	printf("Entrez le 3eme nombre: ");
	scanf("%f",&c);
	
	printf("\n");
	
	if (a==b+c)
	{
	printf("%f est la somme de %f et %f", a,b,c);
	}
	else if (b==a+c)
	{
	printf("%f est la somme de %f et %f", b,a,c);
	}
	else if (c==a+b)
	{
	printf("%f est la somme de %f et %f", c,a,b);	
	}
	else
	{
	printf("\nAucune relation de somme trouvée entre les nombres");
	}

    printf("\n"); 
	printf("\n"); 
	system("pause");
	printf("\n"); 
}
