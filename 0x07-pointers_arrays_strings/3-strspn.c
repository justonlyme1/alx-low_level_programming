#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: String to search.
 * @accept: String containing characters to search for.
 * Return: Number of bytes in the initial segment of s consisting only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;  // Initialize count to 0

    // Iterate through each character in 's'
    while (*s != '\0') {
        // Check if the current character is present in 'accept'
        if (_strchr(accept, *s) != NULL) {
            count++;  // Increment the count if character is found in 'accept'
        } else {
            break;  // Exit the loop if a character not in 'accept' is encountered
        }
        s++;  // Move to the next character in 's'
    }

    return count;  // Return the count of characters from 'accept' found in the initial segment of 's'
}
