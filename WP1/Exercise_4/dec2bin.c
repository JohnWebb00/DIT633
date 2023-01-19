#include <stdio.h>
#include <math.h>
#include <string.h>

unsigned int bitCounter(unsigned int number){
 return log2(number) + 1;
}

int main(int argc, char *argv[])
{
    // Checks to see that the user has provided only one argument 
    if(argc < 2 || argc > 2){
      printf("%s", "Error: must enter a decimal number program argument. To learn more, use argument '-h'\n");
    // Compares the first argument string with "-h"
  } else if (strcmp(argv[1], "-h") == 0){
      printf("%s", "Enter a decimal argument after the program name.\n e.g ./dec2bin 12\n");
    // If argc is 2, user has included one argument.
  } else if(argv[1] < 0){
        printf("\nPlease enter a positive number.\n");
    } else {
    int bits = bitCounter(argv[1]);
    int binary[bits];
    printf("%d",bits);
    }
    return 0;
}