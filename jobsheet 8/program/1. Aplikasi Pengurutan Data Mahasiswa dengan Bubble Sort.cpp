//created by Fhandy Nofalino Akhsan 

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX 5

typedef struct {
    char nama[50];
    int nilai;
} Mahasiswa;

Mahasiswa dataMahasiswa[MAX] = {
    {"Fajrul", 85},
    {"Fhandy", 92},
    {"Nadya", 76},
    {"Najwa", 88},
    {"Gema", 91}
};

void display(Mahasiswa arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Nama: %s, Nilai: %d\n", arr[i].nama, arr[i].nilai);
    }
    printf("\n");
}

void bubbleSort(Mahasiswa arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j].nilai > arr[j + 1].nilai) {
                Mahasiswa temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

int main() {
    printf("Data Mahasiswa Sebelum Pengurutan:\n");
    display(dataMahasiswa, MAX);

    bubbleSort(dataMahasiswa, MAX);

    printf("Data Mahasiswa Setelah Pengurutan (Bubble Sort):\n");
    display(dataMahasiswa, MAX);

    return 0;
}
