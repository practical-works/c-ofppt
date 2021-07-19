/* Exercice 27: Suite de Fibonacci
Ecrire un programme qui calcule la nième valeur de la suite de Fibonacci définie par:
U(0) = U(1) = 1     et     U(n) = U(n-1) + U(n-2)   ;   avec n >=2
Exemple : 
n=2 : U(2) = U(1) + U(0) =  1 + 1 =  2 
n=3 : U(3) = U(2) + U(1) =  2 + 1 =  3
n=4 : U(4) = U(3) + U(2) =  3 + 2 =  5 
n=5 : U(5) = U(4) + U(3) =  5 + 3 =  8   
n=6 : U(6) = U(5) + U(4) =  8 + 5 = 13
n=7 : U(7) = U(6) + U(5) = 13 + 8 = 21 */
#include<stdio.h>
main()
{
	int i=0, n, u;
	
	start:
	printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°° Suite de Fibonacci °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
	printf("  Calcul de (Un), la (n)ieme valeur de la suite de Fibonacci.\n\n\tEntrez une valeur de (n):\n\n");
	printf("\t\tn = ");
	scanf("%d", &n);
	
/* 
i=0 : u=1
i=1 : u=1
i=2 : u=2
i=3 : u=(3-1)+(3-2)=2+1=3
i=4 : u=(4-1)+(4-2)=3+2=5  !5 = 5+0 = 5 + 1^0
i=5 : u=(5-1)+(5-2)=4+3=7  !8 = 7+1 = 7 + 2^0
i=6 : u=(6-1)+(6-2)=5+4=9  !13 = 9+4 = 9 + 2^2
i=7 : u=(7-1)+(7-2)=6+5=11 !21 = 11+10 = 11 + 3^2

 */
	while (i<= n) {
		if (i==0 || i==1) {
			u = 1;
		} else if (i==2) {
			u = 2;
		} else {
			u = (i-1) + (i-2); 
		}
		i++;
	}
	printf("\n\t\tU(%d) = %d", n,u);

system("pause>nul");
system("cls");
fflush(stdin);
i=0;
goto start;
return 0;
}

//}
