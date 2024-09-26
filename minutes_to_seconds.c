#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void minutesToSeconds(char *string) {
    // initialize variables
    int minutes = 0;
    int seconds = 0;
    char *length = malloc(strlen(string) + 1);      // get the length of the string parameter (add 1 to account for the null terminator "\0")

    // check if the string is empty
    if (length == NULL) {
        printf("String is empty.\n");
        return;
    }

    // copy the string parameter to a temporary variable
    strcpy(length, string);

    // split the string on ":"
    // will get the minutes first
    char *token = strtok(length, ":");

    // convert the minutes to seconds and store it
    minutes = atoi(token) * 60;     // convert the token from string to integer
    seconds = seconds + minutes;

    // repeat the strtok command again to get the seconds
    token = strtok(NULL, ":");

    // check if the token is equal to 60 seconds and return -1 if it is
    if (atoi(token) == 60) {
        printf("-1\n");
        return;
    }
    
    // add the seconds
    seconds = seconds + atoi(token);    // convert the token from string to integer

    // print the seconds
    printf("%d\n", seconds);
    
    return;
}

int main(void) {
    minutesToSeconds("01:00");
    minutesToSeconds("13:56");
    minutesToSeconds("10:60");
    minutesToSeconds("121:49");
}