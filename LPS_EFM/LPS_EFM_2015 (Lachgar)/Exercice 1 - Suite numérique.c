#include<stdio.h>
int U (int n) {
	if (n==1) return 1;
	if (n==2) return 2;
	if (n>2) return 2*( U(n-1) + U(n-2) );
}
main()
{
	system("title Suite numerique"); system("color 70");
	int i, X, S;
	start:
	printf("Suite numerique:\n\n");
	printf("\t°°° U(1) = 1 et U(2) = 2 \n\n\t°°° U(n) = 2 * [ U(n-1) + U(n-2) ] ; pour n>2\n\n");
	printf("Entrez un entier: ");
	scanf("%d", &X); 
	printf("\nTermes inferieurs ou egaux a %d :\n\n", X);
	i=1, S=0;
	while (U(i) <= X) {
		S = S + U(i);
		printf("\tU(%d) = %d\n", i,U(i));
		i++;
	}
	printf("\n\tSomme: %d", S);
	
system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;
}
