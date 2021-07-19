//Répartiteur de sommes d'argents
#include<stdio.h>
main()
{
	int s,b200,b100,b50,b20,p10,p5,p1;
	printf("Répartiteur de sommes d'argents: \n\n");
	printf("Entrez une somme d'argents (en DH): ");
	scanf("%d", &s);
	
	b200 = s / 200 ;
	b100 = (s%200) / 100 ;
	b50 = ((s%200)%100) / 50 ;
	b20 = (((s%200)%100)%50) / 20 ;
	p10 = ((((s%200)%100)%50)%20) / 10 ;
	p5 = (((((s%200)%100)%50)%20)%10) / 5 ;
	p1 = (((((s%200)%100)%50)%20)%10) % 5 ; //
	
	printf("\n%d DH = \n\t%d billet de 200DH.\n\t%d billet de 100DH.\n\t%d billet de 50DH.\n\t%d billet de 20DH.\n\t%d piece de 10DH.\n\t%d piece de 5DH\n\t%d piece de 1DH.\n", s,b200,b100,b50,b20,p10,p5,p1);
}
