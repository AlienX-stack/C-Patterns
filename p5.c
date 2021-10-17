// 22. 1
//     2 3
//     4 5 6
//    7 8 9 10

#include <stdio.h>
int main()
{
    int r = 0;
    int c = 0;
    int k = 0;
    for (r = 1, k = 1; r <= 5; r++)
    {
        for (c = 1; c <= r; c++, k++)
        {
            printf("%d ", k);
        }
        printf("\n");
    }
}