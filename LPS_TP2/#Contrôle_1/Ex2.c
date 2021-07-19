//Nombre parfait
#include<stdio.h>
main()
{
	int i, N, S=0;
	start:
	printf("Entrez un nombre: ");
	scanf("%d", &N);
	for (i=1; i<N; i++) {
		if (N%i == 0) {
			S = S + i;
			printf("\n%d\n", i);
		}
	}
	printf("\n");
	if (S == N) {
		printf("%d est un nombre parfait !", N);
	} else {
		printf("%d n'est pas parfait.", N);
	}

system("pause>nul");
system("cls");
fflush(stdin);
S=0;
goto start;
return 0;

}
