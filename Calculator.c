#include <stdio.h>


int main(){

    char operator;

    double num1;
    double num2;
    double result;

    printf("\nEnter and operator (+ or - or * or /): ");
    scanf("%c", &operator);

    printf("\nEnter number 1: ");
    scanf("%lf", &num1);

    printf("\nEnter number 2: ");
    scanf("%lf", &num2);

    switch(operator){

        case '+':
            result = num1 + num2;
            printf("result: %.1lf", result);
            break;
        

        case '-':
            result = num1 - num2;
            printf("result: %.1lf", result);
            break;
        

        case '*':
            result = num1 * num2;
            printf("result: %.1lf", result);
            break;
        

        case '/':
            result = num1 / num2;
            printf("result: %.1lf", result);
            break;


        default:
            printf("PUT IN SOMETHING VALIDDDDD");
    }
    

}


