//created by Fhandy Nofalino Akhsan 23343065

#include <stdio.h>

// Fungsi untuk menukar dua angka
void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// Fungsi untuk mengimplementasikan Selection Sort
void selectionSort(int arr[], int n) {
    int i, j, min_idx;

    // Memindahkan batas dari array yang tidak terurut
    for (i = 0; i < n-1; i++) {
        // Menemukan elemen terkecil di array yang tidak terurut
        min_idx = i;
        for (j = i+1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        // Menukar elemen terkecil dengan elemen pertama
        swap(&arr[min_idx], &arr[i]);
    }
}

// Fungsi untuk mencetak array
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Fungsi utama
int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Array sebelum disorting: \n");
    printArray(arr, n);

    selectionSort(arr, n);
    printf("Array setelah disorting dengan Selection Sort: \n");
    printArray(arr, n);
    return 0;
}
