// Exercise 1 - Formatted I/O operations

#include <stdio.h>

int main(){
    /*
    //Print the sentence
    printf("James Bond \\ \"Agent 007\" \\ # 150%% guarantee # \n Inc.");*/

    /*//Get ASCII as user input character and print the following one
    char input;
    scanf("%c",&input);
    printf("%c\n",++input);*/

    /*//Get real number as user input and print the integer part
    double input;
    scanf("%lf",&input);
    //int integer_part = input;
    printf("The integer part of the input is %d.\n",(int)input);
    //printf("The integer part of the input is %.0f.\n",input-0.5);*/
    
    /*//Get 3 uppercase letters as user input and print them as lowercase
    char letter1, letter2, letter3;
    scanf("%c%c%c", &letter1, &letter2,&letter3);
    printf("%c%c%c\n",letter1+32,letter2+32,letter3+32);*/

    //Get 3 real numbers as user input and print their arithmetic mean with 2 decimals precision
    float number1, number2, number3;
    scanf("%f %f %f",&number1,&number2,&number3);
    printf("%.2f\n",(number1+number2+number3)/3);

    return 0;
}