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
    
    // Membuka file

    FILE *file_mahasiswa = fopen("mahasiswa.txt", "w");
    
    for (int i=0; i<jumlah_input; i++){
        printf("\nMasukkan data mahasiswa ke-%d\n", i+1);
        printf("Input Nama: "); scanf("%s", mhs[i].nama);
        printf("Input NIM: "); scanf("%s", mhs[i].nim);
        printf("Input IPK: "); scanf("%f", &mhs[i].ipk);

        fprintf(file_mahasiswa, "%s | %s | %.2f\n", mhs[i].nama, mhs[i].nim, mhs[i].ipk);
    }

    fclose(file_mahasiswa);
    printf("Data berhasil disimpan ke mahasiswa.txt\n");

    // Membaca ulang file

    file_mahasiswa = fopen("mahasiswa.txt", "r");
    printf("\n== Membaca File... ==\n\n");
    for (int p=0; p<jumlah_input; p++){
        fscanf(file_mahasiswa, "%s | %s | %f", mhs[p].nama, mhs[p].nim, &mhs[p].ipk);
        printf("%s | %s | %.2f\n", mhs[p].nama, mhs[p].nim, mhs[p].ipk);
    }
    
    printf("\n== End of file. ==\n");
    printf("\nMenghitung nilai rata-rata...\n");

    float total_ipk = 0;
    for (int r=0; r<jumlah_input; r++){
        total_ipk += mhs[r].ipk;
    }
    printf("Rata-rata IPK: %f", total_ipk/jumlah_input);
    fclose(file_mahasiswa);

    return 0;
}

