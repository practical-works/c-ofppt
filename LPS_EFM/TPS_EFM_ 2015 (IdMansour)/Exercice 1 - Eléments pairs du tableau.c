#include<stdio.h>
main()
{
	system("title Elements pairs du tableau"); system("color 70");
	int i,j, N, T[100];
	start:
	printf("Elements pairs du tableau\n\n");
	printf("Entrez uen taille de tableau: ");
	scanf("%d", &N);
	printf("\n");
	for (i=0; i<N; i++) {
		printf("\t[%d] Entrez une valeur: ", i);
		scanf("%d", &T[i]);
	}
	for (i=0; i<N; i++) {
		if (T[i]%2 == 0) {
			for (j=i; j<N; j++) {
				T[j] = T[j+1];
			}
			i--;
			N--;
		}
	}
	printf("\nApercu Tableau:\n");
	for (i=0; i<N; i++) {
		printf("\t[%d] %d\n", i,T[i]);
	}
	
system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;	
}
