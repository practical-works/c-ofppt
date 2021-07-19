// Tableau de puissances carrees
#include<stdio.h>
main() 
{
	int Nb[5]; //Tableau Nb(5) en Entier
	int i; //Variable i en Entier
	//Debut
	for (i=0; i<5; i++) { //Pour i <-- 0 a 5 //i fait 1 pas
	Nb[i] = i*i; //Nb(i) <-- i * i
	}
	for (i=0; i<5; i++) { //Pour i <-- 0 a 5 //i fait 1 pas
	printf("\n\t%d^2 = %d\n", i,Nb[i]); //Ecrire Nb(i)
	}
	//Fin
}

