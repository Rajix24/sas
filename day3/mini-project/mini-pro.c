#include <stdio.h>
#include <string.h>
#define MAX 100


    int count = 0;
    char name[100];
    int idx = 0;

struct contact  
{
   char name[MAX];
   char num[MAX];
   char email[MAX];
};



struct contact per[MAX];
void addcontact();
void showcontact();
void serchercontact();
void Editcontact();
void deletcontact();



int main (){

    struct contact per;
    int choice;


    do
    {

            printf ("\n==================== Menu =====================\n");
            printf("\n");
            printf ("entere number that you need:\n");
            printf ("entere 1 Add contact\n"); 
            printf ("entere 2 Show all contact:\n");
            printf ("entere 3 looking for contact: \n");
            printf ("entere 4 Edit contact: \n");
            printf ("entere 5 delete contact: \n");
            printf ("entere 0 pour exit:\n");
            printf ("\n=============================================\n");
            printf("\n");
            printf ("enter le choix:");
        
            scanf("%d", &choice);


            switch ((int)choice)
            {
            case 1://add contact
                addcontact();
                break;
            case 2 ://show phone num 
                showcontact();
                break;
            case 3://serche contact
                serchercontact();
                break;
            case 4:// edit contact
                Editcontact();
                break;
            case 5://delet contact
                deletcontact();
                break;
            default:
                break;
            }
    } while (choice != 0);




    return 0;
}
void addcontact(){//done

        printf ("\n============== add contact ==============\n");


    if (count >= MAX)
    {
        printf("\033[0;31m== You can't enter more ==\033[0m\n");
    }

    printf("Enter name: ");
    scanf(" %99[^\n]", per[count].name);
    getchar();

    printf("Enter Phone Number: ");
    scanf("%s", &per[count].num);
    getchar();

    printf("Enter Email: ");
    scanf("%s", &per[count].email);
    getchar();

    printf("\n");
    printf("\033[0;32m== You just add %s ==\033[0m\n", per[count].name);
    
    count++;
}
void showcontact(){//done
    printf ("\n==================== contact list ==============\n");
        printf("\n\033[0;32m== Contacts: ==\033[0m\n");
        printf("\n");
    if (count == 0 )
    {
         printf("\n\033[0;31m No contacte on your local devic\033[0m\n") ;  
    }


    for (int i = 0; i < count; i++)
       {

           printf("Name: %s\n", &per[i].name);
           printf("Phone Number: %s\n", &per[i].num);
           printf("Email: %s\n", &per[i].email);
           printf("\n========================\n");
       }
    
}
void serchercontact(){//done
    int found = 0;
    printf("Name of the persone: ");
    scanf(" %[^\n]", name);
    getchar();

    for (int i = 0; i < count; i++)
    {
        if (strcmp(name, per[i].name) == 0)
        {
        printf("\n\033[0;32m== Contact that you look for == \033[0m\n");
        printf("\n");
        printf("Name: %s\n", per[i].name);
        printf("Phone Num: %s\n", per[i].num);
        printf("Email: %s\n", per[i].email);
        }
        found ++;
        if (found == 0){
            printf ("\n\033[0;31m== Name that you enter not exist ==\033[0m\n");
        }
    }
    
}
void Editcontact(){//done
    
    printf("Name of the persone: ");
    scanf(" %[^\n]", name);
    getchar();
    int found = 0;
    for (int i = 0; i < count; i++)
    {
        if (strcmp(name, per[i].name) == 0)
        {
        printf("\n\033[0;32m== Contact: ==\033[0m\n");
        printf("\n");
        printf("Name: %s\n", per[i].name);
        printf("Phone Num: %s\n", per[i].num);
        printf("Email: %s\n", per[i].email);
            

        printf("\n=============== new info ============\n");
        printf("\n");
        printf("Enter new info:\n");
        printf("new Name:");
        scanf("%[^\n]", per[i].name);
        printf("new Phone Number:");
        scanf(" %[^\n]", per[i].num);
        printf("new Email:");
        scanf(" %[^\n]", per[i].email);
        printf("\n");
        printf("\033[0;32m== Edit is valide ==\033[0m\n");
            
        }
        found ++;
        if (found == 0){
        printf ("\n\033[0;31m== Name that you enter not exist ==\033[0m\n");
        }
        
    }
}
void deletcontact(){//done
    char confi;
    int found = 0;

    printf("Name of the persone: ");
    scanf(" %[^\n]", name);
    getchar();

    
    
        for (int i = 0; i < count; i++)
        {
            if (strcmp(name, per[i].name) == 0)
            {
            printf("your contact : \n");
            printf("Name: %s\n", per[i].name);
            printf("Phone Num: %s\n", per[i].num);
            printf("Email: %s\n", per[i].email);

            printf("\n=============== delete contact ============\n");
                printf("\033[0;31m Are you sure to delete this contact(type 'o' if yes): \033[0m");
                scanf("%s", &confi);
                if (confi == 'o' || confi == 'O')
                {
                    for (int j = i; j < count; j++) {
                                strcpy(per[j].name, per[j + 1].name);
                                strcpy(per[j].num, per[j + 1].num);
                                strcpy(per[j].email, per[j + 1].email);
                                count--;
                                printf("\n\033[0;32m== Contact supprime are seccesse. ==\033[0m\n");
                                }
                }else{printf("\n\033[0;31m== supprime are cancel ==\033[0m\n");}
            }
            found ++;
            if (found == 0)
            {
                printf ("\n\033[0;31m== Name that you enter not exist ==\033[0m\n");
            }
        }
    

}