// Q: Write a program to create a Linked List with five elements and display it.

#include <stdio.h>
#include <malloc.h>

// Umang Laad

struct node
{
    int info;
    struct node *link;
};

struct node *first;

void main()
{

    void create();

    create();
    getch();
}

void create()
{
    struct node *ptr, *cpt;
    char ch;
    ptr = (struct node *)malloc(sizeof(struct node));
    printf("\nInput First Node Information: ");
    scanf("%d", &ptr->info);
    first = ptr;

    do
    {
        cpt = (struct node *)malloc(sizeof(struct node));
        printf("\nInput Next Node Information: ");
        scanf("%d", &ptr->info);
        ptr->link = cpt;
        ptr = cpt;
        printf("\nPress <Y/N> For More Node");
        ch = getch();
    } while (ch == 'Y');
    ptr->link = NULL;
}

// Umang Laad
