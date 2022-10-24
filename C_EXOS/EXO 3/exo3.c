// BTS SN - BONOLIS ENZO

// Include headers
#include <stdio.h>
#include "func/headers/mths.h"
#include "func/headers/palindrome.h"
#include "func/headers/caesar.h"
#include "func/headers/vigenere.h"

// Include functions
#include "func/mths.c"
#include "func/palindrome.c"
#include "func/pendu.c"
#include "func/caesar.c"
#include "func/vigenere.c"

int main(void)
{
    /* Exercice 3.1 */
    int addresult = add(2, 3);
    printf("addresult = %d\n", addresult);

    int subresult = sub(2, 3);
    printf("subresult = %d\n", subresult);

    int mulresult = mul(2, 3);
    printf("mulresult = %d\n", mulresult);

    /* Exercice 3.2 */
    char str[] = "kayak";
    bool isPalindromeResult = isPalindrome(str);                                            // See func/palindrome.c for more info
    printf("isPalindromeResult = %d (1 = true, 0 = false)\n", isPalindromeResult);

    /* Exercice 3.3 */
    pendu();

    /* CLEAR BUFFER */
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }

    /* Complementary Exercises */
    /* CAESAR CIPHER */
    int keyCae;
    char plaintextCae[101];
    // Get the plaintext
    printf("Entrez le texte à chiffrer :");
    fgets(plaintextCae, sizeof(plaintextCae), stdin);
    // Get the key
    printf("Entrez la clé (de 1 à 26) :");
    scanf("%d", &keyCae);
    // Print the encrypted plain text
    printf("Le texte chiffré est : ");
    caesar(plaintextCae, keyCae);                                                           // See func/caesar.c for more info

    /* CLEAR BUFFER */
    while ((c = getchar()) != '\n' && c != EOF) { }

    /* VIGENERE CIPHER */
    char keyVig[101];
    char plaintextVig[101];
    // Get the key
    printf("Entrez la clé de chiffrement :");
    fgets(keyVig, sizeof(keyVig), stdin);
    // Get the plaintext
    printf("Entrez le texte à chiffrer : ");
    fgets(plaintextVig, sizeof(plaintextVig), stdin);
    // Print the encrypted plain text
    printf("Le texte chiffré est : ");
    vigenere(plaintextVig, keyVig);                                                         // See func/vigenere.c for more info

    return 0;
}