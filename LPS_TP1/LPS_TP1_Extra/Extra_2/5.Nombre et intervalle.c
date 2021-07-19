/* Nom: Nombre et intervalle
   Description: Afficher si un nombre N est dans une intervalle [x,y].*/
#include<stdio.h>
main(){
    float n, x,y ;
    
    start:
	printf("{ Nombre et intervalle }\n");
    printf("\nEntrez un nombre: ");
	scanf("%f", &n);
	printf("\nEntrez une intervalle:\n\n");
	printf("\tBorne inferieure: ");
	scanf("%f", &x);
	printf("\tBorne superieure: ");
	scanf("%f", &y);
	
	printf("\n");
	
	if (x>y) {
		printf("\aErreur! La borne inferieure doit etre inferieure a la borne superieure.", n,x,y);
	} else {
	
	if (n>=x && n<=y) {
		printf("%.2f appartient a l'intervalle [ %.2f , %.2f ].", n,x,y);
	} else {
		printf("%.2f n'appartient pas a l'intervalle [ %.2f , %.2f ] !", n,x,y);
	}
}
	printf("\n");
	
system("pause>nul");
system("cls");
goto start;
return 0;
}
