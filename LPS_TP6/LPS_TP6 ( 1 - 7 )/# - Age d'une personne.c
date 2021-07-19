/* Exercice 8 : Age d'une personne
1) Fonction calcul(annNaiss, annCour) qui calcule l'âge d'une personne née en annNaiss à la fin de l'année courante annCour.
2) Transformer la fonction calcul en une procédure calculBis.
3) Ecrire un algorithme age qui demande à l'utilisateur l'année de naissance d'un individu,
puis qui calcule et affiche l'âge ce de dernier à la fin de l'année courante. 
L'utilisateur doit pouvoir continuer à fournir des années de naissance aussi longtemps qu'il le désire. */
#include<stdio.h>
// 1) Version Fonction
int calcul (int annNaiss, int annCour) {
	int age;
	age = annCour - annNaiss;
	return age;
}
// 2) Version Procédure
void calculBis (int annNaiss, int annCour) {
	int age;
	age = annCour - annNaiss;
	printf("\nL'age de cette personne est: %d ans.\n", age);
}
// 3) Programme Principal
main()
{
	system("color 3f");
	int birth, now;
	start:
	printf("Age d'une personne\n\n");
	printf("Entrez une annee de naissance: ");
	scanf("%d", &birth);
	printf("Entrez l'annee courante: ");
	scanf("%d", &now);
	calculBis(birth,now);
	// ou
	//printf("\nL'age de cette personne est: %d ans.\n", calcul(birth,now));

system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;
} 
