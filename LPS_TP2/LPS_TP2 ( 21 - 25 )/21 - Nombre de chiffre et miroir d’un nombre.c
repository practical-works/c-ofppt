/* Exercice 21: Nombre de chiffre et miroir d’un nombre
Ecrire un programme qui demande à l'utilisateur un entier V et qui affiche le nombre de chiffres composants V 
(pensez à la division par une puissance de 10).
Modifiez le programme pour qu'il demande à l'utilisateur un entier V et qui affiche son miroir.(ex. 1453 ! 3541)
Exemple :
Donnée : V=1453
Résultat : 3541 */
#include<stdio.h>
main()
{
	int V,_V, R, N=0;
	
	start:
	printf("Nombre de chiffres et miroir d'un nombre\n\n");
	printf("Entrez un entier (V): ");
	scanf("%d", &V);
	
	_V = V ;
	
    printf("\n\t| Algorithme:\n");
	do {
		V = V/10 ;
		N++;
		printf("\t| V/10 = %d \tN = %d\n", V,N);
	} while (V != 0);
	
	V = _V ;
	
	printf("\nNombre de chiffres composants (N): %d\n", N); 
	printf("\nNombre Miroir: ");
		do {
		R = V%10 ;
		V = V/10 ;
		printf("%d", R);
	} while (V != 0);
	
	printf("\n");

//	
system("pause>nul");
system("cls");
fflush(stdin);
N=0;
goto start;
return 0;

}

