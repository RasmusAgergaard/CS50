#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Init
    int height;

    //Promt user for a number between 1-8, inclusive
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    //Runs once for each height
    for (int line = 0; line < height; line++)
    {
        //First section
        for (int spaces = height - line; spaces > 1; spaces--)
        {
            printf(" ");
        }
        for (int hashes = 0; hashes < line + 1; hashes++)
        {
            printf("#");
        }

        //Spaces
        printf("  ");

        //Second section
        for (int hashes = 0; hashes < line + 1; hashes++)
        {
            printf("#");
        }

        printf("\n");
    }
}
