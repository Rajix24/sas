#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void search(char search_player[]);
void list();
void add();
void show();
//void Edit();
//void delete();
void search_player(char search_player[]);
//void stast();

struct players
{
    char name[100];
    char last_name[100];
    int t_shirt_number;
    char position[100];
    int age; 
    int goals;
    char registration_date[100];
    char status[100];
};

int count = 0;
char found_player[100];
struct players player[50];

int main (){

    int choice;

    do
    {
        list();

        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();
        system("clear");


        switch(choice){

            case 1:

                add();
                system("clear");

                break;
            case 2:
            
                show();

                break;
                system("clear");


            //case 3:

                

            case 3:
                printf ("\n");
                printf("enter Player name:");
                scanf(" %[^\n]", found_player);
                getchar();
                search(found_player);
                break;
                system("clear");

        }

        if(choice != 0 ){
        printf("\nAppuyez sur Entree pour continuer...\n");
        getchar();
        system("clear");
        }

    } while (choice != 0);

    printf("\033[0;32m\n=============== Good By ====================\033[0m\n");

    system("clear");

    return 0;
    
}
void list(){// fuction show to user list of choices //done disign not || ecssecrey not yet

    printf("\n============== list ==============\n");
    printf("\n");
    printf("Enter Number that you want: \n");
    printf("\n");
    printf("1. Add players \n");
    printf("2. show all players \n");
    printf("3. Edit the info of player \n");
    printf("4. delete players \n");
    printf("5. search for players \n");
    printf("6. stast players \n");
    printf("0. ajoute players \n");
    printf("\n===================================\n");
    printf("\n");
    
}
void add(){// fuction that add new player to team //ddesign not donne || ecssecrey not yet 

    int Number_of_players;

    printf ("\n============== add contact ==============\n");
    
    if (count >= 50)
    {
        printf("\033[0;31m== You can't enter more ==\033[0m\n");
    }

    printf("\n==== enter how many players you want to engistre =====\n");
    printf("Enter here: ");
    scanf("%d", &Number_of_players);

    for(int i = 0; i < Number_of_players; i++){
        
        printf("\n\033[0;32m===== player N: %d =====\033[0m\n", i + 1);
        printf("\n");

        printf("Enter name: ");
        scanf(" %99[^\n]", player[count].name);
        getchar();

        printf("Enter Last Name: ");
        scanf(" %99[^\n]", &player[count].last_name);
        getchar();

        printf("Enter t_shirt Number: ");
        scanf(" %d", &player[count].t_shirt_number);
        getchar();

        printf("Enter position: ");
        scanf(" %99[^\n]", &player[count].position);
        getchar();

        printf("Enter age: ");
        scanf(" %d", &player[count].age);
        getchar();

        printf("Enter goals: ");
        scanf(" %d", &player[count].goals);
        getchar();

        printf("Enter Registration date : ");
        scanf(" %99[^\n]", &player[count].registration_date);
        getchar();

        printf("Enter status: ");
        scanf(" %99[^\n]", &player[count].status);
        getchar();

        printf("\n");
        printf("\033[0;32m== You just add %s ==\033[0m\n", player[count].name);
        
        count++;
    }
}
void show(){// function that show all the players registered


        printf ("\n============== Players list ==============\n");
        printf("\n");

    for (int i = 0; i < count; i++)
       {
            printf ("\n\033[0;32m=============== players %d ===============\033[0m\n", i + 1);
            printf ("\n");
            printf("Name: %s\n", player[i].name);
            printf("Last name: %s\n", player[i].last_name);
            printf("T_shirt number: %d\n", player[i].t_shirt_number);
            printf("Position: %s\n", player[i].position);
            printf("Age: %d\n", player[i].age);
            printf("Goals: %d\n", player[i].goals);
            printf("Registration date: %s\n", player[i].registration_date);
            printf("Status: %s\n", player[i].status);
            printf("\n");

       }
           printf("\n===================================================\n");

}
void edit(){

}
//void search_player(char found_name[]){
    
    //int i = search(found_name) + 1;
    
//     if(i == -1){    
//             printf ("\n\033[0;32m=============== players %s ===============\033[0m\n", player[i].name);
//             printf ("\n");
//             printf("Name: %s\n", player[i].name);
//             printf("Last name: %s\n", player[i].last_name);
//             printf("T_shirt number: %d\n", player[i].t_shirt_number);
//             printf("Position: %s\n", player[i].position);
//             printf("Age: %d\n", player[i].age);
//             printf("Goals: %d\n", player[i].goals);
//             printf("Registration date: %s\n", player[i].registration_date);
//             printf("Status: %s\n", player[i].status);
//             printf ("\n");
//            printf("\n===================================================\n");
        
//     }
// }
void search(char search_player[]) {
    if (count == 0) {
        printf("=== No players added till now ===\n");
        return;
    }

    int found = 0;

    for (int i = 0; i < count; i++) {
        if (strcmp(player[i].name, search_player) == 0) {
            printf("\n\033[0;32m=============== Player: %s ===============\033[0m\n", player[i].name);
            printf("Name: %s\n", player[i].name);
            printf("Last name: %s\n", player[i].last_name);
            printf("T-shirt number: %d\n", player[i].t_shirt_number);
            printf("Position: %s\n", player[i].position);
            printf("Age: %d\n", player[i].age);
            printf("Goals: %d\n", player[i].goals);
            printf("Registration date: %s\n", player[i].registration_date);
            printf("Status: %s\n", player[i].status);
            printf("===================================================\n");
            found ++;
            break;
        }
        
    }

    if (found == 0) {
        printf("\n\033[0;31m== Player you are looking for does not exist ==\033[0m\n");
    }
}






