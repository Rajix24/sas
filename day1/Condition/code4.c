#include <stdio.h>
#include<math.h>

int main (){
	int a, b, c;
	double x1, x2;
	int result;
	
	printf("entre 1er numbre: ");
	scanf("%d", &a);
	printf("entre 2eme numbre: ");
	scanf("%d", &b);
	printf("entre 2eme numbre: ");
	scanf("%d", &c);
	
	double delta = pow(b, 2) - 4*a*c;
	
	if (delta > 0){
		printf("la fonction accepte deux solution");
		x1 = (-b - sqrt(delta))/(2*a);
		x2 = (-b + sqrt(delta))/(2*a);
		printf("les deux solution est: %lf et %lf", x1, x2);
	}else if (delta = 0){
		printf("la fonction accepte un solution");
		x1 = (-b - sqrt(delta))/(2*a);
		printf("la solution est: %lf", x1);
	}else{
		printf("une fonction n'accepte aucune solution");
	}
	
	return 0;
}
