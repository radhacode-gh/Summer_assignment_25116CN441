#include <stdio.h>
#include <string.h>

struct Contact
{
    char name[50];
    char phone[15];
};

int main()
{
    struct Contact c[100];
    int n, i;
    char search[50];

    printf("Enter Number of Contacts: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nContact %d\n", i + 1);

        printf("Enter Name: ");
        scanf(" %[^\n]", c[i].name);

        printf("Enter Phone Number: ");
        scanf("%s", c[i].phone);
    }

    printf("\nStored Contacts\n");

    for(i = 0; i < n; i++)
    {
        printf("\nName : %s", c[i].name);
        printf("\nPhone : %s\n", c[i].phone);
    }

    printf("\nEnter Name to Search: ");
    scanf(" %[^\n]", search);

    for(i = 0; i < n; i++)
    {
        if(strcmp(search, c[i].name) == 0)
        {
            printf("\nContact Found");
            printf("\nName : %s", c[i].name);
            printf("\nPhone : %s\n", c[i].phone);
            return 0;
        }
    }

    printf("Contact Not Found!\n");

    return 0;
}