 #include <stdio.h>

int main() {
    int arr[] = {1, 2, 4, 5, 4, 2, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // loop through the array
    for (int i = 0; i < n; i++) {
        // loop through the remaining elements
        for (int j = i + 1; j < n;) {
            if (arr[j] == arr[i]) {
                // if a duplicate is found, shift all elements to the left
                for (int k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--; // decrement the size of the array
            } else {
                j++; // move on to the next element
            }
        }
    }

    // print the updated array
    printf("Array after removing duplicates: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

