/* Exercice 16: Puissance nième d’un nombre
Ecrire un programme qui lit un nombre x puis un entier n, puis calcule et affiche la puissance nième de x : x^n
Exemple :
Donnée : x=5, n=3
Résultat : 125 */
#include<stdio.h>
main()
{
	int x,n, i, p=1;
	start:
	printf("Puissance nieme d'un nombre\n\n");
	printf("Entrez le nombre: ");
	scanf("%d", &x);
	printf("Entrez l'exposant: ");
	scanf("%d", &n);
	
	for (i=1; i<=n; i++) {
		p = p * x;
	}
	
	printf("\nPuissance: \n\n\t%d ^ %d = %d", x,n,p);	
	
system("pause>nul");
system("cls");
p=1;
goto start;
return 0;

}
