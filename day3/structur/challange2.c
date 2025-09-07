#include <stdio.h>
#include <string.h>

#define MAX 100

struct per {
    char name[50];
	int English, Math, Science, History, Geography, Physical; 
};

int main() {
    struct per students[MAX]; // array of students
    int count = 0;            // how many students
    int choice;			    	//user choices 

    do {
        printf("\n=== MENU ===\n");
        printf("1. Add student\n");
        printf("2. Show students\n");
        printf("0. Exit\n");
		printf("\n============\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // remove newline after scanf

        switch ((int)choice) {
            case 1:
                if (count < MAX) {

                    printf("Full name: ");
                    fgets(students[count].name, sizeof(students[count].name), stdin);
                    students[count].name[strcspn(students[count].name, "\n")] = '\0';

                    printf("English");
                    scanf("%d", &students[count].English);
                    getchar(); // remove newline

                    printf("Math: ");
                    scanf("%d", &students[count].Math);
                    getchar();

					printf("Science: ");
                    scanf("%d", &students[count].Science);
                    getchar();

					printf("History: ");
                    scanf("%d", &students[count].History);
                    getchar();

					printf("Geography: ");
                    scanf("%d", &students[count].Geography);
                    getchar();

					printf("Physical: ");
                    scanf("%d", &students[count].Physical);
                    getchar();

					printf ("you just add student and his Note\n");

                    count++;
                } else {
                    printf("Student list is full!\n");
                }
                break;

            case 2:
                printf("\n--- /Students & Note List/ ---\n");
                for (int i = 0; i < count; i++) {
					printf("=============%s============\n", students[i].name);
					printf("English: %d\n", students[i].English);
					printf("Math: %d\n", students[i].Math);
					printf("Science: %d\n", students[i].Science);
					printf("History: %d\n", students[i].History);
					printf("Geography: %d\n", students[i].Geography);
					printf("Physical: %d\n", students[i].Physical);
					printf("============================\n");
						   
                }
                break;

            case 0:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
                break;
        }
    } while (choice != 0);

    return 0;
}
