#include <stdio.h>

typedef struct Mahasiswa{
    char nama[50];
    char nim[10];
    float ipk;
} list_mahasiswa;

int main(){
    int jumlah_input;
    printf("Masukkan jumlah mahasiswa yang ingin di-input: "); scanf("%d", &jumlah_input);
    list_mahasiswa mhs[jumlah_input];
    list_mahasiswa *pointer1 = mhs;

    for (int i=0; i<jumlah_input; i++){
        printf("\nMasukkan data mahasiswa ke-%d\n", i++);
        printf("Input Nama: "); scanf("%s", pointer1->nama);
        printf("Input NIM: "); scanf("%s", pointer1->nim);
        printf("Input IPK: "); scanf("%f", &(*pointer1).ipk);
    }

    printf("\nData Mahasiswa:\n");
    for (int a=0; a<jumlah_input; a++){
        printf("%s | %s | %.2f\n", pointer1->nama, pointer1->nim, pointer1->ipk);
    }
    return 0;
}

