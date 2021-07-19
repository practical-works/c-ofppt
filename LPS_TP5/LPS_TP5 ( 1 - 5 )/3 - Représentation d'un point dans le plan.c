/* Exercice 3 : Représentation d'un point dans le plan
Définir une structure Point permettant de représenter un point dans le plan.
1- Lire et afficher un point A(X, Y) où X et Y sont les coordonnées du point A (saisies par l’utilisateur)
2- Calculer la distance D entre deux points A et B : D^2 = (XA – XB)^2 + (YA – YB)^2
3- Calculer la circonférence du triangle engendré par 3 points A, B et C : Circ = D(A, B) + D(B, C) + D(A, C)
où D(A, B) est la distance entre A et B */
#include<stdio.h>
#include<math.h>
struct point {
	int x, y;
};
main()
{
	struct point A, B, C;
	int D_AB, D_BC, D_AC, Circ;
	start:
	printf("Representation d'un point dans le plan\n\n");
	printf("Entrez les coordonnes du point A :\n\n");
	printf("\tAbscisse X(A) : ");
	scanf("%d", &A.x);
	printf("\tOrdonnee Y(A) : ");
	scanf("%d", &A.y);
	printf("\nEntrez les coordonnes du point B :\n\n");
	printf("\tAbscisse X(B) : ");
	scanf("%d", &B.x);
	printf("\tOrdonnee Y(B) : ");
	scanf("%d", &B.y);
	printf("\nEntrez les coordonnes du point C :\n\n");
	printf("\tAbscisse X(C) : ");
	scanf("%d", &C.x);
	printf("\tOrdonnee Y(C) : ");
	scanf("%d", &C.y);
	D_AB = sqrt( pow(A.x-B.x , 2) + pow(A.y-B.y , 2) );
	D_BC = sqrt( pow(B.x-C.x , 2) + pow(B.y-C.y , 2) );
	D_AC = sqrt( pow(A.x-C.x , 2) + pow(A.y-C.y , 2) );
	Circ = D_AB + D_BC + D_AC;
	printf("\nPoints :\n\n");
	printf("\tA(%d,%d)\tB(%d,%d)\tC(%d,%d)\n\n", A.x,A.y, B.x,B.y, C.x,C.y);
	printf("Distances entre les points :\n\n");
	printf("\tD(A,B) = %d\tD(B,C) = %d\tD(A,C) = %d\n\n", D_AB,D_BC,D_AC);
	printf("Circonference du triangle engendre par les trois points :\n\n");
	printf("\tCirc = %d\n", Circ);

system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;
}
