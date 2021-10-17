//19. 1 1 1 1
// 1 1 1 1
// 1 1 1 1

#include <stdio.h>
int main()
{
    int r = 0;
    int c = 0;
    for (r = 0; r < 4; r++)
    {
        for (c = 0; c < r; c++)
        {
            printf("1 ");
        }
        printf("\n");
    }
}