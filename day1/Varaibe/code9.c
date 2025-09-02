#include <stdio.h>
#include <math.h>

int main (){
	int x1, x2;
	int y1, y2;
	int z1, z2;
	
	printf("enter piont x1: ");
    scanf("%d", &x1);
    
	printf("enter point x2: ");
    scanf("%d", &x2);
	printf("enter point y1: ");
    scanf("%d", &y1);
    
    printf("enter point y2: ");
    scanf("%d", &y2);
    
    printf("enter point z1: ");
    scanf("%d", &z1);
    
    printf("enter point z2: ");
    scanf("%d", &z2);
	
	double dist = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2) + pow(z1 - z2, 2));
	
	printf("Distance est: %lf ", dist);
	
	return 0;
}
