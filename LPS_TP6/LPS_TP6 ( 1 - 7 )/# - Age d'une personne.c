/* Exercice 8 : Age d'une personne
1) Fonction calcul(annNaiss, annCour) qui calcule l'�ge d'une personne n�e en annNaiss � la fin de l'ann�e courante annCour.
2) Transformer la fonction calcul en une proc�dure calculBis.
3) Ecrire un algorithme age qui demande � l'utilisateur l'ann�e de naissance d'un individu,
puis qui calcule et affiche l'�ge ce de dernier � la fin de l'ann�e courante. 
L'utilisateur doit pouvoir continuer � fournir des ann�es de naissance aussi longtemps qu'il le d�sire. */
#include<stdio.h>
// 1) Version Fonction
int calcul (int annNaiss, int annCour) {
	int age;
	age = annCour - annNaiss;
	return age;
}
// 2) Version Proc�dure
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
