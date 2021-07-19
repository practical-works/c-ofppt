/* Exercice 11: La somme d’une série d’entiers (1)
Ecrire un programme qui calcule la somme d'une série d'entiers saisis au clavier et dont la fin 
est marquée par la saisi de 0. */
#include<stdio.h>
main()
{
	int n, s=0;
	
	start:
	printf("La somme d'une serie d'entiers\n");
	printf("\nDonnez les nombres a sommer, et entrez 0 comme nombre pour finir:\n\n");
	do {
		printf("\t+ ");
		scanf("%d", &n);
		s = s + n ;
	} while (n != 0);
	
	printf("\n\t= %d", s);

system("pause>nul");
system("cls");
s=0;
goto start;
return 0;

}

