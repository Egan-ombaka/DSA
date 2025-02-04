#include<stdio.h>

int main () {

    int firstNum = 0, secondNum = 1;
    int nextNum;

    printf("%d\n", firstNum);
    printf("%d\n", secondNum);

    for(int num = 0; num < 18; num++) {
        nextNum = firstNum + secondNum;
        printf("%d\n", nextNum);

        firstNum = secondNum;
        secondNum = nextNum;
    }

    return 0;
}