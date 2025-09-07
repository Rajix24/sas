#include <stdio.h>

int main (){
    
int a, b, result;
char operator;

	printf("Enter le operator (+ - * /): ");
    scanf("%c", &operator);


	printf("enter le 1er num: ");
    scanf("%d", &a);

	
	printf("enter le 2eme num: ");
    scanf("%d", &b);
    
    switch(operator){
    	case'+':
    		result = a + b;
    		printf("result de %d + %d est %d", a, b, result);	
			break;	
    	case'-':
    		result = a - b;
    		printf("result de %d - %d est %d", a, b, result);
    		break;
    	case'*':
    		result = a * b;
    		printf("result de %d * %d est %d", a, b, result);
    		break;
    	case'/':
    		if (b != 0){
    			result = a / b;
    		printf("result de %d / %d est %d", a, b, result);
			}else {
			printf("impossible pour divise par 0");
			}
			break;
		default:	
			printf("operator not exist");
    		
	}
		
    return 0;
}
