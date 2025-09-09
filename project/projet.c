#include <stdio.h>
#include <string.h>


void list();
void add();
//void show();
//void Edit();
//void delete();
//void search();
//void stast();

struct players
{
    char name[100];
    char last_name[100];
    int ID;
    char position;
    int age; 
    int goals;
    int registration_date;
    int status;
};

int count = 0;

struct players player[50];

int main (){

    int choice;

    list();

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("%d\n", choice);
/*
    do
    {
        
    } while (choice != 0);
    
*/
    return 0;
    
}
void list(){//done disign not

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
void add(int choice){

    printf ("\n============== add contact ==============\n");
    
    if (count >= 50)
    {
        printf("\033[0;31m== You can't enter more ==\033[0m\n");
    }

    printf("enter how many players you want to engistre");

    printf("Enter name: ");
    scanf(" %99[^\n]", player[count].name);
    getchar();

    printf("Enter Last Name: ");
    scanf(" %99[^\n]", &player[count].last_name);
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