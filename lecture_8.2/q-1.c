#include <stdio.h>

int main() {
    int size1, size2;

    // Input for array 1


    printf("Enter array arr1's size: ");
    scanf("%d", &size1);

    int arr1[size1];

    printf("Enter array arr1's elements:\n");
    for (int i = 0; i < size1; i++) {
        printf("arr1[%d] = ", i);
        scanf("%d", &arr1[i]);
    }

    // Input for array 2


    printf("\nEnter array arr2's size: ");
    scanf("%d", &size2);

    int arr2[size2];

    printf("Enter array arr2's elements:\n");
    for (int i = 0; i < size2; i++) {
        printf("arr2[%d] = ", i);
        scanf("%d", &arr2[i]);
    }

    // Merging arrays 1 and 2 into array 3


    int size3 = size1 + size2;
    int arr3[size3];

    for (int i = 0; i < size1; i++) {
        arr3[i] = arr1[i];
    }

    for (int i = 0; i < size2; i++) {
        arr3[size1 + i] = arr2[i];
    }

    // Output array 3


    printf("\nArray 3 is: ");
    for (int i = 0; i < size3; i++) {
        printf("%d ", arr3[i]);
       
    }
    printf("\n");

    return 0;
}
