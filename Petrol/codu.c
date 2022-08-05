#include <stdio.h>
#include <stdlib.h>
int main()
{
    int sum = 0, i, c, d, swap, tt = 0, count = 0;
    int arr[500]; // number of chococlates
    int x, y;     // x = number of socks, y = number of chocolates
    scanf("%d", &x);
    for (i = 0; i < x; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < x; i++)
    {
        sum = sum + arr[i];
    }
    // printf("\n\n\n");
    // printf("%d\t%d\n", x, sum);
    if ((sum % x) == 0)
    {
        // for (c = 0; c < x - 1; c++)
        // {
        //     for (d = 0; d < x - c - 1; d++)
        //     {
        //         if (arr[d] > arr[d + 1]) /* For decreasing order use '<' instead of '>' */
        //         {
        //             swap = arr[d];
        //             arr[d] = arr[d + 1];
        //             arr[d + 1] = swap;
        //         }
        //     }
        // }
        for (i = 0; i < x; i++)
        {
            printf(" %d ", arr[i]);
        }

        int avg = 0;
        avg = sum / x;
        // for (i = x; i > 0; i--)
        for (int i = 0; i < x; i++)
        {
            int temp = arr[i];
            arr[i] = avg;
            arr[i + 1] = arr[i + 1] + (temp - avg);
            temp = 0;
            // count++;
        }
        // printf("number of shift is %d", count);
        // printf("\n\n\n\n");
        // for (i = 0; i < x; i++)
        // {
        //     printf("%d ", arr[i]);
        // }
    }
    else
        printf("-1");
}