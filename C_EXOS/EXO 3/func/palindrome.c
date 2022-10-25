// BTS SN - BONOLIS ENZO

#include "../inc/palindrome.h"

// Check if a string is a palindrome
/* EXPLANATION
* str[i] = current char
* str[len - i - 1] = char at the opposite end
* --> because the index starts at 0, we need to subtract 1 from the length to get the last char
* we also need to subtract i from the length to get the char at the opposite end
* e.g. "hello" -> len = 5 -> str[0] = h, so the opposite end is str[5 - 0 - 1] = str[4] = o
*/
int isPalindrome(char str[]) 
{
    int len = strlen(str);                      // Get the length of the string
    for (int i = 0; i < len / 2; i++)           // Loop through the string until the middle is reached (len / 2)
    {         
        if (str[i] != str[len - i - 1]) 
        {                                       // If the current char is not the same as the one at the opposite end (len - i - 1)
            return 0;                           // Return false (0)
        }
    }
    return 1;                                   // Return true (1)
}