// Create a structure type 'Person' with name,salary and age as its attritube. Declare and intialize 2 variables for this. Print the name of first person and age of other
#include <stdio.h>
int main(){
    struct person{
        char name[40];
        float salary;
        int age;

    };
    struct person p1,p2;
    printf("Enter the name of the person: ");
    scanf("%s",p1.name);

    printf("Enter the salary of the person: ");
    scanf("%f",&p1.salary);

    printf("Enter the age of the person: ");
    scanf("%d",&p1.age);

    printf("Enter the name of the person: ");
    scanf("%s",p2.name);

    printf("Enter the salary of the person: ");
    scanf("%f",&p2.salary);

    printf("Enter the age of the person: ");
    scanf("%d",&p2.age);

    printf("The name of first person is: %s\n",p1.name);
    printf("The age of second person is: %d\n",p2.age);

    return 0;
}
// the elements are stored in a continuous memory location. The first element is stored at the lowest address and the last element is stored at the highest address. The size of the structure is equal to the sum of the sizes of its members plus any padding added by the compiler.