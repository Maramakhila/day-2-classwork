#include <stdio.h>

int main() {
    int arr[] = {16, 18, 27, 16, 23, 21, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int search_element = 23;
    int i, position = -1;
    
    for (i = 0; i < n; i++) {
        if (arr[i] == search_element) {
            position = i+1;
            break;
        }
    }
    
    if (position == -1) {
        printf("Given element %d is not found in the array.\n", search_element);
    } else {
        printf("Given element %d is found at %d th position.\n", search_element, position);
    }
    
    return 0;
}
