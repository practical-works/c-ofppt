/* Exercice 15: Calcul de produit
Ecrire un programme qui calcule le produit de deux entiers A et B sans utiliser l’opération de multiplication.
Attention, ces entiers peuvent être négatifs
Exemple : A=3 B=-5
Résultat : -15
Indication : Utilisez l’addition. */
#include<stdio.h>
main()
{
	int A,B, i, P=0;
	start:
	printf("Calcul du produit de deux entiers\n\n");
	printf("Entrez le premier nombre: ");
	scanf("%d", &A);
	printf("Entrez le premier nombre: ");
	scanf("%d", &B);
	
	if (A<0 && B<0) {
		A = -A;
		B = -B;
		for (i=1; i<=B; i++) {
		P = P + A;
	} 
	} else if (B>=0) {
		for (i=1; i<=B; i++) {
		P = P + A;
	}
	} else if (A>=0) {
		for (i=1; i<=A; i++) {
		P = P + B;
	}
}
	
	
	printf("\nProduit: %d", P);	
	
system("pause>nul");
system("cls");
P=0;
goto start;
return 0;

}
