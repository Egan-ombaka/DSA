#include<stdio.h>
/*
@AUTHOR Egan Ombaka
REG NO: BSE-01-0076/2024
A C programm that inserts an Element in an already defined Array
*/

void insert(int arr[], int *n, int pos, int val) {

    for(int i =*n; i > pos; i--) {
        arr[pos] = val;

        (*n)++;
    }
}
int main () {

    //Variable declaration
    int arr[7] = {1, 2, 3, 5, 6, 7}; //the array that we will insert the element into
    int pos = 3, n = 5, val = 4;//val is the element we will insert to the variable.

    insert(arr, &n, pos, val);

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}