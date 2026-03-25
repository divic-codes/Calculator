// To make a simple calculator using switch
// Start
// Declaration of two variables (a,b)
// User enter the two numbers
// declaration of another variable (choice)
// User selects the choice
// Using SWITCH statement to perform operation 
// Operation is done based on user's choice
// Stop

#include<stdio.h>
int main(){
    int a,b;
    printf("Enter any two numbers:\n");
    scanf("%d %d",&a,&b);
    int choice;
    printf("Choose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Division\n");
    printf("4. Multiplication\n");
    printf("Enter the choice: ");
    scanf("%d",&choice);

    switch(choice){
        case 1: 
        printf("Result = %d",a+b);
        break;

        case 2: 
        printf("Result = %d",a-b);
        break;

        case 3: 
        printf("Result = %d",a/b);
        break;

        case 4: 
        printf("Result = %d",a*b);
        break;

        default:
        printf("Invalid choice");
    }

}