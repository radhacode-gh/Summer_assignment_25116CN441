#include <stdio.h>
#include <string.h>

struct Library
{
    int id;
    char name[50];
    char author[50];
};

int main()
{
    struct Library book[100];
    int n, i, choice, searchId;

    printf("Enter number of books: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nBook %d\n", i + 1);

        printf("Enter Book ID: ");
        scanf("%d", &book[i].id);

        printf("Enter Book Name: ");
        scanf(" %[^\n]", book[i].name);

        printf("Enter Author Name: ");
        scanf(" %[^\n]", book[i].author);
    }

    do
    {
        printf("\n----- Library Management -----");
        printf("\n1. Display Books");
        printf("\n2. Search Book");
        printf("\n3. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nBook Details:\n");
                for(i = 0; i < n; i++)
                {
                    printf("\nBook ID : %d", book[i].id);
                    printf("\nBook Name : %s", book[i].name);
                    printf("\nAuthor : %s\n", book[i].author);
                }
                break;

            case 2:
                printf("Enter Book ID: ");
                scanf("%d", &searchId);

                for(i = 0; i < n; i++)
                {
                    if(book[i].id == searchId)
                    {
                        printf("\nBook Found");
                        printf("\nBook Name : %s", book[i].name);
                        printf("\nAuthor : %s\n", book[i].author);
                        break;
                    }
                }

                if(i == n)
                    printf("Book Not Found!\n");

                break;

            case 3:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 3);

    return 0;
}