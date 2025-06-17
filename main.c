#include <stdio.h>

void quicksort(int arr[], int left, int right) {
    if (left >= right) return;
    int pivot = arr[right];
    int i = left - 1;
    for (int j = left; j < right; j++) {
        if (arr[j] < pivot) {
            i++;
            int tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
        }
    }
    int tmp = arr[i + 1];
    arr[i + 1] = arr[right];
    arr[right] = tmp;

    quicksort(arr, left, i);
    quicksort(arr, i + 2, right);
}

int main() {
    int arr[] = {9, 3, 7, 1, 6, 2, 8, 5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    quicksort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
