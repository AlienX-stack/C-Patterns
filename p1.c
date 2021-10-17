// 18.*
// **
// ***
// ****

#include <stdio.h>
int main()
{
    int r = 0;
    int c = 0;
    for (r = 0; r < 5; r++)
    {
        for (c = 0; c < r; c++)
        {
            printf("* ");
        }
        printf("\n");
    }
}