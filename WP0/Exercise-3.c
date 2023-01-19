// (C) John Webb, Carl Dahlqvist, group 20 (2023)
// Work package 0
// Exercise 1
// Submission Code 0
#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]) {
    // If the argument count is less than 2 or greater than two, the user has either not included an argument or has provided too many arguments.
  if(argc < 2 || argc > 2){
      printf("%s", "Error: must enter one program argument. To learn more, use argument '-h'\n");
    // Compares the argument string with "-h"
  } else if (strcmp(argv[1], "-h") == 0){
      printf("%s", "Enter an argument after the program name.\n e.g ./program argument\n");
    // If argc is 2, user has included one argument.
  } else if (argc == 2){
        printf("Hello World! - I'm %s!\n", argv[1]);
    }
    
    
}