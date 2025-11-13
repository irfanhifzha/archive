#include<stdio.h>

int genap_iteratif(int arr[], int n){
    int jumlah = 0;

    for (int i=0; i<n; i++){
        if (arr[i] % 2 == 0){
            // printf("%d is bilangan genap\n", arr[i]);
            jumlah++;
        }
    }
    return jumlah;
}


int genap_rekursif(int arr[], int n){
    if (n==0) return 0;
    if (arr[n-1] % 2 == 0){
        printf("%d is bilangan genap\n", arr[n-1]);
        return 1 + genap_rekursif(arr, n-1);
    } else return genap_rekursif (arr, n-1);
}


int main(){
    int panjang;
    printf("Masukkan panjang array: "); scanf("%d", &panjang);

    int array[panjang];
    for (int i=0; i<panjang; i++){
        printf("Masukkan bilangan array ke-%d: ", i+1);
        scanf("%d", &array[i]);
    }

    printf("Isi Array[%d]: ", panjang);
    for (int a=0; a<panjang; a++){
        printf("%d ", array[a]);
    }
    printf("\n");

    int genapV1;
    genapV1 = genap_iteratif(array, panjang);
    printf("(HASIL ITERATIF) Bilangan yang genap terdapat: %d bilangan\n", genapV1);

    int genapV2;
    genapV2 = genap_rekursif(array, panjang);
    printf("(HASIL REKURSIF) Bilangan yang genap terdapat: %d bilangan\n", genapV2);

    return 0;
}