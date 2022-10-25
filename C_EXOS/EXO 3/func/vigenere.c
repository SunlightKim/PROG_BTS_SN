// BTS SN - BONOLIS ENZO

#include "../inc/vigenere.h"
#include <stdio.h>          // printf, fgets, stdin
#include <string.h>         // strlen
#include <ctype.h>          // toupper, isspace

/* Complementary exercise 2
* Vigenère cipher
* Formula:
* E[i] = (P[i] + K[i mod kLength]) mod N, where:
*/
char* vigenere(char* plaintextVig, char* keyVig)
{
    unsigned int i, j; 
    printf("Le texte chiffré est :");
    /* Remove spaces from plaintext and key, if any */
    for (i = 0; i < strlen(plaintextVig); i++)
    {
        if (isspace(plaintextVig[i]))
        {
            for (j = i; j < strlen(plaintextVig); j++)
            {
                plaintextVig[j] = plaintextVig[j + 1];
            }
        }
    }
    for (i = 0; i < strlen(keyVig); i++)
    {
        if (isspace(keyVig[i]))
        {
            for (j = i; j < strlen(keyVig); j++)
            {
                keyVig[j] = keyVig[j + 1];
            }
        }
    }

    /* Encrypt text */
    for (i = 0, j = 0; i < strlen(plaintextVig); i++, j++)
    {
        if (j >= strlen(keyVig))
        {
            j = 0;
        }
        printf("%c", 65 + (((toupper(plaintextVig[i]) - 65) + (toupper(keyVig[j]) - 65)) % 26));
    }
    printf("\n");
}