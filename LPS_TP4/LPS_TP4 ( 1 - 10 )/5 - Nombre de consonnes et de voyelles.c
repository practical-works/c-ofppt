/* Exercice 5 : Nombre de consonnes et de voyelles
Ecrire un programme qui calcule le nombre de consonnes, de voyelles et les autres caractères d’un texte.*/
#include<stdio.h>
#include<string.h>
main() 
{
	int i,N, con, voy;
	char str[100];
	start:
	system("color f0");
	printf("Nombre de consonnes et de voyelles\n\n");
	printf("Entrez un texte: ");
	gets(str);
	N=strlen(str);
	con=0, voy=0;
	for (i=0; i<N; i++) {
		if (str[i]<='z' && str[i]>='a') {
			if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='y') {
				voy++;
			} else {
				con++;
			}
		} else if (str[i]<='Z' && str[i]>='A') {
			if (str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='Y') {
				voy++;
			} else {
				con++;
			}
		}
	}
	printf("\nNombre de consonnes: %d\nNombre de voyelles: %d\nNombre des autres caracteres (non-lettre): %d\n", con,voy,N-(con+voy));
	
system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;
}
