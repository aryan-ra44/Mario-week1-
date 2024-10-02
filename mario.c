#include <cs50.h>
#include <stdio.h>
int main(void)

{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1);
    for (int row = 0; row < height; row++)
    {
        for (int space = 0; space < height - row - 1; space++)
        {
            printf(" ");
        }
        for (int hashtag = 0; hashtag <= row; hashtag++)
        {
            printf("#");
        }
        printf("\n");
    }
}
