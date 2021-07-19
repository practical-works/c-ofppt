//Convertisseur de secondes
#include<stdio.h>
main()
{
	int s, sec, min, hrs, jrs, mon, yrs; 
	int yr_s, mo_s, jr_s, hr_s, min_s;
	
	start:
	min_s = 60;
	hr_s = 60*min_s;
	jr_s = 24*hr_s;
	mo_s = 31*jr_s;
	yr_s = 12*mo_s;
	
	printf("Convertisseur de secondes\n\n");
	printf("Entrez un nombre de secondes: ");
	scanf("%d", &s);
	
	yrs = s / yr_s;
	mon = (s%yr_s) / mo_s;
	jrs = ((s%yr_s)%mo_s) / jr_s;
	hrs = (((s%yr_s)%mo_s)%jr_s) / hr_s;
	min = ((((s%yr_s)%mo_s)%jr_s)%hr_s) / min_s;
	sec = ((((s%yr_s)%mo_s)%jr_s)%hr_s) % min_s; //
	
	printf("\n%d secondes = %d ans, %d mois, %d jours, %d heures, %d minutes, %d secondes.", s, yrs, mon, jrs, hrs, min, sec);

system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;

}
