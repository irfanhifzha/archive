// 1. Buat program menghitung jumlah elemen array menggunakan pointer.
// 2. Tampilkan alamat dan isi array float menggunakan pointer.
// 3. Buat fungsi swap4() untuk menukar tiga nilai secara rotasi (a→b→c→d→a).
// 4. Gunakan pointer untuk mengubah isi string menjadi huruf kapital.


// Tuliskan Pseudocode dan code dalam bahasa c, gunakan fungsi/prosedur untuk setiap soalnya

///////////////////////////////

/// NOMOR 1
# include <stdio.h>
void hitung_array(char *array){
    int hitung;
    for (int i = 0; *(array+i) != '\0'; i++){
        karakter++;
    }
    printf("Jumlah array adalah: %d", hitung);
}

int main(){
    char kata[];
    scanf("%s", kata);
    hitung_array(kata);
    return 0;
}

/// PSEUDO NOMOR 1

// ALGORITHM hitung_array(array)
//     DECLARE hitung AS INTEGER
//     FOR i <- 1 TO array <- END DO
//         karakter <- karakter + 1
//     END FOR
//     OUTPUT "Jumlah array: " hitung
// END ALGORITHM

// BEGIN
//     DECLARE kata AS ARRAY OF CHARACTER
//     INPUT kata
//     hitung_array(kata)
// END



/// NOMOR 2
# include <stdio.h>
void info_array(float *x, int jumlah){
  for (int i=0; i<jumlah; i++){
    printf("Alamat array float ke-%d = %p\n", i, &*(x+i));
    printf("Isi array float ke-%d = %.2f\n", i, *(x+i));
  }
}

int main(){
    int input_array;
    printf("Masukkan jumlah array: "); scanf("%d", &input_array);

    float bilangan[input_array];
    float *ptr = bilangan;

    for (int i=0; i<input_array; i++){
        printf("Masukkan float ke-%d: ", i); scanf("%f", &*(ptr+i));
    }
    info_array(bilangan, input_array);
    return 0;
}

/// PSEUDO NOMOR 2

// ALGORITHM info_array(x, jumlah)
//     FOR i <- 1 TO jumlah DO
//         OUTPUT alamat X ke-i
//         OUTPUT isi X ke-i
//     END FOR
// END ALGORITHM

// BEGIN
//     DECLARE jumlah_input AS INTEGER
//     INPUT input_array
//     DECLARE bilangan AS FLOAT
//     DECLARE ptr AS POINTER TO BILANGAN

//     FOR i <- 1 TO jumlah_input DO
//         INPUT bilangan
//     END FOR
//     info_array(bilangan, jumlah_input)
// END


/// NOMOR 3
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


//// PSEUDO NOMOR 3

// awal:            a = 1, b = 2, c = 3, d = 4.
// target output:   a = 4, b = 1, c = 2, d = 3.


// ALGORITHM swap4(a,b,c,d)
//     temp = a    (a=1, b=2, c=3, d=4, 'temp=1')
//     a = d       ('a=4', b=2, c=3, d=4, temp=1)
//     d = c       (a=4, b=2, c=3, 'd=3', temp=1)
//     c = b       (a=4, b=2, 'c=2', d=3, temp=1)
//     b = temp    (a=4, 'b=1', c=3, d=3, temp=1)
// END ALGORITHM

// BEGIN
//     DECLARE x,y,z,w AS INTEGER
//     INPUT x,y,z,w
//     swap4(x,y,z,w)
//     OUTPUT "Hasil Swap4: " x,y,z,w 
// END


/// NOMOR 4
#include <stdio.h>
#include <ctype.h>

void huruf_kapital(char *kata){
    for (int i=0; *(kata+i) != '\0'; i++){
        *(kata+i) = toupper(*(kata+i));
    }
}

int main(){
    char nama[] = "budi";
    printf("Kata sebelum kapital: %s\n", nama);
    huruf_kapital(nama);
    printf("Kata sesudah kapital: %s\n", nama);
    return 0;
}

/// PSEUDO NOMOR 4

// ALGORITHM huruf_kapital(kata)
//     FOR i <- 1 TO kata <- END DO
//         kata ke-i <- UPPER kata ke-i
//     END FOR
// END ALGORITHM

// BEGIN
//     DECLARE nama AS ARRAY CHARACTER
//     INPUT nama
//     huruf_kapital(nama)
//     OUTPUT nama
// END









