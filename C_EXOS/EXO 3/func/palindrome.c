// BTS SN - BONOLIS ENZO

#include "headers/palindrome.h"

// Check if a string is a palindrome
bool isPalindrome(char str[]) 
{
    int len = strlen(str);                      // Get the length of the string
    for (int i = 0; i < len / 2; i++)           // Loop through the string until the middle is reached (len / 2)
    {         
        if (str[i] != str[len - i - 1]) 
        {                                       // If the current char is not the same as the one at the opposite end (len - i - 1)
            return false;                       // Return false
        }
    }
    return true;
}