#include <stdio.h>
#include <stdlib.h>

int selection_sort(int arr[], int n)
{
    int fixed, i, j, temp;

    for(i=0; i< n-1; i++)
    {
        fixed= i;
        for(j=i+1; j< n; j++)
        {
            if( arr[fixed] > arr[j] )
            {
                fixed= j;
            }
        }

        temp= arr[i];
        arr[i]= arr[fixed];
        arr[fixed]= temp;

    }

    return arr;
}

int main()
{
    int *arr;
    int n, i;
    printf("\nEnter the size of the array:- ");
    scanf("%d",&n);
    arr=(int *)malloc(n*sizeof(int));
    printf("\nEnter the array to be sorted:- \n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    arr = selection_sort(arr, n);
    printf("\nAfter sorting :-\n ");
    for(i=0; i<n; i++)
        printf("%d\t", arr[i]);

        printf("\n");
}
