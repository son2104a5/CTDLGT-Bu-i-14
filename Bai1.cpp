#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

void testLinearSearch() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Day so: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int key = 8;
    int result = linearSearch(arr, n, key);
    if (result != -1) {
        printf("Phan tu %d duoc tim thay tai vi tri: %d\n", key, result);
    } else {
        printf("Phan tu %d khong ton tai trong day.\n", key);
    }

    key = 5;
    result = linearSearch(arr, n, key);
    if (result != -1) {
        printf("Phan tu %d duoc tim thay tai vi tri: %d\n", key, result);
    } else {
        printf("Phan tu %d khong ton tai trong day.\n", key);
    }
}

int main() {
    testLinearSearch();
    return 0;
}

