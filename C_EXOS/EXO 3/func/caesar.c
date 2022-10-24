// BTS SN - BONOLIS ENZO

#include <stdio.h>
#include <string.h>

/* Complementary exercise 1 
* Caesar's cipher
* EXPLANATION:
* Each letter of the alphabet is shifted by a certain number of letters, let's name it "key"
* e.g. key = 3, so A becomes D, B becomes E, C becomes F, etc.
* if the letter is 'Z', it becomes 'C' (because Z + 3 = C), etc.
* The key is added to the ASCII code of the letter to get the new letter
* We need to use modulo 26 to get the correct letter if the key is greater than 26 (e.g. key = 27, so A becomes B)
* We reiterate the process for each letter of the alphabet
* However, the ASCII codes for the alphabet ranges from 65 to 90, so we need to keep the result between 65 and 90
*/

int caesar() {
    int key; // the key
    int i; // variable for loops
    char alphabet[26]; // the alphabet
    char alphabetShifted[26]; // the shifted alphabet

    // Get the key
    printf("Entrez la clé (de 1 à 26) : ");
    scanf("%d", &key);

    // Initialize the alphabet
    for (i = 0; i < 26; i++) // Loop through the alphabet
    {
        alphabet[i] = 65 + i; // Set the current char to the ASCII code of the letter
    }

    // Initialize the shifted alphabet
    for (i = 0; i < 26; i++) // Loop through the alphabet
    {
        alphabetShifted[i] = 65 + ((i + key) % 26); // Set the current char to the ASCII code of the letter shifted by the key
    }

    // Display the alphabet and the shifted alphabet
    for (i = 0; i < 26; i++) // Loop through the alphabet
    {
        printf("%c -> %c\n", alphabet[i], alphabetShifted[i]); // Display the current char of the alphabet and the shifted alphabet
    }
}