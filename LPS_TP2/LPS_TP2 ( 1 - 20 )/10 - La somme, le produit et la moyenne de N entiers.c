/* Exercice 10: La somme, le produit et la moyenne de N entiers
Ecrire un programme qui calcule la somme, le produit et la moyenne de N entiers saisis au clavier.
Exemple : N=4
Les entiers : 4 5 2 10
Somme = 4+5+2+10 = 21
Produit = 4x5x2x10 = 400
Moyenne = Somme/N = 21/4 = 5.25 */
#include<stdio.h>
main()
{
	int i, N, X, S=0, P=1;
	float M;
	start:
	printf("같같같같같같같캪a somme, le produit et la moyenne de N entiers 같같같같같같같같같같같같같�");
	printf("같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같");
	do {
	    printf("\n Entrez le nombre d'entiers a operer: ");
        scanf("%d", &N);
	} while (N==0);
	
	printf("\n");
	
	for (i=1 ; i<=N ; i++) {
		printf("\t%d) Entrez un entier: ", i);
		scanf("%d", &X);
		S = S + X ;
		P = P * X ;
	}
	    M = S / (float)N ;
	    
	printf("\n Somme: %d\n Produit: %d\n Moyenne: %.2f\n", S,P,M);
	
system("pause>nul");
system("cls");
goto start;
return 0;

}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
