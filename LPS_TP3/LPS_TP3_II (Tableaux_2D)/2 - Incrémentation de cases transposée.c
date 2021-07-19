// Exercice 2 : Incrémentation de cases transposée
#include<stdio.h>
main()
{
	int i, j, X[1][2], val;
	start:
	printf("\n\n\n");
	val = 1;
	for (i=0; i<=1; i++) {
		for (j=0; j<=2; j++) {
			X[i][j] = val;
			val++;
		}	
	}
	for (j=0; j<=2; j++) {
		for (i=0; i<=1; i++) {
			printf("\t%d", X[i][j]);
		}
		printf("\n\n");	
	}
	
//----------------------------------
system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;
}

