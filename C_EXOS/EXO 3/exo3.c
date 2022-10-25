// BTS SN - BONOLIS ENZO

// Include librairies
#include <stdio.h>
#include "inc/mths.h"
#include "inc/palindrome.h"
#include "inc/pendu.h"
#include "inc/caesar.h"
#include "inc/vigenere.h"

int main(void)
{
    int c;                                                                                  // Used to clear the buffer

    /* Exercice 3.1 */
    int addresult = add(2, 3);
    printf("addresult = %d\n", addresult);

    int subresult = sub(2, 3);
    printf("subresult = %d\n", subresult);

    int mulresult = mul(2, 3);
    printf("mulresult = %d\n", mulresult);

    /* Exercice 3.2 */
    char str[127];
    printf("Entrez un mot à vérifier :");
    scanf("%s", str);
    int isPalindromeResult = isPalindrome(str);                                            // See func/palindrome.c for more info
    printf("isPalindrome = %d (1 = true, 0 = false)\n", isPalindromeResult);

    /* CLEAR BUFFER */
    while ((c = getchar()) != '\n' && c != EOF) { }

    /* Exercice 3.3 */
    char mot[127];
    // Get the word
    printf("Entrez le mot à déviner :");
    scanf("%s", &mot);
    pendu(mot);

    /* CLEAR BUFFER */
    while ((c = getchar()) != '\n' && c != EOF) { }

    /* Complementary Exercises */
    /* CAESAR CIPHER */
    int keyCae;
    char plaintextCae[127];
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
    char keyVig[15];
    char plaintextVig[127];
    // Get the key
    printf("Entrez la clé de chiffrement (16 caractères max) :");
    gets(keyVig);
    // Get the plaintext
    printf("Entrez le texte à chiffrer (128 caractères max) : ");
    gets(plaintextVig);
    // Print the encrypted plain text
    vigenere(plaintextVig, keyVig);                                                         // See func/vigenere.c for more info

    return 0;
}