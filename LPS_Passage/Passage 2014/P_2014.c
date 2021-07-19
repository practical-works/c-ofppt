#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char est_trie(float T[], int N) {
	int i, cr=0, dec=0; 
	char test[100]; 
	for (i=0; i<N; i++) {
		if (T[i] <= T[i+1]) {
			cr++;
		}  
        if (T[i] >= T[i+1]) {
        	dec++;
		} 
	} 
   if (cr == N)  strcpy(test,"trie croissant");
   if (dec == N) strcpy(test,"trie decroissant");  
   if (cr!=N && dec!=N) strcpy(test,"non trie"); 
   return *test;
}
void tab_test () {
	float T[100];
	int i, N;
	char tri[100];
	printf("Entrez taille tableau: "); scanf("%d",&N); 
	printf("Remplir tableau:\n");
	for (i=0; i<N; i++) {
		printf("%d) Entrez un reel: ", i);
		scanf("%f",&T[i]); 	
	}
    printf("Votre tableau est %s.", est_trie(T,N));
}
void cerf_volant(int n) {
	int i, j, k=0, x=0;
	char a = '\\';
    n = n/2;
    x = n;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            printf(" ");
        }
        printf("/");
            for(k=x;k<n;k++)
                printf(" ");
        printf("|");
            for(k=x;k<n;k++)
                printf(" ");
        printf("%c \n",a);
        x--;
    }
    for(i=0;i<n;i++){
        printf("-");
    }
    for(i=0;i<n;i++){
        if(i==0)
            printf(" ");
        printf("-");
    }printf("\n");
    x=n;
    for(i=n;i>0;i--){
        for(j=n;j>=i+1;j--){
            printf(" ");
        }
        printf("%c",a);
            for(k=0;k<x-1;k++)
                printf(" ");
        printf("|");
            for(k=0;k<x-1;k++)
                printf(" ");
        printf("/\n");
        x--;
    }    
} 

void aff_cerf() {
	char T[20][20];
	int N;
   	do {
   		printf("\nEntrez une taille paire: "); 
        scanf("%d",&N);
        if (N%2 != 0) {
        	printf("\nLa taille doit etre PAIRE!\n"); 
		} 
	} while (N%2!=0 || N<0);
    printf("\n");
	cerf_volant (N);
}
main()
{
	int choix;
	start:
	printf("\n\t1. Test de tableau\n\t2. Cerf volant\n\nChoix: "); scanf("%d", &choix);
	switch(choix) {
		case 1: system("cls"); tab_test(); break;
		case 2: system("cls"); aff_cerf(); break;
		default: puts("Choix invalide!");
	}
	system("pause>nul"); system("cls"); fflush(stdin); goto start;
}
