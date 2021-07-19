/* Nom: Voyelle, consonne, ou autre
   Description: Teste si un caractère saisi est une lettre voyelle (a,e,i,o,u,y) consonne, ou autre.  */
#include<stdio.h>
main()
{
	char c;
	
	start:
	printf("--------------------------------\n");
	printf("Voyelle, consonne, ou autre? :D\n");
	printf("--------------------------------\n");
	
	printf("Entrez un caractere: ");
	
	scanf("%c", &c);
	printf("\n________________________________\n\n");
	if ( (c>='a' && c<='z') || (c>='A' && c<='Z')) {
		printf("%c est une ", c);
		if (c=='a'|| c=='A' ||
		    c=='e'|| c=='E' ||
		    c=='i'|| c=='I' ||
		    c=='o'|| c=='O' ||
		    c=='u'|| c=='U' ||
		    c=='y'|| c=='Y'
		   ) {printf("voyelle.");} 
		else {printf("consonne.");} } 
		
	else {printf("%c n'est pas une lettre.", c);}

printf("\n\n--------------------------------\n");	
system("pause>nul");
system("cls"); 
goto start;
return 0;
	
}
