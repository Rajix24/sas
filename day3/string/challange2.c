#include <stdio.h>
#include <string.h>

int main(){
	int x, i;
	char string[x];	

	
	printf("entre le mot: ");
	scanf("%s", &string);
	for (i = 0; i <= x; i++){
		if(string[i]){
			x++;
		}
	}
	printf("%d", x);
	
	return 0;
}
