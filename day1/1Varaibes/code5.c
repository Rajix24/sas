#include <stdio.h>

int main (){
    
int temp;

	printf("Enter temperature en Celsius: ");
    scanf("%d", &temp);

	if(temp<0){
	printf("l'etat de l'eau est Solide");
	}
	else if (0<=temp>100){printf("l'etat de l'eau est Liquide");
	}
	else{
	printf("l'etat de l'eau est Gas");
	}
	
    return 0;
}

