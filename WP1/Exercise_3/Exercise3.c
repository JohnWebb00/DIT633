#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // int variable named boolean used to control the while loop for repeatedly asking for user input on wrong guesses.
    int boolean = 1;
    // Instantiating random number generator
    srand((unsigned)time(NULL));
    // Assigning a random int between 1 and 100 to num.
    int num = rand() % 100 + 1;
    // Variable for storing user input
    int usrInput;
    // Variable for storing number of guesses
    int guessCount = 0;

    // While boolean = 1, while loop will prompt user for a number. Will stop when boolean is updated to 0.
    while (boolean)
    {
        // Prompt user to input number.
        printf("%s", "Enter a number between 1 and 100:\n");
        // Take user input and read input as int and point to usrInput variable
        scanf("%d", &usrInput);
        // If statement will run inner code if user enters a number outside of 1 to 100.
        if (usrInput < 1 || usrInput > 100)
        {
            // Inform user that number must be between 1 and 100.
            printf("%s", "\nMust enter a number between 1 and 100.\n");
        }
        // Else if statement will run inner code if user guesses a number lower than the computer generated number.
        else if (usrInput < num)
        {
            // Inform user that guess is lower than the number.
            printf("%s", "\nGuess is lower than the number.\n");
            // Increment guess count.
            guessCount++;
            // Inform user how many times they have guessed.
            printf("You have guessed %d times\n", guessCount);
        }
        // Else if statement will run inner code if user guesses a number higher than the computer generated number.
        else if (usrInput > num)
        {
            // Inform user that guess is higher than the number.
            printf("%s", "\nGuess is higher than the number\n");
            // Increment guess count.
            guessCount++;
            // Inform user how many times they have guessed.
            printf("You have guessed %d times\n", guessCount);
        }
        // Else if statement will run inner code if user guesses correctly.
        else if (usrInput == num)
        {
            // Inform user that guess is higher than the number and shows them their final guess count.
            printf("\nCorrect! You guessed %d times\n", guessCount);
            // Asks user if they would like to keep playing and provides two options.
            printf("\nWould you like to start a new round?\n1.Yes\n2.No\n");
            // Takes user input as a int and points to usrInput variable.
            scanf("%d", &usrInput);
            // If statement will run inner code if user enters 1 to continue.
            if (usrInput == 1)
            {
                num = rand() % 100 + 1;
                guessCount = 0;
            }
            // Else if statement will run inner code if user enters 2 to quit.
            else if (usrInput == 2)
            {
                // Thanks user for playing and informs user that the program will now exit.
                printf("\nThanks for playing! Exiting program.\n");
                // Updates int boolean value to 0 so while loop will not run.
                boolean = 0;
                // Exits program
                return 0;
            }
        }
    }
}
