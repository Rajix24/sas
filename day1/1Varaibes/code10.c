#include <stdio.h>
#include <math.h>

int main (){
	int r;
	const double  pi = 3.14159;
	
	printf("enter le rayon de la sphère (r): ");
    scanf("%d", &r);
    
    double volume = (4/3)*pi*pow(r, 3);
	//double volume = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2) + pow(z1 - z2, 2));
	
	printf("volume est: %lf ", volume);
	
	return 0;
}
