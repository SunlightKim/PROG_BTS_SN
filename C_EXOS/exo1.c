// BTS SN - BONOLIS ENZO

#include <stdio.h>
#include <stdlib.h>

/* Exercice 1.1 
* Declare 3 different variables of type int, float and char
* and init them with the values 1, 2.5 and 'a'.
* Display the values of the variables separately (one by one)
* Then display them all together on the same line.
*/
void exo1_1(void)
{
    int i = 1;                                                          // Declaration and initialization of an int variable i with the value 1
    float f = 2.5;                                                      // Declaration and initialization of a float variable f with the value 2.5
    char c = 'a';                                                       // Declaration and initialization of a char variable c with the value 'a'

    /* Print the variables one by one */
    printf("La variable i, de type integer, est égale à %d\n", i);      // %d is used to print an integer
    printf("La variable f, de type float, est égale à %.1f\n", f);      // %.1f means that we want to print only one digit after the comma
                                                                        // %f is used to print a float
    printf("La variable c, de type char, est égale à %c\n", c);         // %c is used to print a char

    /* Print the variables all together */
    printf("i = %d, f = %.1f, c = %c\n", i, f, c);
}

/* Exercice 1.2 
* Ask the user their age and gender
* Save these informations
* Display them
*/
void exo1_2(void)
{
    int age;                                    // Declaration of an int variable age
    char gender;                                // Declaration of a char variable gender
    
    printf("Quel est votre sexe ? (H/F) ");     // Ask the user their gender
    scanf("%c", &gender);                       // Save the gender in the variable gender

    printf("Quel est votre age ? ");            // Ask the user their age
    scanf("%d", &age);                          // Save the age in the variable age

    /* Print the information all together */
    printf("Vous avez %d ans et vous etes de sexe %c\n", age, gender);
}

/* Exercice 1.3 
* Make an operation between two integers and save the result as an integer
* Make an operation between an integer and a real number and save the result as a real number
* Show the results of the operations
*/
void exo1_3(void)
{
    int a = 5;                  // Declaration and initialization of an int variable a with the value 5
    int b = 2;                  // Declaration and initialization of an int variable b with the value 2
    float c = 2.0;              // Declaration and initialization of a float variable c with the value 5.0

    int result1 = a / b;        // The result is an integer because the two operands are integers
    float result2 = a / c;      // The result is a float because the two operands are not the same type

    printf("Première opération = %d, Seconde opération = %.1f\n", result1, result2);
}

/* Complementary exercise
* Make and display a letter with numbers
* Displaying the integer value of a char variable (cast)
* Displaying the value of a char in an int variable (cast)
*/
void exo1_4(void)
{
    /* 1.4.1 */
    // Display the letter A with the number 1 (ASCII art text)
    printf("   1   \n");
    printf("  1 1  \n");
    printf(" 11111 \n");
    printf(" 1   1 \n");
    printf(" 1   1 \n");
    
    /* 1.4.2 and 1.4.3 */
    char letter = 'a';                                                          // Declaration and initialization of a char variable letter with the value 'a'
    int number = 65;                                                            // Declaration and initialization of an int variable number with the value 65

    printf("La lettre '%c' a pour code ASCII '%d'\n", letter, (int)letter);    // Cast the char variable letter to an int
    printf("Le code ASCII '%d' a pour lettre '%c'\n", number, (char)number);   // Cast the int variable number to a char
}

/* MAIN FUNCTION */
int main(void)
{
    exo1_1();
    exo1_2();
    exo1_3();
    exo1_4();
    return 0;
}