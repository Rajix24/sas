#include <stdio.h>

int main (){
	
	int a, b, result;
	
	printf("entre 1er numbre: ");
	scanf("%d", &a);
	printf("entre 2eme number: ");
	scanf("%d", &b);
	
	if(a == b){
		result = (a+b)*3;
		printf("%d", result);	
	}else{
		result = a+b;
		printf("%d", result);	
	}
	
	return 0;
}
