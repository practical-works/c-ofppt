/* Exercice 1 : Langueur d'une cha�ne de caract�res
Programme qui demande le nom/pr�nom de l'utilisateur et affiche la longueur totale du nom sans compter les espaces.
Exemple: Introduisez votre nom et votre pr�nom: Mickey Mouse >> Bonjour Mickey Mouse ! Votre nom est compos� de 11 lettres.*/
#include<stdio.H>
main()
{
	int i, L;
	char S[100];
	start:
	printf("Langueur d'une chaine de caracteres\n\n");
	printf("Entrez votre nom et prenom: ");
	gets(S);
	i=0, L=0;
	while (S[i] != '\0') {
		if (S[i] != ' ') {
			L++;
		}
		i++;	
	}
	printf("\nVotre nom comporte %d lettres.\n", L);
	
system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;
}
