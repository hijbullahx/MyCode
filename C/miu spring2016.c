
#include <stdio.h>

struct Employee {
    int empNumber;
    int age;
    float salary;
};

int main() {
    struct Employee employees[100]; // Assuming a maximum of 100 employees

    int numEmployees;

    printf("Enter the number of employees: ");
    scanf("%d", &numEmployees);

    // Input employee information
    for (int i = 0; i < numEmployees; i++) {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter employee number (4 digits): ");
        scanf("%d", &employees[i].empNumber);

        printf("Enter employee age: ");
        scanf("%d", &employees[i].age);

        printf("Enter employee salary: ");
        scanf("%f", &employees[i].salary);
    }

    // Display employee information
    printf("\nEmployee Information:\n");
    printf("-----------------------------------------------------------------\n");
    printf("| Employee Number | Age | Salary ($) |\n");
    printf("-----------------------------------------------------------------\n");
    for (int i = 0; i < numEmployees; i++) {
        printf("| %-15d | %-3d | %-10.2f |\n", employees[i].empNumber, employees[i].age, employees[i].salary);
    }
    printf("-----------------------------------------------------------------\n");

    return 0;
}
