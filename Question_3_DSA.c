// Q: Create an Multidimensional Array and initialize with values and display in Row and Column Major Order.

#include <stdio.h>
#define MAX 10

// Umang Laad

int main()
{
    int arr[MAX][MAX], m, n, i, j;
    printf("\nEnter Total Number Of Rows: ");
    scanf("%d", &m);
    printf("\nEnter Total Number Of Columns: ");
    scanf("%d", &n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("\nEnter Number: ");
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nRow-Major Order:\n");
    for (i = 0; i < n; i++)
    {

        for (j = 0; j < n; j++)
        {

            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    printf("\nColumn-Major Order:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", arr[j][i]);
        }
        printf("\n");
    }
}

// Umang Laad
