def isComposite(n):
    if n <= 1:
        return False
    for i in range(2, n):
        if n % i == 0:
            return True
    return False

def countCompositeNumbers(arr):
    count = 0
    for num in arr:
        if isComposite(num):
            count += 1
    return count

#Test Cases
arr1 = [16, 18, 27, 16, 23, 21, 19]
print("Number of Composite Numbers =", countCompositeNumbers(arr1)) # Output: 5

arr2 = [26, 28, 37, 26, 33, 31, 29]
print("Number of Composite Numbers =", countCompositeNumbers(arr2)) # Output: 4

arr3 = [1.6, 1.8, 2.7, 1.6, 2.3, 2.1, .19]
print("Number of Composite Numbers =", countCompositeNumbers(arr3)) # Output: 0

arr4 = [0, 160, 180, 270, 160, 230, 210, 190, 0]
print("Number of Composite Numbers =", countCompositeNumbers(arr4…
#include <stdio.h>

int main() {
   int arr[] = {16, -18, 27, -16, 23, -21, 19};
   int n = sizeof(arr)/sizeof(arr[0]);
   int count = 0;

   for(int i=0; i<n; i++) {
      if(arr[i]<0) {
         count++;
      }
   }

   printf("Number of negative numbers in Array elements = %d\n", count);

   return 0;
}


