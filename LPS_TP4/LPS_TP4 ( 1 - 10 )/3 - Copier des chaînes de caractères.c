/* Exercice 3 : Copier des cha�nes de caract�res
Programme qui lit 2 cha�nes CH1 et CH2 et qui copie la 1�re moiti�(CH1) et la 1�re moiti�(CH2) dans une 3i�me cha�ne CH3.
Afficher le r�sultat.
a) Utiliser les fonctions sp�ciales de <string>.
b) Utiliser uniquement les fonctions gets et puts.*/
#include<stdio.h>
#include<string.h>
main()
{
	int i, N,M;
	char CH1[100], CH2[100], CH3[100];
	start:
	system("color f0");
	printf("Copier des chaines de caracteres\n\n");
	printf("Entrez le 1er texte: ");
	gets(CH1);
	N=strlen(CH1);
	printf("Entrez le 2eme texte: ");
	gets(CH2);
	M=strlen(CH2);
	
	for (i=0; i<N/2; i++) {
		CH3[i]=CH1[i];
	}
	
	for (i=0; i<M/2; i++) {
		CH3[i+N/2]=CH2[i];
	}
	CH3[N/2 + M/2]='\0';
	
	printf("\n3eme texte (Moitie du 1er + Moitie du 2eme):\n");
	printf("\n\t");
	puts(CH3);
	
system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;
}
