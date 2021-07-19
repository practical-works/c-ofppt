/* Exercice 14: Pourcentage des notes supérieurs à la moyenne
Ecrire un programme qui lit 10 notes entières et qui indique le pourcentage de notes supérieures à 10. 
Exemple :
Notes saisies : 11 2 37 3 0 2 23 75 9 52
Pourcentage = Nombre de note supérieures à 10 / Nombre total des notes
= 5/10 = 50%
(3/10 = 30%, 9/10=90%...) */
#include<stdio.h>
main()
{
	int i, s=0, n=10, N; 
	float P;
	
	start:
	printf("Pourcentage des notes superieures a la moyenne\n\n");
	for (i=1; i<=n ; i++) {
		printf("%d) Entrez une note: ", i);
		scanf("%d", &N);
		if (N>10) {
			s++;
		}
	}
	P = (s/(float)n)*100;
	printf("\nPourcentage des notes superieures a dix: %.2f%%\n", P);
	
system("pause>nul");
system("cls");
s=0;
goto start;
return 0;
}
