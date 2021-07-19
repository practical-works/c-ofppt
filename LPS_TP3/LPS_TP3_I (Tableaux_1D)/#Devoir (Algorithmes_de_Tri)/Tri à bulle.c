// Tri à bulles (version optimisée)
#include<stdio.h>
main()
{
	int i, j, N, tmp, echange, T[100];
	start:
	system("title Tri à bulles");
	system("color 1f");
	printf("--------------------------------------------------------------------------------");
	printf("\t* Tri a bulles\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("   Taille du tableau : \t");
	scanf("%d", &N);
	printf("\n");
	
	for (j=0; j<N; j++) {
		printf("\tCase [%d] :\t", j+1);
		scanf("%d", &T[j]);
	}

    i = N;
    echange = 1;
    
    while ( i>0 && echange==1 ) {
    	
		echange = 0;
        for (j=0; j<i; j++) {
        	
			if ( T[j] > T[j+1] ) {
                  tmp = T[j];
                  T[j] = T[j+1];
                  T[j+1] = tmp;
                  echange = 1;
            } 
		}
        i--;
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


