#include <stdio.h>

struct Item
{
    int id;
    char name[50];
    int quantity;
    float price;
};

int main()
{
    struct Item item[100];
    int n, i;

    printf("Enter Number of Items: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nItem %d\n", i + 1);

        printf("Enter Item ID: ");
        scanf("%d", &item[i].id);

        printf("Enter Item Name: ");
        scanf(" %[^\n]", item[i].name);

        printf("Enter Quantity: ");
        scanf("%d", &item[i].quantity);

        printf("Enter Price: ");
        scanf("%f", &item[i].price);
    }

    printf("\n------ Inventory Details ------\n");

    for(i = 0; i < n; i++)
    {
        printf("\nItem ID : %d", item[i].id);
        printf("\nItem Name : %s", item[i].name);
        printf("\nQuantity : %d", item[i].quantity);
        printf("\nPrice : %.2f", item[i].price);
        printf("\nTotal Value : %.2f\n",
               item[i].quantity * item[i].price);
    }

    return 0;
}