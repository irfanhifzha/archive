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

    for (int i=0; i<jumlah_input; i++){
        printf("\nMasukkan data mahasiswa ke-%d\n", i+1);
        printf("Input Nama: "); scanf("%s", mhs[i].nama);
        printf("Input NIM: "); scanf("%s", mhs[i].nim);
        printf("Input IPK: "); scanf("%f", &mhs[i].ipk);
    }

    printf("\nData Mahasiswa:\n");
    for (int a=0; a<jumlah_input; a++){
        printf("%s | %s | %.2f\n", mhs[a].nama, mhs[a].nim, mhs[a].ipk);
    }
    return 0;
}

