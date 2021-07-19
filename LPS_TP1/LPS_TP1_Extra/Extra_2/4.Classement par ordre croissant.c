/* Nom: Classement par ordre croissant
   Description: Afficher trois nombres en ordre croissant (du plus petit au plus grand).*/
#include<stdio.h>
main()
{
	float a,b,c, _1,_2,_3;
	
	start:
	
	printf("{ Classement par ordre croissant de trois nombres }");
	printf("\nEntrez trois nombres:\n\n");
	printf("\tPremier nombre: ");
	scanf("%f", &a);
	printf("\tDeuxieme nombre: ");
	scanf("%f", &b);
	printf("\tTroisieme nombre: ");
	scanf("%f", &c);
	
	printf("\n____________________________\n");

	if (a>=b && a>=c) {
		_1 = a ;
		if (b>c) {
			_2 = b ;
			_3 = c ;
		} else {
			_2 = c ;
			_3 = b ;
		}
	}
	if (b>=a && b>=c) {
		_1 = b ;
		if (a>c) {
			_2 = a ;
			_3 = c ;
		} else {
			_2 = c ;
			_3 = a ;
		}
	}
	if (c>=a && c>=b) {
		_1 = c ;
		if (a>b) {
			_2 = a ;
			_3 = b ;
		} else {
			_2 = b ;
			_3 = a ;
		}
	}
	
	printf("\n\t%.2f\n\t%.2f\n\t%.2f\n", _1,_2,_3);
	
	system("pause>nul");
	system("cls");
	_1 = _2 = _3 = 0 ;
	goto start;
	return 0;	
}
