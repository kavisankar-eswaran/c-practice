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
    
    if(oper == '+'){
        printf("Your Answer is: %d", num1+num2);
    }else if (oper == '-'){
        printf("Your Answer is: %d", num1-num2);
    }else if(oper == '*'){
        printf("Your Answer is: %d", num1*num2);
    }else if(oper == '/'){
        printf("Your Answer is: %d", num1/num2);
    }else if(oper == '%'){
        printf("Your Answer is: %d", num1%num2);
    }else {
        printf("Enter Valid Operator. Like +,-,*,/");
}
    getch();
}
