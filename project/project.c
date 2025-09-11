#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>


void search();
void list();
void add();
void show();
void edit();
void delete_player();
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

int count = 10;// added
int next_id = 1;//added
struct players player[50] = {
    {"Cristiano", "Ronaldo", 7,  "attaker",    39, 850, "2025-09-11", "active", 1},
    {"Lionel",    "Messi",   10, "attaker",    38, 820, "2025-09-11", "active", 2},
    {"Kylian",    "Mbappe",   7, "attaker",    26, 250, "2025-09-11", "active", 3},
    {"Erling",    "Haaland",  9, "attaker",    25, 200, "2025-09-11", "active", 4},
    {"Kevin",     "DeBruyne",17, "middle",     34, 120, "2025-09-11", "active", 5},
    {"Luka",      "Modric",  10, "middle",     39, 95,  "2025-09-11", "active", 6},
    {"Neymar",    "Junior",  11, "attaker",    33, 450, "2025-09-11", "active",7},
    {"Virgil",    "VanDijk",  4, "defender",   34, 45,  "2025-09-11", "active", 8},
    {"Sergio",    "Ramos",    4, "defender",   39, 110, "2025-09-11", "retired",9},
    {"Manuel",    "Neuer",    1, "goalkeeper", 39, 0,   "2025-09-11", "active", 10}
};
int main (){

    int choice;

    do
    {
        list();

        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();
        system("cls");


        switch(choice){

            case 1:

                add();//add section
                break;
                system("cls");
            case 2://show section
                show();
                break;
                system("cls");
            case 3://edit section
                edit();
                break;
                system("cls");
            case 4://delete section
                delete_player();
                break;
                system("cls");
            case 5://search section
                search();
                break;
                system("cls");
            case 6:
                statistics();
                 break;
                system("cls");

        }

        if(choice != 0 ){
        printf("\nAppuyez sur Entree pour continuer...\n");
        getchar();
        system("cls");
        }

    } while (choice != 0);

    printf("\033[0;32m\n=============== Good By ====================\033[0m\n");

    system("cls");

    return 0;
    
}
void list(){// fuction show to user list of choices //done disign not || ecssecrey not yet
    
    printf("\n\033[0;32m================ list =================\033[0m\n");
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
    int Number_of_players;
    player[0].ID = next_id;
    next_id++;
    count++;
    int valide;
    if (count >= 50)
    {
        printf("\033[0;31m== You can't enter more ==\033[0m\n");
    }
    
    printf("\n\033[0;32m==== enter how many players you want to engistre =====\033[0m\n");
    printf("\n");
    printf("Enter here: ");
    scanf("%d", &Number_of_players);

    for(int i = 0; i < Number_of_players; i++){
        
        

        printf("\n\033[0;32m===== player N: %d =====\033[0m\n", i + 1);
        printf("\n");

        do{
            valide = 0;
        printf("Enter name: ");
        scanf(" %99[^\n]", player[count].name);
        getchar();
            for (int i = 0; i < strlen(player[count].name); i++) {
                if (isdigit(player[count].name[i])) {
                    valide = 1;
                    break;
                }
            }
            if(valide == 1) {printf("\033[0;31m      Name is not valide! try again\033[0m\n");}
        }while(valide == 1); 
         
        do{
            valide = 0;
        printf("Enter last name: ");
        scanf(" %99[^\n]", player[count].last_name);
        getchar();
            for (int i = 0; i < strlen(player[count].last_name); i++) {
                if (isdigit(player[count].last_name[i])) {
                    valide = 1;
                    break;
                }
            }
            if(valide == 1) {printf("\033[0;31m     Last name is not valide! try again\033[0m\n");}
        }while(valide == 1); 

        do{
            valide = 0;
            printf("Enter t_shirt Number: ");
            scanf(" %d", &player[count].t_shirt_number);
            getchar();
            if ( player[count].t_shirt_number < 100 && player[count].t_shirt_number > 0 ){ 
                valide ++;
            }
            if(valide == 0) {printf("\033[0;31m     Number is not valide! try again\033[0m\n");}
        }while( valide == 0);

        do{
        printf("Enter position(goalkeepe - defender - midfielders- forward): ");
        scanf(" %99[^\n]", player[count].position);
        getchar();
            if (strcmp(player[count].position, "goalkeeper") == 0 ||
            strcmp(player[count].position, "defender") == 0 ||
            strcmp(player[count].position, "midfielders") == 0 || 
            strcmp(player[count].position, "forward") == 0) {
            valide++;
            }
            if(valide == 1) {printf("\033[0;31m     Last name is not valide! try again\033[0m\n");}
        }while(valide == 1);

        do{
            valide = 0;
            printf("Enter age ( 14 - 45 ): ");
            scanf(" %d", &player[count].age);
            getchar();
            if ( player[count].age < 45 && player[count].age > 14 ){ 
                valide ++;
            }
            if(valide == 0) {printf("\033[0;31m     Last name is not valide! try again\033[0m\n");}
        }while( valide == 0);

            do{
            valide = 0;                
                printf("Enter goals: ");
                scanf(" %d", &player[count].goals);
                getchar();
            if ( player[count].goals < 1000 && player[count].goals > -1 ){ 
                valide ++;
            }
            if(valide == 0) {printf("\033[0;31m     Last name is not valide! try again\033[0m\n");}
        }while( valide == 0);

        do{
            valide = 0;
            printf("Enter status (active - reyierd - injured - suspended) : ");
            scanf(" %99[^\n]", player[count].status);
            getchar();
                if (strcmp(player[count].status, "active") == 0 ||
                    strcmp(player[count].status, "retied") == 0 ||
                    strcmp(player[count].status, "injured") == 0 || 
                    strcmp(player[count].status, "suspended") == 0) {
                valide = 1;
                }
                if(valide == 0) {printf("\033[0;31m     Last name is not valide! try again\033[0m\n");}
        }while(valide == 0);

        

        printf("\n");
        printf("\033[0;32m== You just add %s ==\033[0m\n", player[count].name);

    }
}
void show(){// function that show all the players registered
    
    time_t T = time(0);
    struct tm *date = localtime(&T);
    
    struct players temp;
    int choice_sort;
    do
    {

        printf("\n\033[0;32m================ list =================\033[0m\n");//\033[0m
        printf("\n");
        printf("1.order by name\n");
        printf("2.order by age: \n");
        printf("3.order by post: \n");
        printf("0.go back: \n");
        printf("\n");
        printf("\nEnter number: ");
        scanf("%d", &choice_sort);
        getchar();

        switch (choice_sort)
        {
        case 1://name
            for (int i = 0; i < count - 1; i++) {
                for (int j = i + 1; j < count; j++) {
                    
                    if (strcmp(player[i].name, player[j].name) > 0) {
                        temp = player[i];
                        player[i] = player[j];
                        player[j] = temp;
                     }
                }

            }

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
            printf("registered in: %d/%d/%d\n",date->tm_mday, date->tm_mon+1, date->tm_year+1900);
            printf("Status: %s\n", player[i].status);
            printf("\n");
            printf("\n===============================================================\n");
            }
            break;
            system("cls");

        case 2://age
            for (int i = 0; i < count - 1; i++) {
                for (int j = i + 1; j < count; j++) {
                    if (player[i].age < player[j].age){
                        temp = player[i];
                        player[i] = player[j];
                        player[j] = temp;
                     }
                }

            }

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
            printf("registered in: %d/%d/%d\n",date->tm_mday, date->tm_mon+1, date->tm_year+1900);
            printf("Status: %s\n", player[i].status);
            printf("\n");
            printf("\n========================================================\n");
            }
            break;
            system("cls");


        case 3://position
                        struct players temp;
            for (int i = 0; i < count - 1; i++) {
                for (int j = i + 1; j < count; j++) {
                    
                    if (strcmp(player[i].position, player[j].position) > 0) {
                        temp = player[i];
                        player[i] = player[j];
                        player[j] = temp;
                     }
                }

            }

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
            printf("registered in: %d/%d/%d\n",date->tm_mday, date->tm_mon+1, date->tm_year+1900);
            printf("Status: %s\n", player[i].status);
            printf("\n");
            printf("\n============================================================\n");
            }
            break;
            system("cls");
        }
        
    }while(choice_sort != 0);
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
                system("cls");
            case 2:
                printf("Enter new last name: \n");
                scanf(" %[^\n]", new_last_name);
                        strcpy(player[i].last_name, new_last_name);
                break;
                system("cls");
            case 3:
                        printf("Enter new age:");
                        scanf("%d", &new_age);
                        getchar();
                        player[i].age = new_age;
                break;
                system("cls");
            case 4:
                        printf("Enter new Goals Number:");
                        scanf("%d", &new_goals_numbers);
                        player[i].goals= new_goals_numbers;
                        getchar();
                break;
                system("cls");
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
void delete_player(){//function that delete element

    char confi;
    int found = 0;
    int search_id;

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
                    printf("Status: %s\n", player[i].status);
                    printf("\n");
                    printf("\n===================================================\n");
                    printf("\n=============== delete contact ============\n");
                    printf("\033[0;31m Are you sure to delete this contact(type 'o' if yes): \033[0m");
                    scanf("%c", &confi);
                    if (confi == 'o' || confi == 'O'){
                        for (int j = i; j < count - 1; j++) {
                            player[j] = player[j + 1];
                        }
                                count--;
                               
                        printf("\n\033[0;32m== Contact supprime are seccesse. ==\033[0m\n");

                    }else
                        {printf("\n\033[0;31m== supprime are cancel ==\033[0m\n");}
                        break;
                         found  = 1;
                }
                  
                if (found == 0)
                {
                    printf ("\n\033[0;31m== ID that you enter not exist ==\033[0m\n");
                }
            }
    }
void statistics(){//fuction is done but it need design
    //total of players
    // moyenne age age++, /count
    //player that has more goals
    //the best player that has max goals and show it 
    //the small player in the team
int sta_choice;

    do
    {
        int total_age = 0;
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
            system("cls");
        case 2:
            for (int i = 0; i < count; i++)
            {
                    total_age  +=  player[i].age;
            }
                int average_age = 0; 
                        if (count > 0) {  
                        average_age = total_age / count; 
                    }
                printf("\n=============== average age =====================\n");
                printf("\n");
                printf("average age of players is %d \n", average_age);
                printf("\n");

                printf("\n=================================================\n");
                break;
            system("cls");

        case 3:
            int score;
            printf("\n===================== score ======================\n");
            printf("\n");

            printf("Enter score: ");
            scanf("%d", &score);
            for (int i = 0; i < count; i++)
            {
                if (score < player[i].goals){
                    printf("Name:     %s      ||     %d         \n", player[i].name, player[i].goals);
                }else{
                    printf("\n=== NO player has reach that score yet ===\n");
                }
            }
            break;
            system("cls");
        case 4:
                int max_goals = player[0].goals;
                for (int i = 0; i < count; i++)
                {
                    if (player[i].goals > max_goals)
                    {
                        max_goals = player[i].goals;
                        printf("player that has must goals is: %s\n", player[i].name);
                        printf("his score is: %d\n", player[i].goals);
                        printf("\n");
                    }
                }
            break;
            system("cls");
        case 5:
             max_goals = player[0].goals;
            for (int i = 0; i < count; i++) {
                if (player[i].goals > max_goals) {
                    max_goals = player[i].goals;
                    printf("player that has must goals is: %s\n", player[i].name);
                }
            }
        default:
            printf("\nchoice that you enter is wrong try again\n");
            break;
        }

    } while (sta_choice !=0);
    
}



