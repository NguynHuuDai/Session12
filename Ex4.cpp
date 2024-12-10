#include <stdio.h>

int findMaxValue(int arr[], int size) {
    int max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int main() {
    int size;

    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &size);

    int arr[size];

    printf("Nhap cac phan tu cho mang: \n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Phan tu lon nhat trong mang la: %d", findMaxValue(arr, size));

    return 0;
}

