/* Exercice 33: Nombre au hasard
Ecrire un programme qui choisit au hasard un nombre entre 0 et 99, qui demande à l'utilisateur de deviner ce nombre 
en 5 coups au plus. Après chaque saisie, le programme s'interrompt si l'utilisateur trouve le nombre ou indique si 
le nombre à trouver est supérieur/inférieur au nombre proposé par l'utilisateur. 
Note: Pour choisir au hasard un nombre entre 0 et 99, on écrira les lignes :
#include<stdlib.h> #include<time.h> après #include<stdio.h> et on écrira les instructions suivantes dans le programme principal :
int x; srand(time(NULL)); x=(100.0*rand())/RAND_MAX;        //La variable x contiendra le nombre à deviner. */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int n, x;
	
	start:
	printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°° Nombre au hasard °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n");
	sleep(1);
	printf(" Un nombre entre 0 et 99 sera choisit en cachette, ");
	sleep(1);
	printf("saurez-vous le deviner ?\n\n"); 
	sleep(1);
	
	srand(time(NULL));
	x = (100.0*rand())/RAND_MAX;
	
	printf(" Nombre choisis ! A vous de jouer. \t\t\t#Cheat:n=%d \n", x);
	
	do {
	    printf("\n\tEntrez un nombre: ");
	    scanf("%d", &n);
	    if (n<0 || n>99) { printf("\n Erreur ! Votre nombre n'est pas compris entre 0 et 99.\n"); } 
		else {
			    if (n>x) { printf("\n Votre nombre est superieur au nombre choisis.\n"); } 
				else if (n<x) { printf("\n Votre nombre est inferieur au nombre choisis.\n"); } 
				else { printf("\n Felicitations ! Votre nombre est bien le nombre choisit.\n"); }
	    }
	    
	} while (n != x);
	
system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;

}
