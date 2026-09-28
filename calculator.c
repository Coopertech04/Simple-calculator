#include <stdio.h>
#include <stdbool.h>

int main (void)
{
    
    float x;
    float y;
    char operation;
    char answer = 'y';

    while (answer == 'y')
    {
        printf("What's x? ");
        scanf(" %f", &x);

        printf("What's y? ");
        scanf(" %f", &y);

        printf("Choose an operation (+, -, *, /): ");
        scanf(" %c", &operation);

        if (operation == '+')
        {
            printf("%.2f\n", x + y);
        }
        else if (operation == '-')
        {
            printf("%.2f\n", x - y);
        }
        else if (operation == '*')
        {
            printf("%.2f\n", x * y);
        }
        else if (operation == '/')
        {
        if (y == 0)
        {
            printf("Error: Division by zero is not allowed.\n");
                
        }
        else
        {
            printf("%.2f\n", x / y);   
        }
        }
        else
        {
            printf("Invalid operation.\n ");
        }
        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &answer);
    }
}
    

         