#include <stdio.h>
/*
@AUTHOR Egan OMbaka
*/

int main()
{
    int i, size, pos, x;          // variable declaration
    int arr[5] = {2, 3, 4, 5, 6}; // array declaration and initialization

    size = sizeof(arr) / sizeof(arr[0]); // calculating the size of the array

    // printing the original array
    printf("Original Array before Insertion: \n");
    for (i = 0; i < size; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // taking the position and the element to be inserted
    printf("\nEnter the position where you want to insert the element: ");
    scanf("%d", &pos);

    printf("\nEnter the element you want to insert: ");
    scanf("%d", &x);

    size = size + 1; // increasing the size of the array by 1

    // shifting the elements to the right
    for (i = size - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i]; // updating the value of the next element to the current element
    }

    arr[pos - 1] = x; // inserting the element at the given position

    // printing the array after insertion
    printf("\nArray after Insertion: \n");
    for (i = 0; i < size; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}