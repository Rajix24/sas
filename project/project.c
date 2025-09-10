#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void search();
void list();
void add();
void show();
void edit();
void delete();
void statistics();

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
    int ID;
    
};

int count = 0;
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

                add();//add section
                break;
                system("clear");
            case 2://show section
                show();
                break;
                system("clear");
            case 3://edit section
                edit();
                break;
                system("clear");
            case 4://delete section
                delete();
                break;
                system("clear");
            case 5://search section
                search();
                break;
                system("clear");
            case 6:
                statistics();
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
    printf("0. exit \n");
    printf("\n===================================\n");
    printf("\n");
    
}
void add(){// fuction that add new player to team //ddesign not donne || ecssecrey not yet 
    int next_id = 1;
    int Number_of_players;
    
    if (count >= 50)
    {
        printf("\033[0;31m== You can't enter more ==\033[0m\n");
    }
    
    printf("\n==== enter how many players you want to engistre =====\n");
    printf("Enter here: ");
    scanf("%d", &Number_of_players);

    for(int i = 0; i < Number_of_players; i++){
        
        player[i].ID = next_id++;

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
            printf("Player ID : %d\n", player[i].ID);
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
void edit(){// function that edit info of players
    int Edit_choice;
    char new_name[100];
    char found_name[100];
    char new_last_name[100];
    int new_age;
    int new_goals_numbers;
    int found = 0;

    if (count == 0) {
    printf("=== No players added till now ===\n");
     return;
    }
     printf("Enter name: ");
     scanf(" %[^\n]", found_name);
     for (int i = 0; i < count; i++) {
          if (strcmp(player[i].name, found_name) == 0) {
        do
        {
        printf("=== What you want to change ===\n");
        printf("1.Name ?\n");
        printf("2.Last Name\n");
        printf("3.age?\n");
        printf("4.Goal?\n");
        printf("0.for go back to list\n");
        printf("\n");
        printf("Enter you choice: \n");
        scanf("%d", &Edit_choice);
        getchar();

        switch (Edit_choice)
        {
            case 1:
                printf("Enter new name: \n");
                scanf(" %[^\n]", new_name);
                    strcpy(player[i].name, new_name);
                break;
                system("clear");
            case 2:
                printf("Enter new last name: \n");
                scanf(" %[^\n]", new_last_name);
                        strcpy(player[i].last_name, new_last_name);
                break;
                system("clear");
            case 3:
                        printf("Enter new age:");
                        scanf("%d", &new_age);
                        getchar();
                        player[i].age = new_age;
                break;
                system("clear");
            case 4:
                        printf("Enter new Goals Number:");
                        scanf("%d", &new_goals_numbers);
                        player[i].goals= new_goals_numbers;
                        getchar();
                break;
                system("clear");
            default :
                printf("\n== number that you Enter is not on the list try again ==\n");
            }
        } while (Edit_choice != 0);

         }
         found++;
      }

    if (found == 0)
    {
        printf("player that you looking for is not on the system");
    }
    

}
void search() {// fuction that search for players
    if (count == 0) {
        printf("=== No players added till now ===\n");
        return;
    }
    int found = 0;
    char found_player[100];
    int choice_search;
    int searchID;

    printf ("\n=== 1. If you want to search by name  ===\n");
    printf ("\n=== 2. If Do you what search by ID ===\n");
    printf("Enter here: ");
    scanf("%d", &choice_search);

        switch(choice_search){
            case 1:

                printf ("\n");
                printf("enter Player name:");
                scanf(" %[^\n]", found_player);
                getchar();
                for (int i = 0; i < count; i++) {
                    if (strcmp(player[i].name, found_player) == 0) {
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
            break;
        case 2:
          printf("Player ID: ");
            scanf(" %d", &searchID);
            getchar();


             for (int i = 0; i < count; i++)
            {
                if(searchID == player[i].ID){
                    printf ("\n\033[0;32m=============== players %d ===============\033[0m\n", i + 1);
                    printf ("\n");
                    printf("Name: %s\n", player[i].name);
                    printf("Last name: %s\n", player[i].last_name);
                    printf("Player ID : %d\n", player[i].ID);
                    printf("T_shirt number: %d\n", player[i].t_shirt_number);
                    printf("Position: %s\n", player[i].position);
                    printf("Age: %d\n", player[i].age);
                    printf("Goals: %d\n", player[i].goals);
                    printf("Registration date: %s\n", player[i].registration_date);
                    printf("Status: %s\n", player[i].status);
                    printf("\n");
                    printf("\n===================================================\n");
                    found ++;
                    break;
                }  
                if (found != 0) {
                printf("\n\033[0;31m== Player you are looking for does not exist ==\033[0m\n");
                }
            }
            break;
        }
}
void delete(){//function that delete element

    char confi;
    int found = 0;
    char name[100];
    int choice_search;
    int search_id;

    printf ("\n=== 1. If you want to search by name  ===\n");
    printf ("\n=== 2. If Do you what search by ID ===\n");
    scanf("%d", &choice_search);

    switch (choice_search)
    {
        case 1:

            printf("Name of the player: ");
            scanf(" %[^\n]", name);
            getchar();

        
        
            for (int i = 0; i < count; i++)
            {
                if (strcmp(name, player[i].name) == 0)
                {

                printf ("\n\033[0;32m=============== players %d ===============\033[0m\n", i + 1);
                printf ("\n");
                printf("Name: %s\n", player[i].name);
                printf("Last name: %s\n", player[i].last_name);
                printf("Player ID : %d\n", player[i].ID);
                printf("T_shirt number: %d\n", player[i].t_shirt_number);
                printf("Position: %s\n", player[i].position);
                printf("Age: %d\n", player[i].age);
                printf("Goals: %d\n", player[i].goals);
                printf("Registration date: %s\n", player[i].registration_date);
                printf("Status: %s\n", player[i].status);
                printf("\n");

                printf("\n=============== delete contact ============\n");
                    printf("\033[0;31m Are you sure to delete this contact(type 'o' if yes): \033[0m");
                    scanf("%s", &confi);
                    if (confi == 'o' || confi == 'O')
                    {
                        for (int j = i; j < count; j++) {
                                    strcpy(player[j].name, player[j + 1].name);
                                    strcpy(player[j].last_name, player[j + 1].last_name);
                                    strcpy(player[j].position, player[j + 1].position);
                                    strcpy(player[j].registration_date, player[j + 1].registration_date);
                                    strcpy(player[j].status, player[j + 1].status);
                                    player[i].ID = '\0';
                                    player[i].t_shirt_number = player[j + 1].t_shirt_number;
                                    player[i].age = player[j+1].age;
                                    player[i].goals = player[j + 1].goals;
                                    count--;
                                    found ++;
                                    printf("\n\033[0;32m== Contact supprime are seccesse. ==\033[0m\n");
                                    }
                    }else{printf("\n\033[0;31m== supprime are cancel ==\033[0m\n");}
                }
                
                if (found == 0)
                {
                    printf ("\n\033[0;31m== Name that you enter not exist ==\033[0m\n");
                }
        }
            
        break;
    case 2: 
    
            printf("Player ID : ");
            scanf(" %d", &search_id);
            getchar();

            for (int i = 0; i < count; i++)
            {
                if(search_id == player[i].ID){
                    printf ("\n\033[0;32m=============== players %d ===============\033[0m\n", i + 1);
                    printf ("\n");
                    printf("Name: %s\n", player[i].name);
                    printf("Last name: %s\n", player[i].last_name);
                    printf("Player ID : %d\n", player[i].ID);
                    printf("T_shirt number: %d\n", player[i].t_shirt_number);
                    printf("Position: %s\n", player[i].position);
                    printf("Age: %d\n", player[i].age);
                    printf("Goals: %d\n", player[i].goals);
                    printf("Registration date: %s\n", player[i].registration_date);
                    printf("Status: %s\n", player[i].status);
                    printf("\n");
                    printf("\n===================================================\n");
                }else{
                    printf("\n=== player that you looking for is not exsit ===\n");
                }

                    printf("\n=============== delete contact ============\n");
                    printf("\033[0;31m Are you sure to delete this contact(type 'o' if yes): \033[0m");
                    scanf("%s", &confi);
                    if (confi == 'o' || confi == 'O'){
                        for (int j = i; j < count; j++) {
                                    strcpy(player[j].name, player[j + 1].name);
                                    strcpy(player[j].last_name, player[j + 1].last_name);
                                    strcpy(player[j].position, player[j + 1].position);
                                    strcpy(player[j].registration_date, player[j + 1].registration_date);
                                    strcpy(player[j].status, player[j + 1].status);
                                    player[i].ID = '\0';
                                    player[i].t_shirt_number = player[j + 1].t_shirt_number;
                                    player[i].age = player[j+1].age;
                                    player[i].goals = player[j + 1].goals;
                                    count--;
                                    found ++;
                                    printf("\n\033[0;32m== Contact supprime are seccesse. ==\033[0m\n");}
                    }else
                        {printf("\n\033[0;31m== supprime are cancel ==\033[0m\n");}
                                    
                if (found == 0)
                {
                    printf ("\n\033[0;31m== Name that you enter not exist ==\033[0m\n");
                }

            }
            break;
            
    
    default:
            printf("\n=== Number that you enter is not in the list ===\n");
        break;
    }
}
void statistics(){
    //total of players
    // moyenne age age++, /count
    //player that has more goals
    //the best player that has max goals and show it 
    //the small player in the team
int sta_choice;

    do
    {
        printf("\n=============== list statisctics ===================\n");
        printf("\n");
        printf("1. Number of player in total\n");
        printf("2. Moyenne of players\n");
        printf("3. player that has most Goals\n");
        printf("4. Show top scorer\n");
        printf("5. Show youngest and oldest player\n");
        printf("0. exist\n");
        printf("\n");

        printf("Enter votre choice: ");
        scanf("%d", &sta_choice);

        switch (sta_choice)
        {
        case 1:
            int total_age = 0;
            printf("\n=== Total of players ===\n");
            printf("\n");
            printf("Total of players is: %d", count);
            printf("\n");
            printf("\n=========================\n");
            printf("\n");
            for (int i = 0; i < count; i++)
            {
             printf("Name player[%d]: %s %s\n", i + 1, player[i].name, player[i].last_name);   
            }
            printf("\n");
            break;
        case 2:
            for (int i = 0; i < count; i++)
            {
                    total_age  +=  player[i].age;
            }
                int average_age = 0; 
                average_age = total_age / count; 
                printf("\n=============== average age =====================\n");
                printf("average age of players is %d \n", average_age);
                printf("\n=================================================\n");
                break;
        case 3:
            int score;
            printf("\n===================== score ======================\n");
            printf("\n");

            printf("Enter score: ");
            sacnf("%d", &score);
            for (int i = 0; i < count; i++)
            {
                if (score < player[i].age){
                    printf("Name:     %s      ||     %d", player[i].name, player[i].goals);
                }else{
                    printf("\n=== NO player has reach that score yet ===\n");
                }
            }
            break;
            
        case 4:
                int max_goals = player[0].goals;
                for (int i = 0; i < count; i++)
                {
                    if (player[i].age > max_goals)
                    {
                        max_goals =player[i].goals;
                        printf("player that has must goals is: %s", player[i].name);
                        printf("his score is: %d", player[i].goals);
                    }
                }
            break;

        case 5:
        for (int i = 0; i < count; i++)
        {
            if (player[i].age > 18)
                {
                    printf("Olders players are: ");
                    printf("Name: %s", player[i].name);
                }else if (player[i].age < 18){
                    printf("Olders players are: ");
                    printf("Name: %s", player[i].name);
                }
        }
        default:
            break;
        }

    } while (sta_choice !=0);
    
}




