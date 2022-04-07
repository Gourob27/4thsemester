#include <stdio.h>

int main()
{
    int a[50], i, j, n;
    printf("How many element: ");
    scanf("%d", &n);

    printf("Enter elements:");
    {
        for (i = 0; i < n; ++i)
            scanf("%d", &a[i]);
    }
    for (i = 0; i < n; ++i)
    {
        printf("  %d  ", a[i]);
    }

    printf("\nEnter element to search:");
    scanf("%d", &j);

    for (i = 0; i < n; ++i)
        if (a[i] == j)
            break;

    if (i < n)
        printf("Element found at index %d ", i);
    else
        printf("not found");

    return 0;
}