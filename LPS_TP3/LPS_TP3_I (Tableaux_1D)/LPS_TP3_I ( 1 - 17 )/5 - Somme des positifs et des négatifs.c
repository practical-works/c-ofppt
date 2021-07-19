/* Exercice 5 : la somme des positifs et la somme des négatifs
Ecrire un programme qui lit la taille N d'un tableau T du type entier, remplit le tableau par des valeurs entrées au clavier 
et affiche le tableau. Calculer et afficher ensuite la somme des valeurs positives, et la somme des valeurs négatives. */
#include<stdio.h>
main()
{
	int T[100], i, N, Sp=0, Sn=0;
	start:
	printf("Somme des valeurs positives et negatives\n\n");
	printf("Entrez un nombre de valeurs: ");
	scanf("%d", &N);
	printf("\n");
	for (i=0; i<N; i++) {
		printf("\t%d) Entrez une valeur: ", i+1);
		scanf("%d", &T[i]);
		if (T[i] > 0) {
			Sp = Sp + T[i];
		} else if (T[i] < 0) {
			Sn = Sn + T[i];
		}
	}
	
	printf("\nSomme des valeurs positives: %d\nSomme des valeurs negatives: %d\n", Sp,Sn);

system("pause>nul");
system("cls");
fflush(stdin);
Sp=0; Sn=0;
goto start;
return 0;
}
