// BTS SN - BONOLIS ENZO

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Exercice 2.1 
* Ask the user their age, save it into a variable
* and check if the user is an adult or not
* Display it
*/
void exo2_1(void)
{
    int age;                                    // Declaration of an int variable age

    printf("Quel est votre age ? ");            // Ask the user their age
    scanf("%d", &age);                          // Save the age in the variable age

    /* Check if the user is an adult or not */
    if (age >= 18)                              // If the user is an adult
    {
        printf("Vous êtes majeur\n");
    }
    else                                        // If the user is not an adult
    {
        printf("Vous êtes mineur\n");
    }
}

/* Exercice 2.2
* Ask the user a letter, save it into a variable
* then check if the letter is the same as the one you chose
* Display to the user if the letter is the same or not
*/
void exo2_2(void)
{
    char letter;                                // Declaration of a char variable letter

    printf("Choisissez une lettre : ");         // Ask the user a letter
    scanf(" %c", &letter);                      // Save the letter in the variable letter
                                                // The space before %c is used to avoid the scanf to read the enter key

    /* Check if the letter is the same as the one predifined */
    if (letter == 'a')                          // If the letter is the same as the one predefined
    {
        printf("La lettre est la même\n");
    }
    else                                        // If the letter is not the same as the one predefined
    {
        printf("La lettre n'est pas la même\n");
    }
}

/* Exercice 2.3
* Display a number from 0 to 50 using a for loop
* Display a number from 0 to 50 using a do while loop
* Display a number from 50 to 0
*/
void exo2_3(void)
{
    int i;                                      // Declaration of an int variable i

    /* Display a number from 0 to 50 using a for loop */
    for (i = 0; i <= 50; i++)                   // For i = 0, while i is less or equal to 50, increment i by 1
    {
        printf("%d ", i);                       
    }
    printf("\n");                               

    /* Display a number from 0 to 50 using a do while loop */
    i = 0;                                      // Initialization of i with the value 0
    do                                          // Do the following
    {
        printf("%d ", i);                       
        i++;                                    // Increment i by 1
    } while (i <= 50);                          // While i is less or equal to 50
    printf("\n");                               

    /* Display a number from 50 to 0 */
    for (i = 50; i >= 0; i--)                   // For i = 50, while i is greater or equal to 0, decrement i by 1
    {
        printf("%d ", i);                       
    }
    printf("\n");
}

/* Exercice 2.4 
* Display all even numbers from 0 to 50
*/
void exo2_4(void)
{
    int i;                                      // Declaration of an int variable i

    /* Display all even numbers from 0 to 50 */
    for (i = 0; i <= 50; i++)                   // For i = 0, while i is less or equal to 50, increment i by 1
    {
        if (i % 2 == 0)                         // If i is an even number
        {
            printf("%d ", i);                   
        }
    }
    printf("\n");
}

/* Complementary exercise
* Generate a random number
* Make a "guess the number" game (plus or minus)
* Continue until the user finds the number
* Display the number of tries
*/
void exo2_5(void)
{
    int randomnumber;                                                   // Declaration of an int variable randomnumber
    int usernumber;                                                     // Declaration of an int variable usernumber
    int tries = 0;                                                      // Declaration and initialization of an int variable tries with the value 0

    srand(time(NULL));                                                  // Initialization of the random number generator
    randomnumber = rand() % 20;                                         // Generate a random number between 0 and 20

    /* Make a "guess the number" game (plus or minus) */
    do                                                                  
    {
        printf("Entrez un nombre compris entre 0 et 20 : ");            // Ask the user a number
        scanf("%d", &usernumber);                                       // Save the number in the variable usernumber

        if (usernumber < randomnumber)                                  // If the number is less than the random number
        {
            printf("C'est plus\n");
        }
        else if (usernumber > randomnumber)                             // If the number is greater than the random number
        {
            printf("C'est moins\n");
        }
        tries++;                                                        // Increment tries by 1
    } while (usernumber != randomnumber);                               // While the number is not equal to the random number

    printf("Vous avez trouvé le nombre en %d essais\n", tries);
}

/* MAIN FUNCTION */
int main(void)
{
    exo2_1();
    exo2_2();
    exo2_3();
    exo2_4();
    exo2_5();
    return 0;
}