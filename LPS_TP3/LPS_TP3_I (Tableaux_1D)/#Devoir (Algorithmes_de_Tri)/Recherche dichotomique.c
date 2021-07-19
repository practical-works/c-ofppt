// Recherche dichotomique
#include<stdio.h>
main()
{
	int i, j, N, x, T[100], debut, fin, val, mil, trouve; start: system("title Recherche dichotomique"); system("color 2f");
	printf("--------------------------------------------------------------------------------");
	printf("\t* Recherche dichotomique\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("   Taille du tableau : \t"); scanf("%d", &N); printf("\n");
//---------Tri du Tableau--------------------------------------------------------------------------------------------	
	for (j=0; j<N; j++) {printf("\tCase [%d] :\t", j+1); scanf("%d", &T[j]);}
    for (i=1; i<N; i++) {x = T[i];j = i; while ( j>0 && T[j-1]>x ) {T[j] = T[j-1]; j--;} T[j] = x;}	
    printf("\n   Tableau trie par ordre croissant:\n\n");
	for (j=0; j<N; j++) {printf("\tCase [%d] :\t%d\n", j+1, T[j]);}
//---------RECHERCHE-------------------------------------------------------------------------------------------------

//initialisation

	debut = 0; 
	fin = N-1;
	trouve = 0;
	
	printf("\nValeur a rechercher : \t");
	scanf("%d", &val);

//Boucle de recherche
do {
	mil = (debut + fin)/2;
  	
    if ( T[mil] == val ) {
    	trouve = 1;
	} else {
		
		if (val > T[mil]) {
			debut = mil+1;
		} else {
   			fin = mil-1;
   		} 
	}
	

} while (trouve == 0 && debut <= fin); /*La condition début <= fin permet d'éviter de faire une 
									boucle infinie si 'val' n'existe pas dans le tableau.*/

//Affichage du résultat
printf("\n");
	if (trouve == 1) {
		printf("   La valeur %d est trouve au rang %d.\n", val,mil+1);
	} else {
		printf("   La valeur %d n'est pas dans le tableau.\n", val);
	}

//-------------------------------------------------------------------------------------------------------------------
system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;

}

