#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int menu;
struct user
{
    char name[20];
    char email[50];
    char ista_Id[20];
    unsigned long long int number;
};

void new_recode()
{
    system("cls");
    struct user user;
    FILE *f;

    // Taking user name
    printf("\nEnter Name: ");
    fgets(user.name, 50, stdin);
    user.name[strlen(user.name) - 1] = '\0';

    // Taking user email
    printf("\nEnter Email: ");
    fgets(user.email, 50, stdin);
    user.email[strlen(user.email) - 1] = '\0';

    // Taking user Ista-Id
    printf("\nEnter Instagram-Id: ");
    fgets(user.ista_Id, 20, stdin);
    user.ista_Id[strlen(user.ista_Id) - 1] = '\0';

    // Taking user number
    printf("\nEnter Number: ");
    scanf("%lld", &user.number);
    getchar();

    // Recode in file
    f = fopen("recode.txt", "a");
    fprintf(f, "\n\nName: %s\n", user.name);
    fprintf(f, "Email: %s\n", user.email);
    fprintf(f, "Insatagram: %s\n", user.ista_Id);
    fprintf(f, "Number: %lld\n", user.number);
    fclose(f);
}

int main()
{
    do
    {
        // Menu for user
        system("cls");
        char app_name[] = "User Recode";
        printf("%90s\n", app_name);
        printf("1. New Recode\n0. Exit\n");
        scanf("%d", &menu);
        getchar();
        switch (menu)
        {
        case 1:
            new_recode();
            break;
        }
    } while (menu != 0);

    return 0;
}