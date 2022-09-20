// Exercise 2 - Cycles and conditions

#include <stdio.h>

int main()
{   
    /*
    // Select the bigger number by using ternary operator
    int number1, number2;
    scanf("%d %d",&number1,&number2);
    (number1 > number2) ? printf("Larger = %d\nSmaller = %d\n",number1,number2) : printf("Larger = %d\nSmaller = %d\n",number2,number1);
    */

    // Read 2 characters in the range of 0-9 or A-F, convert them to hex and print as decimal
    /*
    char digit1, digit2;
    scanf("%c%c", &digit1, &digit2);
    int number1, number2;
    (digit1 - '0' > 9) ? (number1 = (digit1 - '0' - 7)) : (number1 = (digit1 - '0'));
    (digit2 - '0' > 9) ? (number2 = (digit2 - '0' - 7)) : (number2 = (digit2 - '0'));//
    //printf("%d\t%d\n",digit1-'7',digit2-'7');
    //printf("%d\t%d\n",digit1-'0',digit2-'0');
    printf("%d\n", 16*number1 + number2);
    */
    // Calculate the factorial of a given number
    long int number;
    scanf("%ld",&number);
    long int factorial = number;
    for (long int i = 1; i < number; i++){
        factorial = factorial*i;
    }
    printf("Factorial of %ld is %ld\n",number,factorial);
    
    return 0;



}