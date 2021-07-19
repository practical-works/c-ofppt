// P_2014 - Exercice 2: Elimination des répétitions
#include<stdio.h>
#include<stdlib.h>
char *sans_repetition (char T[], int N) {
	int i,j,k;
	for (i=0; i<N; i++) {
		for (j=i+1; j<N; j++) {
			if (T[i] == T[j]) {
				for (k=j; k<N; k++) {
					T[k] = T[k+1];
				}
				N--;
				j--;
			}
		}
	}
	return T;
}
void remplir (char T[], int *N) {
	int i;
	printf("Entrez un nombre de lettres: ");
	scanf("%d",&(*N));
	for(i=0; i<*N; i++) {
		printf("\t[%d] Entrez une lettre: ", i);
		fflush(stdin);
		scanf("%c", &T[i]);
	}
	T[*N] = '\0';
	printf("\nMot original: %s", T);
	printf("\nMot sans repetition: %s", sans_repetition(T,*N));
}
main()
{
	int m, a=0x17;
	char ch[100];
	start:
		printf("%c Purger un tableau de lettres\n\n",a);
	remplir(ch,&m);
	system("pause>nul");
	system("cls");
	goto start;
}
