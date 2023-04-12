 #include <stdio.h>

void findSecondLargestAndSmallest(int arr[], int n)
{
    int temp;

    // sort the array in descending order
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int secondLargest = arr[1];
    int secondSmallest = arr[n-2];
    float average = (secondLargest + secondSmallest) / 2.0;

    printf("The second largest element is %d\n", secondLargest);
    printf("The second smallest element is %d\n", secondSmallest);
    printf("The average of the two elements is %f\n", average);

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == average) {
            found = 1;
            break;
        }
    }

    if (found == 1) {
        printf("The average %f is present in the array.\n", average);
    } else {
        printf("The average %f is not present in the array.\n", average);
    }
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

    findSecondLargestAndSmallest(arr, n);

    return 0;
}

