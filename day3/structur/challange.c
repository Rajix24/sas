#include <stdio.h>
#include <string.h>

int main(){
	struct student
	{
		char nome[50];
		char prenome[50];
		int age;
	};
	
	struct student raji;
	raji.age = 20;
	printf ("age %d\n", raji.age);
	strcpy(raji.nome, "raji");
	
	printf("nome: %s\n", raji.nome);
	
	return 0;
}

