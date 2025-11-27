#include <stdio.h>

// Practice exercise: input validation with while loops.
// Goal: keep asking for an age until it is between 0 and 120 inclusive.
// TODOs for you:
// 1) Use a while loop to re-prompt the user when the age is out of range.
// 2) Once a valid age is entered, print a confirmation like
//    "Thanks, you entered <age>".
// Expected interaction example:
//    Enter age: -5
//    Please enter an age between 0 and 120.
//    Enter age: 300
//    Please enter an age between 0 and 120.
//    Enter age: 25
//    Thanks, you entered 25
// Hint: initialize age with an impossible value so the loop runs at least once.
int main() {
    
    // TODO: add your while loop here to validate the input.
    printf("Enter birth year: ");
    int year = 0;
    scanf("%d", &year);

    while (year < 1920 || year > 2025) {
        printf("That's not a valid year! Enter a year between 1920 and 2025: ");

        scanf("%d", &year);

    }
    printf("Thank you! You entered %d\n", year);
    return 0;

}