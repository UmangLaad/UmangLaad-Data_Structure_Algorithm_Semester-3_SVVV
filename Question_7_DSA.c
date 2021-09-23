// Q: Insertion In The Stored List.

#include <stdio.h>

// Umang Laad

void main()
{
    int arr1[25], i, n, p, inval;

    printf("\nInput The Size Of Array: ");
    scanf("%d", &n);

    printf("\nInput %d Elements In The Array In Ascending Order - \n", n);
    for (i = 0; i < n; i++)
    {
        printf("\nElement - %d : ", i);
        scanf("%d", &arr1[i]);
    }
    printf("\nInput the value to be inserted : ");
    scanf("%d", &inval);
    printf("\n\nThe Existing Array List Is :\n ");
    for (i = 0; i < n; i++)
        printf("% 5d", arr1[i]);

    for (i = 0; i < n; i++)
        if (inval < arr1[i])
        {
            p = i;
            break;
        }

    for (i = n; i >= p; i--)
        arr1[i] = arr1[i - 1];

    arr1[p] = inval;

    printf("\n\nAfter Insertion The List Is :\n ");
    for (i = 0; i <= n; i++)
        printf("% 5d", arr1[i]);
    printf("\n");
}

// Umang Laad