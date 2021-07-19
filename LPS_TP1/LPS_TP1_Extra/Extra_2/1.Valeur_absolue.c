/* Nom: Valeur absolue
   Description: Calculer la valeur absolue d'un nombre entier*/
#include<stdio.h>
main()
{
	int n, abs;
	
	start:
	printf("Valur absolue d'un entier:\n\n\tEntrez un nombre entier: ");
	scanf("%d", &n);
	
	if (n<0) {
		abs = -n ;
	} else {
		abs = n ;
	}
	
	printf("\n\tLa valeur absolue : %d", abs);
	
	system("pause>nul");
	system("cls");
	goto start;
	return 0;
}
