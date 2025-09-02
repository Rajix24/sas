#include <stdio.h>

int main (){
    
    int y, km;

    
    printf("Enter la distance en KM: ");
    scanf("%d", &km);
    
    y = km *1093.61;
    
    printf("la distance en Yards: %d", y);    
    
    return 0;
}

