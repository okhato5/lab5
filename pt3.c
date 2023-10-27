/* Lab 5 P3: starter code to complete*/
#include <stdio.h>
#include <string.h>

int main()
{
    char input[256];
    int letterCount[26] = {0}; // store the count of each letter
    printf("Enter text strings (press Enter on an empty line to exit):\n");

    while (1)
    {
        fgets(input, sizeof(input), stdin); // get the input from the user

        // Check for an empty line to exit the loop
        if (strlen(input) == 1 && input[0] == '\n')
        {
            break;
        }

        for (int i = 0; i < strlen(input); i++)
        {       //Checking if character is a-z or A-Z and making them forced upercase
            if ((input[i] >= 'A' && input[i] <= 'Z') || (input[i] >= 'a' && input[i] <= 'z'))
            {
                // Convert the letter to uppercase and recount
                int index = toupper(input[i]) - 'A';
                letterCount[index]++;
            }
        }
    }

    // Display the amount of letter occurances
    printf("Distribution of letters in the input:\n");
    for (int i = 0; i < 26; i++)
    {
        printf("%c: %d ", 'A' + i, letterCount[i]);
    }

    return 0;
}
