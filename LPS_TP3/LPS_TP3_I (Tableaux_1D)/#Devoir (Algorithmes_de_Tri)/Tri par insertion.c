// Tri par insertion
#include<stdio.h>
main()
{
	int i, j, N, x, T[100];
	start:
	system("title Tri par insertion");
	system("color 1f");
	printf("--------------------------------------------------------------------------------");
	printf("\t* Tri par insertion\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("   Taille du tableau : \t");
	scanf("%d", &N);
	printf("\n");
	
	for (j=0; j<N; j++) {
		printf("\tCase [%d] :\t", j+1);
		scanf("%d", &T[j]);
	}

    for (i=1; i<N; i++) {
    	x = T[i];
        j = i;
        
        while ( j>0 && T[j-1]>x ) {	
            T[j] = T[j-1];
            j--;
        }
        
        T[j] = x;
	}
	
    printf("\n   Tableau trie par ordre croissant:\n\n");
	for (j=0; j<N; j++) {
		printf("\tCase [%d] :\t%d\n", j+1, T[j]);
	}

system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;

}
