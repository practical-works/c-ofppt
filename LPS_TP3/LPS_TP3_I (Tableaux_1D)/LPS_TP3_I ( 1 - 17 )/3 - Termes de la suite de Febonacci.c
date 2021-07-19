// Termes de la suite de Febonacci
#include<stdio.h>
main() 
{
	int Suite[7];	//Tableau Suite(7) en Entier
	int i;	//Variable i en Entier
	//Debut
	Suite[0] = 1;	//Suite(0) <-- 1
	Suite[1] = 1;	//Suite(1) <-- 1
	for (i=2; i<7; i++) {	//Pour i <-- 2 a 7   //i fait 1 pas
	Suite[i] = Suite[i-1] + Suite[i-2];	//Suite(i) <-- Suite(i-1) + Suite(i-2)
	}
	for (i=0; i<7; i++) {	//Pour i <-- 0 a 7   //i fait 1 pas
	printf("\n\tU(%d) = %d\n", i,Suite[i]);	//Ecrire Suite(i)
	}
	//Fin
}
