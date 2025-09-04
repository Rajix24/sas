#include <stdio.h>
	void fac(int num){
		int result = 1;
		
		for(int i = 1; i <= num; i++){
			result *=i;
		}
		printf("result: %d ", result);

	}
	
	int main (){
		int num1;
		printf ("enter num: ");
		scanf("%d", &num1);
		
		fac(num1);
		return 0;
	}
	

