//created by Fhandy Nofalino Akhsan 23343065

#include <stdio.h>

// Fungsi untuk menukar dua angka
void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

// Fungsi untuk mencari pivot yang tepat dan membagi array
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // pivot
    int i = (low - 1); // Indeks elemen yang lebih kecil

    for (int j = low; j <= high - 1; j++) {
        // Jika elemen saat ini lebih kecil dari atau sama dengan pivot
        if (arr[j] <= pivot) {
            i++; // Peningkatan indeks elemen yang lebih kecil
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// Fungsi utama untuk mengimplementasikan Quick Sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // pi adalah indeks pivot, arr[p] sudah pada tempat yang benar
        int pi = partition(arr, low, high);

        // Sorting rekursif elemen sebelum dan setelah partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Fungsi untuk mencetak array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Fungsi utama
int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Array sebelum disorting: \n");
    printArray(arr, n);

    quickSort(arr, 0, n - 1);
    printf("Array setelah disorting dengan Quick Sort: \n");
    printArray(arr, n);
    return 0;
}
