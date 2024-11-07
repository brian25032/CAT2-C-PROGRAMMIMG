//program to define a structure named employee
//Author:Murithi Brian Munene
//ADM:CT101/G/25032/24
#include <stdio.h>
#include <string.h>

struct Employee {
    char name[25];
    int id;
    char department[20];
    float salary;
    char email[50];
}employee1;

int main() {
    strcpy(employee1.name,"John Doe");
    employee1.id=12345;
    strcpy(employee1.department,"Human Resource");
    employee1.salary=55000.50;
    strcpy(employee1.email,"john doe@company.com");
    

    printf("Employee Information: \n");
    printf("Name: %s\n", employee1.name);
    printf("ID: %d\n", employee1.id);
    printf("department: %s\n", employee1.department);
    printf("salary: %.2f\n", employee1.salary);
    printf("email: %s\n", employee1.email);


return 0;
}