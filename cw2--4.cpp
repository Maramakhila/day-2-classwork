 #include <stdio.h>

void largestTwoNumbers(int arr[], int n)
{
    int max1 = arr[0], max2 = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }

    printf("The FIRST LARGEST = %d\n", max1);
    printf("THE SECOND LARGEST = %d\n", max2);
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

    largestTwoNumbers(arr, n);

    return 0;
}

