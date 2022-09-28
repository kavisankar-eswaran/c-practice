#include <stdio.h>
#include <conio.h>

void main() {

int num;

printf("Enter the Number: ");
scanf("%d", &num);

if (num % 2 ==0){
    printf("The Number is Even");
} else {
    printf("The number is Odd");
}

getch();
}
