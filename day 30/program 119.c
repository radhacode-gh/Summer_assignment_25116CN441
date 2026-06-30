#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee emp[100];
    int n, i;

    printf("Enter Number of Employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &emp[i].id);

        printf("Employee Name: ");
        scanf(" %[^\n]", emp[i].name);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    printf("\n------ Employee Details ------\n");

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee ID : %d", emp[i].id);
        printf("\nEmployee Name : %s", emp[i].name);
        printf("\nSalary : %.2f\n", emp[i].salary);
    }

    return 0;
}