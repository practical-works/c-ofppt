// Incrémentation de 2 pour les case d'un tableau
#include<stdio.h>
main() 
{ 
	int N[6];	//	Tableau N(6) en Entier
	int i, k;	//	Variables i, k en Entier
	//	Debut
	N[0] = 1;	//	N(0) <-- 1
	for (k=1; k<6; k++) {	//	Pour k <-- 1 a 6    //	k fait 1 pas
	N[k] = N[k-1] + 2;	//	N(k) <-- N(k-1) + 2
	}	
	for (i=1; i<6; i++)	{  //	Pour i <-- 0 a 6    //	i fait 1 pas
	printf("\n\t%d + 2 = %d\n", N[i-1],N[i]);	//	Ecrire N(i)
	}		
	//	Fin
}
