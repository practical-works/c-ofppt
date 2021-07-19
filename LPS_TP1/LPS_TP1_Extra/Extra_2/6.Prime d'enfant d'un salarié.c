/* Nom: Prime d'enfant d'un salarié
   Description: Affiche la prime d'enfant d'un salarie.
     0 enfant : Rien.
     1 ou 2 enfants : 50 euros par enfant.
     3 ou plus d'enfants : 70 euros par enfant   */
#include<stdio.h>
main()
{
	int n ; 
	float p;
		
	start:
	printf("\n\t\t\t~ Prime d'enfant d'un salarie ~\n");
	
	printf("\nEntrez le nombre d'enfants: ");
	scanf("%d", &n);
	
	if (n<0) {
		printf("\n\tErreur! Le nombre d'enfants doit etre positif.\n");
	} else {
		printf("\n\tPrime: ");
	        if (n==0) {
		    p = 0;
	        } else if (n<3) {
		    p = 50*n;
	        } else {
	    	p = 70*n;
        	}
	    printf("%2.f euros.", p);
    }
    
system("pause>nul");
system("cls");
goto start;
return 0;
}
