#include <stdio.h>

int counta_iteratif(char word[]){
    int count = 0;    // deklarasi count akan +1 untuk space complexity & +1 time complexity.

    for (int i=0; word[i] !='\0'; i++){  // deklarasi i konstan +1 time complexity & +1 space complexity, i++ dan membandingkan hingga kata habis +n time complexity sebanyak loop i.
        if (word[i]== 'a'){
            printf("index %d adalah a\n", i);
            count++;    // proses ini dilakukan sebanyak loop, maka time complexity +n.
        }
    } return count;  // proses ini konstan maka +1 time complexity.
}

    // ^^
    // Time complexity: O(1+n*1) > O(n)
    // Space complexity: O(2) > O(1)

int counta_rekursif(char word[]){
    if (word[0] == '\0') return 0;  // deklarasi konstan +1 time complexity & +1 space complexity.
    int count = (word[0] == 'a') ? 1 : 0; // ada proses penggantian variable, +1 time complexity & +1 space complexity.

    return count + counta_rekursif(word+1);  // proses rekursif, +1 time complexity & +1 space complexity, TAPI sebanyak n.. jadi +n time complexity & +n space complexity.
}

    // ^^
    // Time complexity: O(3n) > O(n)
    // Space complexity: O(3n) > O(n)

int main(){
    char kata[50];
    printf("Masukkan kata (JANGAN ADA SPASI): "); scanf("%s", kata);

    int hasilV1;
    hasilV1 = counta_iteratif(kata);
    printf("(ITERATIF) Jumlah huruf 'a' dari kata tsb ada: %d\n", hasilV1);

    int hasilV2;
    hasilV2 = counta_rekursif(kata);
    printf("(REKURSIF) Jumlah huruf 'a' dari kata tsb ada: %d\n", hasilV2);

    return 0;

}

