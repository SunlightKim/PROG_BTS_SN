// BTS SN - BONOLIS ENZO

#include "../inc/vigenere.h"
#include <stdio.h>          // printf, fgets, stdin
#include <string.h>         // strlen
#include <ctype.h>          // toupper, isupper, islower, isalpha

/* Complementary exercise 2
* Vigenère cipher
* Formula:
* E[i] = (P[i] + K[i mod kLength]) mod N, where:
*/
char* vigenere(char* plaintextVig, char* keyVig)
{
    unsigned int i, j; 
    printf("Le texte chiffré est :");
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