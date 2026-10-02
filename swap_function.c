#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int first, second;

    printf("Enter two numbers: ");
    scanf("%d %d", &first, &second);

    printf("Before Swap: %d %d\n", first, second);

    swap(&first, &second);

    printf("After Swap: %d %d\n", first, second);

    return 0;
}
