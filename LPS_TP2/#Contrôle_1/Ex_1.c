//Cône
#include<stdio.h>
main()
{
	int i, j, N, M, S;
	start:
	printf("Entrez un nombre: ");
	scanf("%d", &N);
	M=N;
	for (i=1; i<=N; i++) {
		for (j=1; j<=M; j++) {
			printf(" ");
		}
		M--;
		for (j=1; j<=i; j++) {
			printf("*");
		}
		for (j=1; j<=i-1; j++) {
			printf("*");
		}
		printf("\n");
	}
	S = N + (N-1);
	for (i=1; i<=N; i++) {
		for (j=1; j<=N; j++) {
			printf(" ");
		}
	/*	for (j=1; j<=S-4; j++) {
			printf("*");
		} */
		printf("*\n");
	}

system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;

}
