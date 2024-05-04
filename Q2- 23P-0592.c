#include <stdio.h>

int collatzLength(int n)
{
    int length = 1;
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else
        {
            n = 3 * n + 1;
        }
        length++;
    }
    return length;
}

int main()
{
    int n;
    do
    {
        printf("Enter the upper limit for finding the longest Collatz sequence: ");
        scanf("%d", &n);
    } while (n < 0);
    int maxLength = 0;

    printf("Numbers with the longest Collatz sequence and their lengths:\n");

    for (int i = 1; i <= n; ++i)
    {
        int length = collatzLength(i);
        if (length > maxLength)
        {
            maxLength = length;
        }
    }

    for (int i = 1; i <= n; ++i)
    {
        int length = collatzLength(i);
        if (length == maxLength)
        {
            printf("Number: %d, Length: %d\n", i, length);
        }
    }

    return 0;
}
