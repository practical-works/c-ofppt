/* Exercice 26: Suite de caract�res
Ecrire un programme qui permet la lecture d'une suite de caract�res qui se terminent par '*' 
afin de calculer et afficher:
�Le nombre de caract�res saisis     �Le nombre de signes de ponctuation ( . , ; : ! ? )
N.B: �On ne doit utiliser que scanf("%c", �) et while       �Pr�voir le cas o� le texte est vide */
#include<stdio.h>
main()
{
	int nc=0, np=0;
	char c;
	
	start:
	printf("Suite de caracteres\n\n");
	printf("Entrez une suite de caraceres: ");
	while (c != '*') {
		scanf("%c", &c);
		if (c != ' ') {
		nc++;
		    if (c=='.'||c==','||c==';'||c==':'||c=='!'||c=='?') {
			np++;
		    }	
	    }
	}
	
	printf("\n\tNombre de caracteres saisis: %d\n\tNombre de signes de ponctuation: %d\n", nc,np);

system("pause>nul");
system("cls");
fflush(stdin);
nc=0, np=0; c='0';
goto start;
return 0;

}
