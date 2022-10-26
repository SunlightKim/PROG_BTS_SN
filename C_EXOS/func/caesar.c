// BTS SN - BONOLIS ENZO

#include "../inc/caesar.h"
#include <stdio.h>          // printf, fgets, stdin
#include <string.h>         // strlen
#include <ctype.h>          // toupper, isupper, islower, isalpha

/* Complementary exercise 1 
* Caesar's cipher
* Formula:
* E[i] = (P[i] + K) mod N, where:
* E[i] = encrypted letter
* P[i] = plain text letter
* K = key (number of letters to shift)
* N = number of letters in the alphabet
* Suppose letter A has the value 0, B has the value 1, etc.
*         key = SOME NUMBER
*         ( (int)Letter + key ) mod 26 ==> returns the encrypted letter as a number, called cipherValue
*                                      ==> (char)cipherValue = '[some letter]'
*                                      NOTE: ASCII 'a' = 97, 'b' = 98, until 'z' = 122 (lowercase only)
*                                      NOTE: ASCII 'A' = 65', 'B' = 66, until 'Z' = 90 (uppercase only)
*/
char* caesar(char* plaintextCae, int keyCae)
{
    int i;
    char cipherCae;
    int cipherValueCae;

    // Loop through the plaintext
    for (i = 0; i < strlen(plaintextCae); i++)
    {
        // If the character is lowercase, where range is 97 to 122
        if (islower(plaintextCae[i]))
        {
            cipherValueCae = ( (int)plaintextCae[i] - 97 + keyCae ) % 26 + 97; // Get the cipher value
            cipherCae = (char)cipherValueCae; // Convert the cipher value to a char
        }
        else // Else it's upper case, where range is 65 to 90
        {
            cipherValueCae = ( (int)plaintextCae[i] - 65 + keyCae ) % 26 + 65; // Get the cipher value
            cipherCae = (char)cipherValueCae; // Convert the cipher value to a char
        }

        // Print the ciphered character if it is alphanumeric (a letter)
        if (isalpha(plaintextCae[i]))
        {
            printf("%c", cipherCae);
        }
        else // Else print the character as is
        {
            printf("%c", plaintextCae[i]);
        }
    }
}