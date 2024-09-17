#include <cs50.h>
#include <stdio.h>

int main (void)

{
    int height, row, space, hashtag;

    do
    {
        height = get_int ("Height: ");
    }
    while (height<1);

    for (row = 0, row<height; row = row + 1)
    {
        for (space = 0; space<=row; space = space + 1)
        {
            printf(" ")
        }
        for (hashtag = 0; hashtag<=row; hashtag = hashtag + 1)
        {
            printf("#");
        }

    }


}
