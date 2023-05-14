#include <stdio.h>
#include <stdlib.h>

/******
Author: Alyana Barrera
Assignment: Lab 7 Problem 2
Due date: February 27th

Overview: This lab will ask the user to enter a variable between 5 and 20 within a for loop. The loop will
iterate a total of 15 times. After all iterations, the code will calculate the sum of all inputs.

Known Issues:
None
*******/

int main()
{
    //declare variables
    int input, sum = 0;

    //make for loop to repeat 15 times
    for (int count = 0; count < 15; count++)
    {
        //print question to ask user to enter an integer between 5 and 20 and scan the input
        printf("Please enter an integer between 5 and 20: ");
        scanf("%d", &input);

        //calculate sum
        sum = input + sum;
    }
    //print out sentence stating sum of valid integers
    printf("The sum of all valid integers entered is %d.\n", sum);
    printf("\nProgram written by Alyana Barrera.\n");
    return 0;
}
