// 23. 1
//     2 4
//     3 6 9
//     4 8 12 16

#include <stdio.h>
int main()
{
    int r = 0;
    int c = 0;
    int k;
    int n;
    scanf("%d", &n);
    k = (n * (n + 1)) / 2;
    for (r = 0; r < 5; r++)
    {
        for (c = 0; c < r; c++, k--)
        {
            printf("%d ", k);
        }
        printf("\n");
    }
}