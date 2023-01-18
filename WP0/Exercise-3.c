// (C) John Webb, Carl Dahlqvist, group 20 (2023)
// Work package 0
// Exercise 1
// Submission Code 0
#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]) {
    char string[] = "-h";
  if(argc < 2 || argc > 2){
      printf("%s", "Error: must enter one program argument. To learn more, use argument '-h'\n");
  } else if (strcmp(argv[1], string) == 0){
      printf("%s", "Enter an argument after the program name.\n e.g ./program argument\n");
  } else if (argc == 2){
        printf("Hello World! - I'm %s!\n", argv[1]);
    }
    
    
}