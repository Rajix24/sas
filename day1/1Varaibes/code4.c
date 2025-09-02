#include <stdio.h>

int main (){
    
    int ms, kmh;

    
    printf("Enter la vitasse en kilometres par heure: ");
    scanf("%d", &kmh);
    
    ms = kmh *0.27778;
    
    printf("la vitasse en m/s est: %d", ms);    
    
    return 0;
}

