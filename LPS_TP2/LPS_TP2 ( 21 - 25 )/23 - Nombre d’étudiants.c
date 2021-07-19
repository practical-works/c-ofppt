/* Exercice 23: Nombre d’étudiants
Ecrire un programme qui lit les moyennes de N étudiants et qui compte le nombre d’étudiants ayant une moyenne:
- supérieure ou égale à 8
- supérieure ou égale à 10
- supérieure ou égale à 12
- supérieure ou égale à 15      */
#include<stdio.h>
main()
{
	int i,N, _8=0,_10=0,_12=0,_15=0;
	float M;
	start:
	printf("Nombre d'etudiants avec des moyennes specifiques °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n");
	printf("  Entrez le nombre d'etudiants: ");
	scanf("%d", &N);
	printf("\n  Entrez les moyennes des etudiants: \n\n");
	for (i=1; i<=N; i++) {
		do {
		    printf("\tEtudiant %d: ", i);
			scanf("%f", &M);
			if (M<0 || M>20) {
			printf("\n\a  Erreur! Entrez une note valable (Entre 0 et 20).\n\n");	
			}
		} while (M<0 || M>20);
			
		    if (M >= 15) {_15++;} 
	        else if (M >= 12) {_12++;} 
		    else if (M >= 10) {_10++;} 
		    else if (M >= 8) {_8++;}

	}
	printf("\n\t%d etudiant(s) avec moyenne entre 08 et 10 [note >= 08].\n", _8);
	printf("\n\t%d etudiant(s) avec moyenne entre 10 et 12 [note >= 10].\n", _10);
	printf("\n\t%d etudiant(s) avec moyenne entre 12 et 15 [note >= 12].\n", _12);
	printf("\n\t%d etudiant(s) avec moyenne entre 15 et 20 [note >= 15].\n", _15);
	
system("pause>nul");
system("cls");
fflush(stdin);
_8 = _10 = _12 = _15 = 0;
goto start;
return 0;

}
