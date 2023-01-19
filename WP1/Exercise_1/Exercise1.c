#include <stdio.h>

int main()
{
    // Instantiate variable a for holding the input.
    int a;
    // While is consistently true, thus will continue to ask for user input so long as the program continues to run.
    while (1)
    {
        // Printing a prompt asking the user to enter a number between 1 and 5.
        printf("%s", "Enter an integer between 1 and 5:\n");
        // Taking keyboard input of type int and pointing to variable a.
        scanf("%d", &a);

        // If variable 'a' is equal to a number from 1 to 5, a corresponding sentence will be printed.
        if (a == 1)
        {
            printf("%s", "A partridge in a pear tree\n");
        }
        else if (a == 2)
        {
            printf("%s", "Two turtle-doves\n");
        }
        else if (a == 3)
        {
            printf("%s", "Three french hens\n");
        }
        else if (a == 4)
        {
            printf("%s", "Four calling birds\n");
        }
        else if (a == 5)
        {
            printf("%s", "Five golden rings.\n");
        }
        else
        {
            // If variable 'a' is anything else than a number between 1 and 5, the program will exit.
            return 0;
        }
    }
}