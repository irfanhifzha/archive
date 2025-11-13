#include <stdio.h>

int counta_iteratif(char word[]){
    int count = 0;

    for (int i=0; word[i] !='\0'; i++){
        if (word[i]== 'a'){
            printf("index %d adalah a\n", i);
            count++;
        }
    } return count;
}

    // ^^
    // Time complexity: O(n)
    // Space complexity: O(1)

int counta_rekursif(char word[]){
    if (word[0] == '\0') return 0;
    int count = (word[0] == 'a') ? 1 : 0;

    return count + counta_rekursif(word+1);
}

    // ^^
    // Time complexity: O(n)
    // Space complexity: O(n)

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
