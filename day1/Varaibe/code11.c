   #include <stdio.h>
   
   int main (){
    
   float longueur, largeur;

    
    
    printf("enter longueur de rectangle: ");
    scanf("%f", &longueur);
    
    printf("enter largeur de rectangle: ");
    scanf("%f", &largeur);

	double Surface = longueur * largeur;
	
	printf("surface de rectangle est: %f ", Surface);
    
   return 0;
}
