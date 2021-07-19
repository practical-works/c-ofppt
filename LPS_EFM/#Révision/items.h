#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct {
	int number;
	float value;
	char text[100];
} item;
read_item(item tab[], int i) {
	printf("Enter number: ");
	scanf("%d",&tab[i].number);
	printf("Enter value: ");
	scanf("%f",&tab[i].value);
	printf("Enter text: ");
	scanf("%s",tab[i].text);
}
read_tab(item tab[], int *size) {
	int i;
	printf("Enter table size: ");
	scanf("%d",&(*size));
	for (i=0; i<*size; i++) {
		read_item(tab,i);
	}
}
display_item(item tab[], int i) {
	printf("%d %.2f %s\n",tab[i].number, tab[i].value, tab[i].text);
}
display_tab(item tab[], int size) {
	int i;
	for (i=0; i<size; i++) {
		display_item(tab,i);
	}
}
//----------------------------
add_item(item tab[], int size) {
	int i, position;
	do {
		printf("Enter position [0,%d]: ",size);
		scanf("%d",&position);
		if (position>size || position<0) {
			printf("Invalid position!");
		}	
	} while (position>size || position<0);
	for (i=size; i>position; i--) {
		tab[i] = tab[i-1];
	}
}
