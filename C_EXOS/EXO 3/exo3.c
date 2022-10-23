// BTS SN - BONOLIS ENZO

#include <stdio.h>
#include "func/headers/mths.h"
#include "func/mths.c"
#include "func/headers/palindrome.h"
#include "func/palindrome.c"
#include "func/pendu.c"

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
    bool isPalindromeResult = isPalindrome(str);
    printf("isPalindromeResult = %d (1 = true, 0 = false)\n", isPalindromeResult);

    /* Exercice 3.3 */
    pendu();

    return 0;
}