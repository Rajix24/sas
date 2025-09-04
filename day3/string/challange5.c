#include<stdio.h>
#include<string.h>


int main (){
	
	char string1 [50];
	printf("entre le nome ");
	scanf("%s", &string1);
	
	strrev(string1);
	
	printf("%s", string1);
	return 0;
}
