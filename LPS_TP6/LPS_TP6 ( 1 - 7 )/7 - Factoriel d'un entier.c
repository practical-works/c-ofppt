/* Exercice 7 : Factoriel d'un entier
1) Ecrire la fonction qui calcul le factoriel d’un nombre entier positif.
2) Intégrer la fonction définie précédemment dans un programme calculant la somme des
factoriels des 100 premiers nombres entiers positif.
Afficher le résultat de la somme des factoriels obtenue. */
#include<stdio.h>
factoriel (long n) {
	long i, nf=1;
	for (i=n; i>0; i--) {
		nf = nf * i ;
	}
	return nf;
}
main()
{
	long i,N,S;
	start:
	printf("Factoriel d'un entier positif\n\n");
	printf("Entrez un entier positif: ");
	scanf("%ld", &N);
		//Idée pour auto-réctifier l'erreur de saisi d'un nombre négatif ^_^
		if (N<0) {
			N = -N;   
		}
	printf("\n\t%ld! = %ld\n", N,factoriel(N));
	
	printf("\nSomme des factoriels des 100 premiers entiers positifs\n\n");
	system("pause");
	printf("\n");
	S=0;
	for (i=1; i<100; i++) {
		S = S + factoriel(i);
		printf("%ld! = %ld\n", i,factoriel(i));
	}
	printf("\tSomme : %ld\n", S);

system("pause>nul");
system("cls");
goto start;
return 0;
}
