#include<stdio.h>
// #include<conio.h> // Not needed for modern compilers

void main() // int main() is preferred
{
    int array[100];
    int first, last, mid, n, i, item;
    int found = 0; // Flag to indicate if the item is found

    printf("ENTER THE NUMBER OF ELEMENTS: ");
    scanf("%d", &n);

    printf("ENTER THE ELEMENTS IN SORTED ORDER: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }

    printf("ENTER THE ELEMENT TO BE SEARCHED: ");
    scanf("%d",&item);

    first = 0;
    last = n-1;

    while(first <= last)
    {
        mid = (first + last) / 2;

        if (array[mid] == item)
        {
            printf("SEARCH IS SUCCESSFULLY COMPLETED\n");
            printf("THE ITEM'S POSITION IS: %d\n", mid + 1);
            found = 1; // Set flag to true
            break;     // Exit the loop since item is found
        }
        else if (item < array[mid])
        {
            last = mid - 1; // Search in the left half
        }
        else
        {
            first = mid + 1; // Search in the right half
        }
    }

    if (found == 0) // Check the flag after the loop
    {
        printf("SEARCH IS NOT SUCCESSFULLY COMPLETED\n");
    }

    // getch(); // Not needed for modern compilers, use system("pause"); on Windows or just run from terminal
}
