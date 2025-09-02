#include <stdio.h>

int main (){
	
	int num;
	
	printf("enter number: ");
	scanf("%d", &num);
	
	int num1 = num %2;
	
	if (num1 == 0){printf("numbre %d est pair", num);
	}else {printf("numbre %d est impair", num);
	}

	
	return 0;
}
