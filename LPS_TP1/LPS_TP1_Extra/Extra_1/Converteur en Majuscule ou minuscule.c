#include<stdio.h>
main()
{
	char c ;
	start:
	printf("Converteur en Majuscule ou minuscule\n");
	printf("Entrez une lettre: ");
	scanf("%c", &c);
	if (c>='a' && c<='z') {
		c = c - ('a'-'A');
		putchar(c);
	} else if (c>='A' && c<='Z') {
		c = c + ('a'-'A');
		putchar(c);
	} else {
		puts("Ce n'est pas une lettre -_-");
	}
	
	system("pause>nul");
	system("cls");
	fflush(stdin);
	goto start;
	return 0;

}
