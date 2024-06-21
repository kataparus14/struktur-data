//created by Fhandy Nofalino Akhsan 23343065

#include <stdio.h>

// Fungsi untuk mengimplementasikan Shell Sort
void shellSort(int arr[], int n) {
    // Mulai dengan gap besar, lalu kurangi gap secara bertahap
    for (int gap = n/2; gap > 0; gap /= 2) {
        // Lakukan insertion sort untuk elemen-elemen dengan jarak gap
        for (int i = gap; i < n; i += 1) {
            int temp = arr[i];
            int j;            
            // Geser elemen arr[0..i-gap] yang lebih besar dari temp
            // ke satu posisi ke depan dari posisi sekarang
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
                arr[j] = arr[j - gap];
            // Tempatkan temp (elemen awal arr[i]) di lokasi yang benar
            arr[j] = temp;
        }
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
    int arr[] = {12, 34, 54, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Array sebelum disorting: \n");
    printArray(arr, n);

    shellSort(arr, n);
    printf("Array setelah disorting dengan Shell Sort: \n");
    printArray(arr, n);
    return 0;
}
