#include <stdio.h>
#include <stdlib.h>

/******
Author: Alyana Barrera
Assignment: Lab 7 Problem 1
Due date: February 27th

Overview: This lab will ask the user to enter a variable between 5 and 20 within a while loop. The loop will
iterate a total of 15 times. There will be a counter-controlled while loop within the outer while loop to
check if the user input is valid (meaning between and including 5 and 20). If input is invalid, the code will
prompt that input was invalid and will ask the user again to input a number between 5 and 20. If the input is
valid, the outer loop will resume. After all iterations and input, the code will calculate the sum of all
correct inputs.

Known Issues:
None
*******/

int main()
{
    //declare variables
    int count=0, input, sum = 0;

    //make counter-controlled while loop to repeat 15 times
    while (count < 15)
    {
        //print question to ask user to enter an integer between 5 and 20 and scan the input
        printf("Please enter an integer between 5 and 20: ");
        scanf("%d", &input);

        //declare counter for input validation while loop and start input verification loop
        int countInvalid = 0;
        while (input <= 5 || input >= 20)
        {
                //state that input is invalid
                printf("Your input is invalid\n");

                //restate asking for user input and scan input
                printf("Please re-enter an integer between 5 and 20: ");
                scanf("%d", &input);

                //end inner while loop with counter
                countInvalid++;
        }
        //calculate sum
        sum = input + sum;

        //end outer while loop with counter
        count++;
    }
    //print out sentence stating sum of valid integers
    printf("The sum of all valid integers entered is %d.\n", sum);
    printf("\nProgram written by Alyana Barrera.\n");
    return 0;
}
