#include<stdio.h>
int sum_divPRO (int x) {
	int i, S=0;
	for (i=1; i<x/2; i++) {
		if (x%i == 0) {
			S = S + i;
		}
	}
	return S;
}
int ami (int a, int b, int c) {
	int Sa=sum_divPRO(a), Sb=sum_divPRO(b), Sc=sum_divPRO(c);
	if (Sa == Sb+Sc || Sb == Sa+Sc || Sc == Sa+Sb) {
		return 1;
	} else {
		return 0;
	}
}
main() {
	system("title Triplet d'entiers amiables"); system("color 71");
	int A,B,C;
	start:
	printf("Triplet d'entiers amiables\n\n");
	printf("* Entrez le 1er entier: ");
	scanf("%d", &A);
	printf("* Entrez le 2eme entier: ");
	scanf("%d", &B);
	printf("* Entrez le 3eme entier: ");
	scanf("%d", &C);
	
	if (ami(A,B,C) == 0) {
		printf("\n Le triplet (%d,%d,%d) N'EST PAS amiable!\n", A,B,C);
	} else {
		printf("\n Le triplet (%d,%d,%d) est AMIABLE.\n", A,B,C);
	}
	printf("\n--------------------------------------------------------------------------------");
	printf("\n[Verification]\n\n\tSomme diviseurs propres:\n");
    printf("\n\t\tsum_divPRO( %d ) = %d\n\t\tsum_divPRO( %d ) = %d\n\t\tsum_divPRO( %d ) = %d\n",
	A,sum_divPRO(A), B,sum_divPRO(B), C,sum_divPRO(C));

system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;
}
