//Task 5 PALINDROME CHECKER
//ANUPAM KUMAR VERMA C/C++ INTERNSHIP
//cognifyz technologies

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// A function that returns 1 if the given string is a palindrome, 0 otherwise
int is_palindrome(char *str)
{
    // Declare variables to store the length of the string and the indices for comparison
    int lenth, i, j;

    // Get the length of the string
    lenth = strlen(str);

    // Initialize the indices to the first and last characters of the string
    i = 0;
    j = lenth - 1;

    // Loop through the string while comparing the characters from both ends
    while (i < j)
    {
        // Skip any non-alphabetic characters
        while (!isalpha(str[i]) && i < j)
            i++;
        while (!isalpha(str[j]) && i < j)
            j--;

        // Convert the characters to lowercase for comparison
        str[i] = tolower(str[i]);
        str[j] = tolower(str[j]);

        // If the characters are not equal, return 0
        if (str[i] != str[j])
            return 0;

        // Move the indices to the next characters
        i++;
        j--;
    }

    // If the loop ends without returning 0, the string is a palindrome, so return 1
    return 1;
}

int main()
{
    // Declare a variable to store the input string
    char input[100];

    // Prompt the user to input a word or phrase
    printf("Enter a word or phrase: ");
    fgets(input, 100, stdin);

    // Remove the newline character from the input
    input[strcspn(input, "\n")] = '\0';

    // Check if the input is a palindrome using the function
    if (is_palindrome(input))
        printf("%s is a palindrome.\n", input);
    else
        printf("%s is not a palindrome.\n", input);

    return 0;
}
