#include <stdio.h>

int main()
{
    int arr[100], n, i, index;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the index of the element to be deleted: ");
    scanf("%d", &index);

    if (index < 0 || index >= n) {
        printf("Invalid index\n");
        return 0;
    }

    // Delete element by shifting elements to the left
    for (i = index; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--; // Decrease the size of the array by 1

    printf("The array after deletion is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

