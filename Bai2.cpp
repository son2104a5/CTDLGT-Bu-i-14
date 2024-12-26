#include <stdio.h>

int binarySearch(int arr[], int left, int right, int key) {
    if (left > right) {
        return -1;
    }
    int mid = left + (right - left) / 2;
    if (arr[mid] == key) {
        return mid;
    }
    if (arr[mid] < key) {
        return binarySearch(arr, mid + 1, right, key);
    } else {
        return binarySearch(arr, left, mid - 1, key);
    }
}

void testBinarySearchRecursive() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Day so: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int key = 8;
    int result = binarySearch(arr, 0, n - 1, key);
    if (result != -1) {
        printf("Phan tu %d duoc tim thay tai vi tri: %d\n", key, result);
    } else {
        printf("Phan tu %d khong ton tai trong day.\n", key);
    }

    key = 5;
    result = binarySearch(arr, 0, n - 1, key);
    if (result != -1) {
        printf("Phan tu %d duoc tim thay tai vi tri: %d\n", key, result);
    } else {
        printf("Phan tu %d khong ton tai trong day.\n", key);
    }
}

int main() {
    testBinarySearchRecursive();
    return 0;
}

