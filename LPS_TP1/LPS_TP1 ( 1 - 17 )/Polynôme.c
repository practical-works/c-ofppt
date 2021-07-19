//Polynôme
#include<stdio.h>
main()
{
	printf("================================\n");
	printf("{{ Valeur du polynôme : aX^3 + bX^2 + cX + d }}\n");
	printf("================================\n");
	float a,b,c,d,x,V;
	printf("Entrez le coefficient a: ");
	scanf("%f",&a);
	printf("Entrez le coefficient b: ");
	scanf("%f",&b);
	printf("Entrez le coefficient c: ");
	scanf("%f",&c);
	printf("Entrez le coefficient d: ");
	scanf("%f",&d);
	printf("________________________________\n");
	printf("Expression du polynôme: %f*(X^3) + %f*(X^2) + %f*(X)+ %f\n", a,b,c,d);
	printf("________________________________\n");
	printf("Entrez une valeur de X: ");
	scanf("%f",&x);
	V=(a*x*x*x)+(b*x*x)+(c*x)+d;
	printf("________________________________\n");
	printf("La valeur du polynôme au point X=%f est: %f\n", x,V);
	printf("________________________________\n");
}
