/*
	Nom : Conversion de Majuscule en minuscule
	Description: L'utilisateur saisit un caractère, le programme teste s'il s'agit d'une lettre majuscule, 
	si oui il renvoie cette lettre en minuscule, sinon il lui affiche un message l’informant que la lettre 
	saisie n’est pas majuscule.
*/
#include<stdio.h>
#include <ctype.h> //=> fonctions "toupper" et "tolower" qui convertient en majuscule (uppercase) / minuscule (lowercase)
main()
{
	printf("______________________________________________________\n");
	printf("Conversion d'une lettre Majuscule en minuscule\n");
	printf("______________________________________________________\n");
	char C ;
	start:
	printf("\nSaisissez une lettre Majuscule: ");
	scanf("%c", &C) ;
	printf("\n______________________________________________________\n");
	
	if (C>='A' && C<='Z') // c majuscule ?
	{
		C = tolower(C) ; // convertir en minuscule avec une fonction
		printf("\nLe lettre convertie en minuscule est: %c \n", C);
    } else {
        printf("\nla lettre saisie n'est pas majuscule.\n");
        goto start;
}
	printf("\n______________________________________________________\n");
	system("pause");
}
