/* Exercice 2 : Comparaison lexicographique
Ecrire un programme qui lit deux cha�nes de caract�res CH1 et CH2, les compare lexicographiquement et affiche le r�sultat.
Exemple: Introduisez la premi�re cha�ne: ABC > Introduisez la deuxi�me cha�ne: abc ---> "ABC" pr�c�de "abc" */
#include<stdio.h>
#include<string.h>
main() 
{
	int i, N,M, chmax, egal;
	char CH1[100], CH2[100];
	start:
	printf("Comparaison lexicographique\n\n");
	printf("Entrez le premier texte: ");
	gets(CH1);
	N=strlen(CH1);
	printf("Entrez le deuxieme texte: ");
	gets(CH2);
	M=strlen(CH2);

	chmax = N;
	if (N < M) { 
		chmax = M;          // D�terminer la limite de la boucle de comparaison
	} 
	
	egal = 0;
	for (i=0; i<chmax; i++) {
		if (CH1[i] == CH2[i]) {
			if (egal == chmax-1) {
				printf("\n\t'%s' est identique a '%s'.\n", CH1,CH2);
				break;
			} else {
				egal++;
			}
			
		} else if (CH1[i] < CH2[i]) {
			printf("\n\t'%s' precede '%s'.\n", CH1,CH2);
			break;
		} else if (CH1[i] > CH2[i]) {
			printf("\n\t'%s' precede '%s'.\n", CH2,CH1);
			break;
		}
	}
	
system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;
}
