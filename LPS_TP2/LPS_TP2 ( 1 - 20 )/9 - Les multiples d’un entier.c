/* Exercice 9: Les multiples d’un entier
Ecrire un programme qui affiche tous les multiples de k compris entre a et b 
où k, a et b sont trois entiers entrés par l'utilisateur.*/
main()
{
	int i, k, a,b;
	
	start:
	printf("\n\t\t\t{ Les multiples d'un entier }\n");
	do {
		printf("\n Entrez un entier: ");
	    scanf("%d", &k);
	} while (k==0);
	
	printf("\n Donnez l'intervalle des multiples:\n");
	printf("\n Miniumu: ");
	scanf("%d", &a);
	printf("\n Maximum: ");
	scanf("%d", &b);
	printf("\n");
	
	for (i=a ; i<=b ; i++) {
		if (i%k == 0) {
			printf("   %d\t", i);
			sleep(1);
		}
	}
	
	system("pause>nul");
	system("cls");
	goto start;
	return 0;
}
