// BTS SN - BONOLIS ENZO

#include <stdio.h>
#include <string.h>

/* Exercice 3.3
* The hangman's game 
* (le jeu du pendu)
*/

int pendu() {
    char mot[20]; // the word to guess of 20 characters max
    char lettre; // the letter proposed by the player
    char motCache[20]; // the word to display
    int nbCoups = 0; // the number of attempts / the number of wrong letters proposed
    int i, j, trouve, nbLettres; // variables for loops and conditions

    // Get the word to guess
    printf("Entrez le mot à deviner (20 caractères maximum): ");
    scanf("%s", mot);

    // Initialize the word to display
    nbLettres = strlen(mot);                // Get the length of the word to guess
    for (i = 0; i < nbLettres; i++)         // Loop through the word to guess
    {
        motCache[i] = '*';                  // Set the current char to *
    }
    motCache[i] = '\0';                     // Set the last char to \0

    // Game loop
    do 
    {
        // Display the word to display
        printf("Mot à deviner : %s (%d coups) ", motCache, nbCoups);

        // Get the letter proposed by the player
        printf("Proposez une lettre : ");
        scanf(" %c", &lettre);

        // Check if the letter is in the word
        trouve = 0;                                     // Set trouve to 0
        for (i = 0; i < nbLettres; i++)                 // Loop through the word to guess
        {
            if (mot[i] == lettre)                       // If the current char is the same as the letter proposed by the player
            {
                motCache[i] = lettre;                   // Set the current char of the word to display to the letter
                trouve = 1;                             // Set trouve to 1
            }
        }

        // Display the result
        if (trouve)
        {
            printf("Bonne lettre !\n");                 
        } 
        else 
        {
            printf("Mauvaise lettre !\n");
            nbCoups++;
        }
    } 
    while (strcmp(mot, motCache) != 0 && nbCoups < 10);     // Loop while the word to display is not the same as the word to guess 
                                                            // and the number of attempts is less than 10

    // Display the result
    if (nbCoups < 10) 
    {
        printf("Bravo, vous avez trouvé le mot %s en %d coup(s) !\n", mot, nbCoups);
    } 
    else 
    {
        printf("Désolé, vous avez perdu ! Le mot était %s.\n", mot);
    }
}