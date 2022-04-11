//linear  search
/*
#include <stdio.h>
int main()
{
    int a[50],i,n,j;
    printf("How many element: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    {
        for (i=0; i<n; ++i)
        {
            scanf("%d",&a[i]);
        }
    }
    for (i=0; i<n; ++i)
    {
        printf("  %d  ",a[i]);
    }

    printf ("\nEnter element to search: ");
    scanf("%d",&j);

    for(i=0; i<n; i++)
    {
            if(a[i]==j)
            break;
    }
    if(i<n)
        printf("\nelement found to the index %d",i);
r
    else
        printf("\nnot found");
}
*/

//Binary Search
/*
#include <stdio.h>
int main()
{
    int i, u, l, mid, n, search, a[50];

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
    printf("\nEnter value to find :");
    scanf("%d", &search);

    u = 0;
    l = n - 1;
    mid = (u + l) / 2;

    while (u <= l)
    {
        if (a[mid] < search)
            u = mid + 1;
        else if (a[mid] == search)
        {
            printf("\nfound");
            break;
        }
        else
            l = mid - 1;
        mid = (u + l) / 2;
    }
    if (u > l)
        printf("\nNot found");

    return 0;
}
*/
