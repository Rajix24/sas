#include <stdio.h>

int main (){
	double numbre;
	
	printf("entre number: ");
	scanf("%lf", &numbre);

	if (numbre < 0){
		printf("C'est number est negatif ");
	}else if (numbre > 0){
		printf("C'est number est positif ");
	}else{
		printf("C'est number est null");
	}

	return 0;
}
