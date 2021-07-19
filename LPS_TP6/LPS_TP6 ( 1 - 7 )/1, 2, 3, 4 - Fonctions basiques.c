#include<stdio.h>
//---------------------------
void separator() {  // Séparateur des portions des textes du programme xD 
	puts("-------------------------------------------");
}
//---------------------------
// Exercice 1 : Produit de 2 nombres A et B
int produit(int A, int B) {
	return A*B;
}
// Exercice 2 : Moyenne arithmétique de 2 nombres réels
float moyenne(float A, float B) {
	return (A+B)/2;
}
//Exercice 3 : Comparaison de deux nombres A et B
void comparaison(int A, int B) {
	if (A==B) {
		printf("\nLes deux nombres sont identiques.\n");
	} else if (A>B) {
		printf("\nLe nombre %d est superieur au nombre %d.\n", A,B);
	} else {
		printf("\nLe nombre %d est superieur au nombre %d.\n", B,A);
	}
}
//Exercice 4 : Fonctions MAX et MIN de 2 nombres réels.
//Utiliser les fonctions MIN et MAX pour déterminer le minimum et maximum de 4 nombres réels.
float MAX(float A, float B) {
	if (A>=B) {
		return A;
	} else {
		return B;
	}
}
float MIN(float A, float B) {
	if (A<=B) {
		return A;
	} else {
		return B;
	}
}
// Programme principal
main()
{
	system("color 5e");
	int a, b;
	float x,y, v,w;
	start:
	// Exercice 1 : Produit de 2 nombres A et B
	printf("\nProduit de 2 nombres\n\n");
//	enter_int(a,b);
	printf("\tEntrez le 1er nombre : ");
	scanf("%d", &a);
	printf("\tEntrez le 2eme nombre : ");
	scanf("%d", &b);
	printf("\nLe produit est %d.\n", produit(a,b));
	separator();
	// Exercice 2 : Moyenne arithmétique de 2 nombres réels
	printf("\nMoyenne arithmetique de 2 nombres reels\n\n");
	printf("\tEntrez le 1er nombre : ");
	scanf("%f", &x);
	printf("\tEntrez le 2eme nombre : ");
	scanf("%f", &y);
	printf("\nLa moyenne est %.2f.\n", moyenne(x,y));
	separator();
	//Exercice 3 : Comparaison de 2 nombres A et B
	printf("\nComparaison de 2 nombres\n\n");
	printf("\tEntrez le 1er nombre : ");
	scanf("%d", &a);
	printf("\tEntrez le 2eme nombre : ");
	scanf("%d", &b);
	comparaison(a,b);
	separator();
	//Exercice 4 : Fonctions MAX et MIN de 2 nombres réels.
	printf("\nMAX et MIN de 2 nombres reels\n\n");
	printf("\tEntrez le 1er nombre : ");
	scanf("%f", &x);
	printf("\tEntrez le 2eme nombre : ");
	scanf("%f", &y);
	printf("\nLe MAX est %.2f.\nLe MIN est %.2f.\n", MAX(x,y),MIN(x,y));
	separator();
	//Utiliser les fonctions MIN et MAX pour déterminer le minimum et maximum de 4 nombres réels.
	printf("\nMAX et MIN de 4 nombres reels\n\n");
	printf("\tEntrez le 1er nombre : ");
	scanf("%f", &x);
	printf("\tEntrez le 2eme nombre : ");
	scanf("%f", &y);
	printf("\tEntrez le 3eme nombre : ");
	scanf("%f", &v);
	printf("\tEntrez le 4eme nombre : ");
	scanf("%f", &w);
	printf("\nLe MAX est %.2f.\nLe MIN est %.2f.\n", MAX(MAX(x,y),MAX(v,w)),MIN(MIN(x,y),MIN(v,w)));
	
system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;
}
