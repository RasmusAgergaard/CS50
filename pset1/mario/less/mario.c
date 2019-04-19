/*******
*
*   Rasmus Agergaard
*
*   CS50 - Pset1 - mario
*
*   Prints a half pyramid no higher than 23 blocks
*
*******/

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Init
    int height;

    //Promt user for "height"
    do
    {
        height = get_int("Height: ");
    }
    while (height < 0 || height > 23);

    //Loop to draw
    for (int line = 0; line < height; line++)
    {
        for (int spaces = height - line; spaces > 1; spaces--)
        {
            printf(" ");
        }
        for (int hashes = 0; hashes < line + 2; hashes++)
        {
            printf("#");
        }
        printf("\n");
    }
}