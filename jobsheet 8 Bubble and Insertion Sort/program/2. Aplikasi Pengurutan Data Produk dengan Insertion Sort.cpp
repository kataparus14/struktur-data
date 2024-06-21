//creatd by Fhandy Nofalino Akhsan 

#include <stdio.h>
#include <string.h>

#define MAX 5

typedef struct {
    char nama[50];
    double harga;
} Produk;

Produk dataProduk[MAX] = {
    {"Produk A", 10000.0},
    {"Produk B", 15000.0},
    {"Produk C", 12000.0},
    {"Produk D", 9000.0},
    {"Produk E", 11000.0}
};

void display(Produk arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Nama: %s, Harga: %.2f\n", arr[i].nama, arr[i].harga);
    }
    printf("\n");
}

void insertionSort(Produk arr[], int size) {
    for (int i = 1; i < size; i++) {
        Produk key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j].harga > key.harga) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    printf("Data Produk Sebelum Pengurutan:\n");
    display(dataProduk, MAX);

    insertionSort(dataProduk, MAX);

    printf("Data Produk Setelah Pengurutan (Insertion Sort):\n");
    display(dataProduk, MAX);

    return 0;
}
