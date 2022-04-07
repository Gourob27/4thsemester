//quick
/*
#include <stdio.h>
int main()
{
   int i, count, n[50];
   printf("How many elements u want to insert:");
   scanf("%d", &count);
   printf("Enter elements:\n", count);
   for (i = 0; i < count; i++)
      scanf("%d", &n[i]);
   quicksort(n, 0, count - 1);
   printf("Sorted elements are: ");
   for (i = 0; i < count; i++)
      printf(" %d", n[i]);
   return 0;
}

void quicksort(int n[50], int start, int end)
{
   int lb, ub, pivot, temp;
   if (start < end)
   {
      pivot = start;
      lb = start;
      ub = end;

      while (lb < ub)
      {
         while (n[lb] <= n[pivot] && lb < end)
            lb++;
         while (n[ub] > n[pivot])
            ub--;
         if (lb < ub)
         {
            temp = n[lb];
            n[lb] = n[ub];
            n[ub] = temp;
         }
      }
      temp = n[pivot];
      n[pivot] = n[ub];
      n[ub] = temp;
      quicksort(n, start, ub - 1);
      quicksort(n, ub + 1, end);
   }
}
*/

/*
#include <stdio.h>
void mergeSort(int [], int, int, int);
void h(int [],int, int);

int main()
{
    int list[50];
    int i, size;

    printf("Enter total number of elements:");
    scanf("%d", &size);
    printf("Enter the elements:\n");
    for(i = 0; i < size; i++)
    {
         scanf("%d", &list[i]);
    }
    h(list, 0, size - 1);
    printf("After merge sort:\n");
    for(i = 0;i < size; i++)
    {
         printf("%d   ",list[i]);
    }

   return 0;
}

void h(int list[],int low,int high)
{
    int mid;

    if(low < high)
    {
        mid = (low + high) / 2;
        h(list, low, mid);
        h(list, mid + 1, high);
        mergeSort(list, low, mid, high);
    }
}

void mergeSort(int list[],int low,int mid,int high)
{
    int i, mi, k, lo, temp[50];

    lo = low;
    i = low;
    mi = mid + 1;
    while ((lo <= mid) && (mi <= high))
    {
        if (list[lo] <= list[mi])
        {
            temp[i] = list[lo];
            lo++;
        }
        else
        {
            temp[i] = list[mi];
            mi++;
        }
        i++;
    }
    if (lo > mid)
    {
        for (k = mi; k <= high; k++)
        {
            temp[i] = list[k];
            i++;
        }
    }
    else
    {
        for (k = lo; k <= mid; k++)
        {
             temp[i] = list[k];
             i++;
        }
    }

    for (k = low; k <= high; k++)
    {
        list[k] = temp[k];
    }
}
*/

/*
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    cout<<v.size();

    vector<int>::iterator it;
    for(it=v.begin(); it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
}
*/

#include <stdio.h>
int main()
{
    int a[3][4], i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
}


























