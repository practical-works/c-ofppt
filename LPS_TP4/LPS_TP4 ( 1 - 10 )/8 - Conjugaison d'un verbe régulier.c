/* Exercice 8 : Conjugaison d'un verbe r�gulier
Ecrire un programme qui lit un verbe r�gulier en "er" au clavier et qui en affiche la
conjugaison au pr�sent de l'indicatif. Contr�lez s'il s'agit bien d'un
verbe en "er" avant de conjuguer donc le programme devra v�rifier que le mot
fourni se termine bien par � er �. On supposera qu�il ne peut comporter plus de 26
lettres et qu�il s�agit d�un verbe r�gulier. Autrement dit, on admettra que
l�utilisateur ne fournira pas un verbe tel que � manger � (le programme afficherait
alors : � nous mangons �). Exemple: Verbe: f�ter
je f�te, tu f�tes, il f�te, nous f�tons, vous f�tez, ils f�tent */
#include <stdio.h>
#include <string.h>
 main()
{
// D�clarations
	int N;         // Taille cha�ne
	char verb[26], /*Cha�ne verbe */ conj[36]; /* Cha�ne pour l'affichage */
	start:
	system("color f1");
	printf("Conjugaison d'un verbe regulier\n\n");

// Saisie des donn�es
	printf("Entrez un verbe regulier du premier groupe (avec 'er' en terminaison)\n\n");
	printf("\tVerbe: ");
	gets(verb);
	N=strlen(verb);
	
// Test de la terminaison 'er' 
	if ((verb[N-2]!='e') || (verb[N-1]!='r')) {
		puts("\tErreur! Le verbe doit se terminer avec 'er'.");
	} else {
		verb[N-2]='\0';   // Couper la terminaison 'er'
		
// Conjuguer
	// 1�re personne du singulier
	printf("\n\t\t");
    conj[0]='\0';
    strcat(conj, "Je ");   // ou   printf("Je ",%s,"e", verb);  (On utilise donc pas (strcat) et pas la variable (conj))
    strcat(conj, verb);
    strcat(conj, "e");
    puts(conj);
	// 2�me personne du singulier
	printf("\n\t\t");
    conj[0]='\0';
    strcat(conj, "Tu ");
    strcat(conj, verb);
    strcat(conj, "es");
    puts(conj);
	// 3�me personne du singulier
	printf("\n\t\t");
	conj[0]='\0';
    strcat(conj, "Il ");
    strcat(conj, verb);
    strcat(conj, "e");
    puts(conj);
	// 1�re personne du pluriel
	printf("\n\t\t");
    conj[0]='\0';
    strcat(conj, "Nous ");
    strcat(conj, verb);
    strcat(conj, "ons");
    puts(conj);
    // 2�re personne du pluriel
    printf("\n\t\t");
    conj[0]='\0';
    strcat(conj, "Vous ");
    strcat(conj, verb);
    strcat(conj, "ez");
    puts(conj);
	// 3�re personne du pluriel
	printf("\n\t\t");
    conj[0]='\0';
    strcat(conj, "Ils ");
    strcat(conj, verb);
    strcat(conj, "ent");
    puts(conj);
    }
//-----------------------------------
system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;
}
