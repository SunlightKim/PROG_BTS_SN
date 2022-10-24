// BTS SN - BONOLIS ENZO

#include "headers/vigenere.h"
#include <stdio.h>          // printf, fgets, stdin
#include <string.h>         // strlen
#include <ctype.h>          // toupper, isupper, islower, isalpha

/* Complementary exercise 2
* Vigenère cipher
* Formula:
* E[i] = (P[i] + K[i mod kLength]) mod N, where:
* E[i] = encrypted letter
* P[i] = plain text letter
* K[i mod kLength] = key letter modulo the key length
* N = number of letters in the alphabet
* Suppose letter A has the value 0, B has the value 1, etc.
*         key = "HELLO"
*         ( (int)Letter + (int)keyLetter ) mod 26 ==> returns the encrypted letter as a number, called cipherValue
                                                 ==> (char)cipherValue = '[some letter]'
                                                 NOTE: ASCII 'a' = 97, 'b' = 98, until 'z' = 122 (lowercase only)
                                                 NOTE: ASCII 'A' = 65', 'B' = 66, until 'Z' = 90 (uppercase only)
*/
char* vigenere(char* plaintextVig, char* keyVig)
{
    int i;
    char cipher;
    int cipherValue;
    int keyLength = strlen(keyVig);

    // Loop through the plaintext
    for (i = 0; i < strlen(plaintextVig); i++)
    {
        // If the character is lowercase, where range is 97 to 122
        if (islower(plaintextVig[i]))
        {
            cipherValue = ( (int)plaintextVig[i] - 97 + (int)tolower(keyVig[i % keyLength]) ) % 26 + 97; // Get the cipher value
            cipher = (char)cipherValue; // Convert the cipher value to a char
        }
        else // Else it's upper case, where range is 65 to 90
        {
            cipherValue = ( (int)plaintextVig[i] - 65 + (int)toupper(keyVig[i % keyLength]) ) % 26 + 65; // Get the cipher value
            cipher = (char)cipherValue; // Convert the cipher value to a char
        }

        // Print the ciphered character if it is alphanumeric (a letter)
        if (isalpha(plaintextVig[i]))
        {
            printf("%c", cipher);
        }
        else // Else print the character as is
        {
            printf("%c", plaintextVig[i]);
        }
    }
}