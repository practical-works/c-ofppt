// U(0) = U(1) = 1	et	U(n) = U(n-1) + U(n-2)
#include<stdio.h>
int Febo (int n) {
	if(n<0) n=-n;
	if(n==0 || n==1) return 1;
	if(n>=2) return Febo(n-1)+Febo(n-2);
}
main()
{
	int a;
	start:
	printf("Suite de Febonacci:\n\n");
	printf("Entrez un entier: "); 
	scanf("%d", &a); a=abs(a);
	printf("U(%d) = %d", a,Febo(a));
	system("pause>nul"); system("cls"); goto start;
}
