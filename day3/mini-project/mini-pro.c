#include <stdio.h>
#include <string.h>
#define MAX 100


int count = 0;

struct contact  
{
   char name[MAX];
   char num[MAX];
   char email[MAX];
};



struct contact per;
void addcontact();





int main (){

    struct contact per;
    int choice;


    do
    {

            printf ("\n==================== Menu =====================\n");
            printf ("entere le nomber que tu veux:\n");
            printf ("entere 1 pour ajoute un livre\n"); 
            printf ("entere 2 Afficher Tous les Livres Disponibles:\n");
            printf ("entere 3 Mettre la Quantitity d'un Livre: \n");
            printf ("entere 4 Supprimer un Livre du Stock: \n");
            printf ("entere 5 Supprimer un Livre du Stock: \n");
            printf ("entere 6 Afficher le Nombre Total de Livres en Stock:\n");
            printf ("entere 7 pour exit:\n");
            printf ("\n===========================================\n");
            printf("\n");
            printf ("enter le choix:");
        
            scanf("%d", &choice);


            switch ((int)choice)
            {
            case 1:
                addcontact();
                break;
            
            default:
                break;
            }
    } while (choice != 0);




    return 0;
}


void addcontact(){

    if (count >= MAX)
    {
        printf("you can't enter more");
    }

    printf("Enter name: ");
    fgets(per.name, sizeof(per.name), stdin);
    per.name[strcspn(per.name, "\n")] = '\0';
    getchar();

    printf("Enter email: ");
    fgets(per.email, sizeof(per.email), stdin);
    per.name[strcspn(per.email, "\n")] = '\0';
    getchar();
    
    
    printf("Enter phone number: ");
    fgets(per.num, sizeof(per.num), stdin);
    per.num[strcspn(per.num, "\n")] = '\0';
    getchar();
    
    printf("error this nuber that you enter not valide!");

    count++;
}
