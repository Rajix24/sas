#include <stdio.h>

int main (){
	double year;
	char conv;
	
	printf("entre anne pour convertir: ");
	scanf("%lf", &year);
	
	getchar();
	printf("entre caractere pour convertir (M pour mois) (J pour jour) (H pour heure) (M pour minutes) (S pour les secondes): ");
	scanf("%c", &conv);
	
	switch(conv){
		case'M':
			year = 12 * year;
			printf("a la mois c'est: %lf", year);
			break;
		case'J':
			year =year * 365;
			printf("a la jour c'est: %lf", year);
			break;
		case'H':
			year = 365 * 24 * year;
			printf("a la Heures c'est: %lf", year);
			break;
		case'S':
			year = 365 * 24 * 60 * year;
			printf("a la Seconders c'est: %lf", year);
			break;
	}

	return 0;
}
