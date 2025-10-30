#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    printf("Masukkan nilai pertama: "); scanf("%d", &x);
    printf("Masukkan nilai kedua: "); scanf("%d", &y);
    swap(&x, &y);
    printf("\n-- Hasil Output Swap --\nNilai pertama: %d \nNilai kedua: %d", x, y);
    
    return 0;
}

