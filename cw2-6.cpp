#include <stdio.h>

int findOddElement(int arr[], int n)
{
    int count = 0, element;

    for (int i = 0; i < n; i++) {
        if (count == 0) {
            element = arr[i];
            count = 1;
        } else if (arr[i] == element) {
            count++;
        } else {
            count--;
        }
    }

    return element;
}

int main()
{
    int n, arr[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int oddElement = findOddElement(arr, n);

    printf("The odd element in the array is %d\n", oddElement);

    return 0;
}

