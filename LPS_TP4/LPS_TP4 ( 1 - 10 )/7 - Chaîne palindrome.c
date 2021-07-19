/* Exercice 7 : Chaîne palindrome
Ecrire un programme qui détermine si une chaîne est palindrome ou pas (peut être lue dans les 2 sens. Exemple: radar).*/
#include<stdio.h>
#include<string.h>
main()
{
	int i,N, palindrome;
	char str[100];
	start:
	system("color f0");
	printf("Chaine palindrome\n\n");
	printf("\tEntrez un texte: ");
	gets(str);
	N=strlen(str);
	
	palindrome = 1;
 	for (i=0; i<N/2; i++) {
		if (str[i] != str[N-1-i]) {
			palindrome = 0;
			break;
		}
	} 
	
	if (palindrome == 1) {
		printf("\n\tLa chaine est palindrome.\n");
	} else {
		printf("\n\tLa chaine est non palindrome.\n");
	}

system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;
}
