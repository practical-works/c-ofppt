// Exercice 3 : 
#include<stdio.h>
main()
{
	int k, m, T[3][1];
	start:
	printf("\n\n\n");
	for (k=0; k<=3; k++) {
		for (m=0; m<=1; m++) {
			T[k][m] = k + m;
		}	
	}
	for (k=0; k<=3; k++) {
		for (m=0; m<=1; m++) {
			printf("\t%d", T[k][m]);
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
