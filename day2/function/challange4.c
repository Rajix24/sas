#include <stdio.h>


	void min(int a, int b)
	{
		if(a < b){
			printf("output: %d", a);
			return a;
		}else {
			printf("output: %d", b);
		}return b;
	}
	
	
	int main (){
		
		int x,y;
		printf("enter munber 1: ");
		scanf("%d", &x);
		printf("enter munber 2: ");
		scanf("%d", &y);
		
		min(x, y);
		
	
	return 0;
	}
