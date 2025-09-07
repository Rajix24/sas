#include <stdio.h>


	int sum(int a, int b)
	{
		int result = a * b;
		return result;
	}
	
	
	int main (){
		
		int x,y;
		printf("enter munber 1: ");
		scanf("%d", &x);
		printf("enter munber 2: ");
		scanf("%d", &y);
		
		int output = sum(x, y);
		printf("resullt: %d\n", output);
	
	return 0;
	}
