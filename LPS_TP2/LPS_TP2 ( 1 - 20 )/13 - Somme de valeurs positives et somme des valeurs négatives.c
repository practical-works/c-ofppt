/* Exercice 13: Somme des valeurs positives et somme des valeurs négatives
Ecrire un programme qui lit un nombre quelconque de valeurs entières en déterminant la somme des valeurs positives 
et la somme des valeurs négatives. On fait l’hypothèse qu’aucune de ces valeurs ne peut être nulle et que l’utilisateur 
introduira la valeur 0 pour signaler qu’il n’a plus de valeurs à fournir.*/
#include<stdio.h>
main()
{
	int x, sp=0, sn=0;
	
	start:
	printf("Somme des valeurs positives et somme des valeurs negatives\n\n");
	do {
		printf("Entrez un entier: ");
		scanf("%d", &x);
		if (x>0) {
			sp = sp + x ;
		} else if (x<0) {
			sn = sn + x ;
	    } 
	} while (x != 0);

    printf("\nSomme des valeurs positives: %d", sp);
    printf("\nSomme des valeurs negatives: %d", sn);

system("pause>nul");
system("cls");
sp=0, sn=0;
goto start;
return 0;

}
