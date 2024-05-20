//created by Fhandy Nofalino Akhsan 23343065

#include <stdio.h>

// Fungsi untuk menggabungkan dua subarray dari arr[]
void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    // Membuat array sementara
    int L[n1], R[n2];

    // Menyalin data ke array sementara L[] dan R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    // Menggabungkan kembali array sementara ke arr[l..r]
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Menyalin sisa elemen L[], jika ada
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Menyalin sisa elemen R[], jika ada
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Fungsi utama untuk mengimplementasikan Merge Sort
void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        // Menemukan titik tengah
        int m = l + (r - l) / 2;

        // Mengurutkan bagian pertama dan kedua
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        // Menggabungkan bagian yang terurut
        merge(arr, l, m, r);
    }
}

// Fungsi untuk mencetak array
void printArray(int A[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

// Fungsi utama
int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    printf("Array sebelum disorting: \n");
    printArray(arr, arr_size);

    mergeSort(arr, 0, arr_size - 1);
    printf("Array setelah disorting dengan Merge Sort: \n");
    printArray(arr, arr_size);
    return 0;
}
