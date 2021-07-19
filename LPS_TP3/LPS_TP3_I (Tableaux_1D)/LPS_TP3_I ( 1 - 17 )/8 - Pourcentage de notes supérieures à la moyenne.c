/* Exercice 8 : le pourcentage de notes supérieures à la moyenne
Ecrire un algorithme permettant, à l’utilisateur de saisir les notes d'une classe. Le programme, une fois la saisie terminée, 
affiche le pourcentage de notes supérieures à la moyenne de la classe. */
#include<stdio.h>
main()
{
	int i, N, sup=0; 
	float note[100], moy=0, prc;
	start:
	printf("Pourcentage de notes superieures a la moyenne\n\n");
	printf("Entrez un nombre de notes: ");
	scanf("%d", &N);
	printf("\n");
	
	for (i=0; i<N; i++) {
		printf("\t%d) Entrez une note: ", i+1);
		scanf("%f", &note[i]);
		moy = moy + note[i];
	}
	moy = moy/N;
	for (i=0; i<N; i++) {
		if (note[i] > moy) {
			sup++;
		}
	}
	prc = (sup/(float)N)*100;
	
	printf("\n  Moyenne de la classe: %.2f\n  Pourcentage de notes superieures a la moyenne de la classe: %.2f %%", moy,prc);

system("pause>nul");
system("cls");
fflush(stdin);
sup=0; moy=0;
goto start;
return 0;
	
}
