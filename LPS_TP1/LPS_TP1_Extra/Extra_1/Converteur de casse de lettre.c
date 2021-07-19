/* Nom: Converteur de casse de lettre
   Description: Convertie du minuscule au majuscule et vice-versa*/
#include<stdio.h>
main()
{
	int i=0 ;
	char word[500];
	char c ;
	
	begin:
	puts("-----------------------------------------------------------------");
	puts(" Converteur de casse de lettre");
	puts("-----------------------------------------------------------------");
	puts("Tapez une lettre, un mot, ou une phrase:\n");
	gets(word);
	puts("_________________________________________________________________\n");
	while (word[i]) {
		c = word[i];
		if (islower(c)) {
			c = toupper(c);
		} else if (isupper(c)) {
			c = tolower(c);
		}
		putchar(c);
		i++ ;
	}
	
system("pause>nul");
system("cls");
i=0 ;
goto begin;
return 0;
}
