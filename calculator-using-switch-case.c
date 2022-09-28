#include <stdio.h>
#include <conio.h>

void main()
{
    
    int num1, num2;
    char oper;
    
    printf("Enter Value 1: ");
    scanf("%d",&num1);
    printf("Enter Value 2: ");
    scanf("%d",&num2);
    printf("Enter Operator: ");
    scanf("\n %c",&oper);
    
switch(oper){
    case '+':
    printf("Your Answer is: %d", num1+num2);
    break;

    case '-':
    printf("Your Answer is: %d", num1-num2);
    break;
    
    case '*':
    printf("Your Answer is: %d", num1*num2);
    break;
    
    case '/':
    printf("Your Answer is: %d", num1/num2);
    break;
    
    default:
    printf("Invalid Operator");
}
    getch();
}
