#include<stdio.h>
#include<string.h>

int main (){
		int size;
		int size1;
		
	char name[size];
	char lastname[size];
	size = sizeof (name)/sizeof(name[0])-1;
	size1 = sizeof (lastname)/sizeof(lastname[0])-1;
	
	printf("entre word: ");
	scanf("%s", &name);
	printf("entre word: ");
	scanf("%s", &lastname);
	
	
	if(strcmp(name, lastname) == 0){
		printf(" les cha�nes sont �gales");
	}else{
				printf(" les cha�nes sont diff�rentes.");
	}
	
	return 0;
}
