   #include <stdio.h>
   
   int main (){
    
   int a, b, c;
	float moygeo;
    
    
    printf("enter votre 1er num: ");
    scanf("%d", &a);
    
    printf("enter votre 2eme num: ");
    scanf("%d", &b);


    printf("enter votre 3eme num: ");
    scanf("%d", &c);

	moygeo = (a * b * c)^(1/3);
	
	printf("Moyenne est: %f ", moygeo);
    
   return 0;
}
