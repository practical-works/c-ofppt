/*  Nam: Résolution des équations du 1er et 2ème degré : 
	Description: Résoudre, dans l’ensemble R, les équations : 
	(ax + b = 0) et (ax² + bx + c = 0).                            
*/
#include<stdio.h>
#include<math.h>
main()
{
	printf("========================================================================\n");
	printf("Resolution des equations du 1er et 2eme degre dans l'ensemeble R\n");
	printf("========================================================================\n");
	printf("Choisissez le type d'equation a resoudre:\n");
    printf("Tapez 1 pour: Equation du 1er degré (ax + b = 0).\n");
    printf("Tapez 2 pour: Equation du 2eme degré (ax^2 + bx + c = 0).\n");
    printf("------------------------------------------------------------------------\n");
    int choix ;
    printf("Choix: ");
    scanf("%d",&choix);
    printf("========================================================================\n");
    
    switch (choix) {
    	case 1: 
			printf("Resolution d'une equation du 1er degre (ax + b = 0) :\n");
			printf("========================================================================\n");
    		float aa,bb, x ; 
    		printf("Entrez a : ");
    		scanf("%f", &aa);
    		printf("Entrez b : ");
    		scanf("%f", &bb);
    		printf("________________________________________________________________________\n");
    		if (aa != 0) {
    			if (bb != 0) {
    				x = -bb/aa ;
    				printf("L'equation a une solution dans R.\n");
    				printf("La solution est: x = %.2f", x);
				} else {
					printf("Tout nombre de R est une solution.");
				}
			} else {
				printf("Pas de solution dans R.");
			}
		break;
		case 2:
		    printf("Resolution d'une equation du 2eme degre (ax^2 + bx + c = 0) :\n");	
		    printf("========================================================================\n");
			float a,b,c, D, X1,X2 ;	
			printf("Entrez a : ");
    		scanf("%f", &a);
    		printf("Entrez b : ");
    		scanf("%f", &b);
    		printf("Entrez c : ");
    		scanf("%f", &c);
    		printf("________________________________________________________________________\n");
    		if (a != 0) {
    		D = (b*b)-(4*a*c) ;  // Delta = b² - 4ac
    		if (D > 0) {    // Si D>0 il y a deux solutions : X1 = (-b-Rc(D))/2a et X2 = (-b+Rc(D))/2a
    			X1 = (-b-sqrt(D))/2*a ;
    			X2 = (-b+sqrt(D))/2*a ;
    			printf("L'equation a deux solution dans R.\n");
    			printf("Les solutions sont: X1 = %.2f et X2 = %.2f", X1,X2);
			} else if (D == 0) { // Si D=0, il y a une seule solution (soultion double) : X=X1=X2 = -b/2a
				X1 = -b/(2*a) ;
				X2 = X1 ;
				printf("L'equation a une solution dans R (solution double).\n");
    			printf("La soultion est: X = X1 = X2 = %.2f", X1);
			} else {    // Si D<0 , il n'y a pas de solution.
				printf("Pas de solution dans R.");
			}
		    } else {
		    	printf("Erreur!\nPour que ce soit une equation du 2eme degre, le nombre a ne doit pas être nul.\n");
			}
			break;
		default:
			printf("Erreur!\nVotre commande n'a aucune correspondence.");
			break;   	
	}
printf("\n");
printf("________________________________________________________________________\n");
printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
system("pause");
}
