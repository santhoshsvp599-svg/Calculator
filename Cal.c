#include<stdio.h>
int main()
{
    double num1,num2;
    char op;
    int ch;

    printf("===== SIMPLE CALCULATOR =====\n");

    printf("Enter first number: ");
    if(scanf("%lf",&num1)!=1)
    {
        printf("Invalid input!\n");
        while((ch=getchar())!='\n' && ch!=EOF);
        return 1;
    }

    printf("Enter operator (+, -, *, /): ");
    if(scanf(" %c",&op)!=1)
    {
        printf("Invalid operator!\n");
        return 1;
    }
    printf("Enter second number: ");
    if(scanf("%lf",&num2)!=1)
    {
        printf("Invalid input!\n");
        while((ch=getchar())!='\n' && ch!=EOF);
        return 1;
    }

    switch (op)
    {
        case '+':
            printf("Result = %.2lf\n", num1 + num2);
            break;

        case '-':
            printf("Result = %.2lf\n", num1 - num2);
            break;

        case '*':
            printf("Result = %.2lf\n", num1 * num2);
            break;

        case '/':
            if(num2==0)
                printf("Error: Division by zero is not allowed.\n");
            else
                printf("Result = %.2lf\n", num1 / num2);
            break;

        default:
            printf("Invalid operator!\n");
    }
}