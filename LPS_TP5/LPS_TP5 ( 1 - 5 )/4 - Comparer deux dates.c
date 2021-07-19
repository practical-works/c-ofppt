/* Exercice 4 : Comparer deux dates
Définir une structure Date.
1- Saisir et afficher une date sous la forme jj/mm/aaaa | 2- Comparer deux dates */
#include<stdio.h>
struct date {
	int j, m, a;
};
main()
{
	system("color 4e");
	struct date A,B;
	start:
	printf("Comparer deux dates\n\n");
	printf("Entrez la 1ere date:\n");
	do {
		printf("\tJour: ");
		scanf("%d", &A.j);	
		fflush(stdin);
	} while (A.j<=0 || A.j>31);
	do {
		printf("\tMois: ");
		scanf("%d", &A.m);	
		fflush(stdin);
	} while (A.m<=0 || A.m>12);
	do {
		printf("\tAnnee: ");
		scanf("%d", &A.a);
		fflush(stdin);
	} while (A.a<0);

	printf("\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°° %d/%d/%d °°°°\n", A.j,A.m,A.a);
	printf("\nEntrez la 2eme date:\n");
	do {
		printf("\tJour: ");
		scanf("%d", &B.j);	
		fflush(stdin);
	} while (B.j<=0 || B.j>31);
	do {
		printf("\tMois: ");
		scanf("%d", &B.m);	
		fflush(stdin);
	} while (B.m<=0 || B.m>12);
	do {
		printf("\tAnnee: ");
		scanf("%d", &B.a);
		fflush(stdin);
	} while (B.a<0);
	printf("\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°  %d/%d/%d °°°°\n", B.j,B.m,B.a);
	
	if (A.a < B.a) {printf("\n   La date %d/%d/%d est avant la date %d/%d/%d.\n" ,A.j,A.m,A.a, B.j,B.m,B.a);} 
	else if (A.a > B.a) {printf("\n   La date %d/%d/%d est avant la date %d/%d/%d.\n" ,B.j,B.m,B.a, A.j,A.m,A.a);} 
	else {
		if (A.m < B.m) {printf("\n   La date %d/%d/%d est avant la date %d/%d/%d.\n" ,A.j,A.m,A.a, B.j,B.m,B.a);} 
		else if (A.m > B.m) {printf("\n   La date %d/%d/%d est avant la date %d/%d/%d.\n" ,B.j,B.m,B.a, A.j,A.m,A.a);} 
		else {
				if (A.j < B.j) {printf("\n   La date %d/%d/%d est avant la date %d/%d/%d.\n" ,A.j,A.m,A.a, B.j,B.m,B.a);} 
				else if (A.j > B.j) {printf("\n   La date %d/%d/%d est avant la date %d/%d/%d.\n" ,B.j,B.m,B.a, A.j,A.m,A.a);} 
				else {printf("\n   Les deux dates sont identiques !\n");}
		}
	}  

system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;
}
