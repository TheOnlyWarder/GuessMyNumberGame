/*
Author:Sinan Cem Daðtekin
Purpose:Guess the number game.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    int main()
{
time_t t;
//initialization of random number generator
srand((unsigned)time(&t));
//declaration of variables
int guess,COUNTER,RANDOM=rand()%21;
    //intro
    printf("This is a guessing game.\nI have choosen a number between 0 and 20 which you must guess!!\n\n");
    //start the game,declare the limit of tries
for(COUNTER=5;COUNTER>0;--COUNTER)
{   jump_1://line to come if user enters an unvalid number
    printf("You have %d tr%s left.\n\nEnter a guess:",COUNTER,COUNTER==1 ? "y" :"ies");
    scanf("%d",&guess);
    //check the number is correct or not
    if(guess>=0&&guess<=20)
    {
        if(guess==RANDOM)
            {
                printf("\n\nCONGRATULATIONS !\n\t YOU GUESSED IT !\n\t\t:)))\n\a");
                goto jump_2;//to avoid the win&lose at the same time
            }
        else
        {   //check if the entered number is greater or less than the randomly generated number
            if(guess>RANDOM)
            printf("\nSorry %d is wrong.My number is less than that.\n", guess);
            else
            printf("\nSorry %d is wrong.My number is greater than that.\n", guess);
        }
    }
    else//if you entered unvalid
        {
        printf("You must enter a number between 0 and 20\n");
        goto jump_1;
        }
}   //if user have out of try
    printf("\nSorry, You lost :(\nThe number was :%d",RANDOM);
jump_2://to end program when user wins
return 0;
}
