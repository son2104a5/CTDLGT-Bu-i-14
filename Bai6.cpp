#include <stdio.h>

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int linearSearch(int arr[], int n, int value) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == value) {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int left, int right, int value) {
    if (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == value) {
            return mid;
        } else if (arr[mid] > value) {
            return binarySearch(arr, left, mid - 1, value);
        } else {
            return binarySearch(arr, mid + 1, right, value);
        }
    }
    return -1;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Mang ban dau: ");
    printArray(arr, n);

    insertionSort(arr, n);

    printf("Mang sau khi sap xep: ");
    printArray(arr, n);

    int value;
    printf("Nhap gia tri can tim: ");
    scanf("%d", &value);

    int linearResult = linearSearch(arr, n, value);
    if (linearResult != -1) {
        printf("Tim thay %d bang tim kiem tuyen tinh tai vi tri %d.\n", value, linearResult);
    } else {
        printf("Khong tim thay %d bang tim kiem tuyen tinh.\n", value);
    }

    int binaryResult = binarySearch(arr, 0, n - 1, value);
    if (binaryResult != -1) {
        printf("Tim thay %d bang tim kiem nhi phan tai vi tri %d.\n", value, binaryResult);
    } else {
        printf("Khong tim thay %d bang tim kiem nhi phan.\n", value);
    }

    return 0;
}

