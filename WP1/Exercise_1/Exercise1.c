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

        // Switch-case based on the value of a
        switch (a)
        {
        case 1:
            printf("%s", "A partridge in a pear tree\n");
            break;

        case 2:
            printf("%s", "Two turtle-doves\n");
            break;

        case 3:
            printf("%s", "Three french hens\n");
            break;

        case 4:
            printf("%s", "Four calling birds\n");
            break;

        case 5:
            printf("%s", "Five golden rigns.\n");
            break;

        // If variable 'a' is anything else than a number between 1 and 5, the program will exit.
        default:
            return 0;
        }
    }
}