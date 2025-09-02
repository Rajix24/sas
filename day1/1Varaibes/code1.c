#include <stdio.h>

int main (){
    
    char nom[20], prenom[20], sexe[20], email[100];
    int age;
    
    printf("enter votre nom: ");
    scanf("%s", &nom);
    
    printf("enter votre prenom: ");
    scanf("%s", &prenom);


    printf("enter votre sexes: ");
    scanf("%s", &sexe);


    printf("enter votre email: ");
    scanf("%s", &email);
    
    printf("enter votre age: ");
    scanf("%d", &age);
    
    
    printf("votre nom est:%s\n", nom);
    printf("votre prenom est:%s\n", prenom);
    printf("votre sexe est:%s\n", sexe);
    printf("votre age est:%d\n", age);
    printf("votre email est:%s\n", email);
    
    
    return 0;
}
