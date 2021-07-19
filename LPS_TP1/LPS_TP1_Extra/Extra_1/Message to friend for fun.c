/* Nom: Message to friend for fun ^_^
   Description: Show & hide a serie of messages in screen*/
//------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

msg(char message[1000]) 
{
printf("\n\n\n\n\n\n\n\t\t%s", message); 
sleep(2); 
system("cls"); 
}

bip()
{
	printf("\a");
}
//------------------------------------------------------------------

main()
{
	int n,m= 10;
	int p[10][10];
    int i,j,k;
    int kk,dd,aa;
    int match_time, match_end=60;
	
	msg("o.o");
	bip();
	msg("Ciao Giuseppe !");
	msg("Come stai ?");
	msg("^_^");
	msg("Bene !");
	msg("Allora, che cosa dovrei con questo computer ?");
	msg("Si, cominciamo a copiare cose strane");
	msg("=D");
	msg("Pronto ?");
	msg("Perfetto !");
	msg("Cominciamo !");
	bip();
	
	for (n=0;n<=m;n++) {
		printf("\n\n\n\n\n\n\n\t\tCaricamento in corso ... ( %d %% )\n", n);
		sleep(1); 
        system("cls");
	}
	
	bip();
	msg("E fatta !");
	
	//program for printing Pascal's Triangle
    for(i=0;i<10;i++) {
	j=1;
    p[i][0]=1;
    p[i][i]=1;
    while(j<i) {
	p[i][j]=p[i-1][j-1]+p[i-1][j];
    j++;
	}
	}
    for(i=0;i<10;i++) {
	j=10;
    while(j>i) {
	printf("  ");
    j--;
	}
    for(k=0;k<=i;k++) {
	printf("%4d",p[i][k]);
	}
    printf("\n\n");
    }

system("pause");
system("cls");
sleep(1);
bip();

msg("Bonus: The score when");
msg("when you play a match with Yasuo");
kk = dd = aa = 0 ;
	for (match_time=0 ; match_time<=match_end ; match_time++) {
		printf("\n\n\n\n\n\n\n\t\tYASUO :");
		printf("\n\t\t%d min : %d / %d / %d    (Kills/Deaths/Assists)\n", match_time, kk,dd,aa);
		if (match_time<=15) {
			dd += 1||0;
		} else if (match_time>30) {
			kk +=5;
		} else {
			dd += 1;
			aa += 1||0;
		}
		
		sleep(1); 
        system("cls");
	}

//----------------------------------------
msg("Have a nice day :)");
msg("Bye ^^");
system("pause");
return 0;
}
