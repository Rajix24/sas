#include <stdio.h>

int main (){
    
   int num1, num2, num3;
	float moy;
    
    
    printf("enter votre 1er ponderation: ");
    scanf("%d", &num1);
    
    printf("enter votre 2eme ponderation: ");
    scanf("%d", &num2);


    printf("enter votre 3eme ponderation: ");
    scanf("%d", &num3);

	moy = (num1 + num2 + num3) / 3;
	
	printf("Moyenne est: %f ", moy);
    
    
    return 0;
}
