// 1. Buat program menghitung jumlah elemen array menggunakan pointer.
// 2. Tampilkan alamat dan isi array float menggunakan pointer.
// 3. Buat fungsi swap4() untuk menukar tiga nilai secara rotasi (a→b→c→d→a).
// 4. Gunakan pointer untuk mengubah isi string menjadi huruf kapital.


// Tuliskan Pseudocode dan code dalam bahasa c, gunakan fungsi/prosedur untuk setiap soalnya

///////////////////////////////

/// NOMOR 1
# include <stdio.h>
void hitung_array(char *array){
    int karakter;
    for (int i = 0; *(array+i) != '\0'; i++){
        karakter++;
    }
    printf("Jumlah array adalah: %d", karakter);
}

int main(){
    char nama[];
    scanf("%s", nama);
    hitung_array(nama);
    return 0;
}


/// NOMOR 2
# include <stdio.h>
void info_array(float *x){
  for (int i=0; *(x+i) != 0.0; i++){
    printf("Alamat array float ke-%d = %p\n", i, &*(x+i));
    printf("Isi array float ke-%d = %.2f\n", i, *(x+i));
  }
}

int main(){
    float bilangan[] = {1.1, 2.2, 3.3, 0.0};
    info_array(bilangan);
    return 0;
}








/// NOMOR 4
#include <stdio.h>

void swap4(int *a, int *b, int *c, int *d){
    int temp = *a;
    *a = *d;
    *d = *c;
    *c = *b;
    *b = temp;    
}

int main(){
    int x, y, z, w;
    scanf("%d %d %d %d", x, y, z, w);
    printf("Sebelum Swap4: %d %d %d %d\n", x, y, z, w);
    swap4(&x, &y, &z, &w);
    printf("Hasil Swap4: %d %d %d %d", x, y, z, w);
    return 0;
}


//// PSEUDO NOMOR 4

// awal:            a = 1, b = 2, c = 3, d = 4.
// target output:   a = 4, b = 1, c = 2, d = 3.


// ALGORITHM swap4(a,b,c,d)
//     temp = a    (a=1, b=2, c=3, d=4, 'temp=1')
//     a = d       ('a=4', b=2, c=3, d=4, temp=1)
//     d = c       (a=4, b=2, c=3, 'd=3', temp=1)
//     c = b       (a=4, b=2, 'c=2', d=3, temp=1)
//     b = temp    (a=4, 'b=1', c=3, d=3, temp=1)
// END ALGORITHM






