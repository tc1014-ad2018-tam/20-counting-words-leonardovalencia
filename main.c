#include <stdio.h>
//Write a program that counts the number of words of any given string.
//Marco Leonardo Valencia
//A01412017
//Date: October 17
int main() {
    // Here I declare my variables.
    char text[100];
    int numberofwords = 1;
    int counter = 0;
    // Here I ask the user to enter his string.
    printf("Write a string: ");
    fgets(text, sizeof(text), stdin);
    // Loop for getting the amount of words in the string.
    while (text[counter] != '\0') {
        counter++;
        if (text[counter] == ' '){
            numberofwords++;
        }
    }

    printf("Your string has %i words.", numberofwords);

    return 0;
}