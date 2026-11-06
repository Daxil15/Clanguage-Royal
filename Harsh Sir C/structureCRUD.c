#include <stdio.h>
#define SIZE 4

struct Employee
{
    int id;
    int age;
    float salary;
};

// struct Employee e1 , e2 , e3;
struct Employee e[3];

int employeeCount = 0;

int searchEmployeebyId(int id)
{
    for (int i = 0; i < employeeCount; i++)
    {
        if (e[i].id == id)
        {
            return i;
        }
    }
    return -1;
}

void inputData()
{
    if (employeeCount < SIZE)
    {
        printf("Enter ID , age and salary : ");
        scanf("%d%d%f", &e[employeeCount].id, &e[employeeCount].age, &e[employeeCount].salary);

        int index = searchEmployeebyId(e[employeeCount].id);
        if (index == -1)
        {

            employeeCount++;
            printf("Employee added successfully....\n");
        }
        else
        {
            printf("Employee with same id exists....\n");
        }
    }
    else
    {
        printf("No More employees can be added....\n");
    }
}

void displayData()
{
    printf("\nID\tAge\tSalary\n");
    for (int i = 0; i < employeeCount; i++)
    {
        printf("%d\t%d\t%.2f\n", e[i].id, e[i].age, e[i].salary);
    }
    printf("\n");
}

void searchEmployee()
{
    int i;
    int id;
    printf("Enter Id you want to search : ");
    scanf("%d", &id);
    for (i = 0; i < employeeCount; i++)
    {
        if (e[i].id == id)
        {
            printf("ID : %d\n", e[i].id);
            printf("Age : %d\n", e[i].age);
            printf("Salary : %0.2f\n", e[i].salary);
            break;
        }
    }
    if (i == SIZE)
    {
        printf("Data not found");
    }
}

void deleteEmployee()
{
    int id;

    printf("Enter the id you want to delete : ");
    scanf("%d", &id);
    int index = searchEmployeebyId(id);
    if (index != -1)
    {
        // * left shift
        for (int i = index; i < SIZE - 1; i++)
        {
            e[i] = e[i + 1];
        }
        printf("Employee Deleted Successfully...\n\n");
        employeeCount--;
    }
    else
    {
        printf("Employee not found\n\n");
    }
}

void updateEmployee()
{
    int id;

    printf("Enter the id you want to update : ");
    scanf("%d", &id);

    int index = searchEmployeebyId(id);

    if (index != -1)
    {
        printf("Enter New Age : ");
        scanf("%d", &e[index].age);
        printf("Enter New Salary : ");
        scanf("%f", &e[index].salary);

        printf("Employee Updated Successfullly..\n\n");
    }
    else
    {
        printf("No Employee Found..\n\n");
    }
}
int main()
{
    // inputData();

    int choice;
    do
    {
        printf("\n1. Input Data\n2. Display Data\n3. Delete Data\n4. Update Data\n5. Search Employee\n6.Exit\nSelect Your Choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            inputData();
            break;
        case 2:
            displayData();
            break;
        case 3:
            deleteEmployee();
            break;

        case 4:
            updateEmployee();
            break;

        case 5:
            searchEmployee();
            break;

        case 6:
            printf("Thanks for visiting ....\n");
            break;

        default:
            printf("Select Correct Choiec\n\n");
        }
    } while (choice != 6);
    return 0;
}