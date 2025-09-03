#include <stdio.h>


int size,i,j,temp;


int main() {
	
	printf("enter size of table:");
	scanf("%d",&size);
	
	int tab[size];
	
	printf("Entrer les elements\n");
	for(i=0;i<size;i++){
		printf("[%d] = ",i);
		scanf("%d",&tab[i]);
	}
	printf("\n");

	
	for(i=0;i<size;i++){
		printf("[%d] = %d\n",i,tab[i]);
	}
	
	
	
	return 0;
}
