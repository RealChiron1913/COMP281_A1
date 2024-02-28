#include <stdio.h>


int main(){
    //input
    char a[100] = "\0";
    char b[100] = "\0";
    scanf("%s %s", a, b);
    int lena = 0, lenb = 0, j = 0;
    //get length of a and b
    while (a[j] != '\0'){
        lena++;
        j++;}
    j = 0;
    while (b[j] != '\0'){
        lenb++;
        j++;}
    //length of sum is the max length of a and b
    int len = lena > lenb ? lena : lenb;
    int sum[100] = {0};
    int k = 0;
    //calculate sum without carry and reverse the order
    for (int i = 0; i < len; i++){
        int temp = 0; //temp is the sum of a[i] and b[i]
        if (lena > 0 && lenb > 0){
            temp = a[lena - 1] - '0' + b[lenb - 1] - '0';//a[i] and b[i] are char, so minus '0' to get the real number
            lena--;
            lenb--;
        } else if (lena > 0){
            temp = a[lena - 1] - '0';
            lena--;
        } else if (lenb > 0){
            temp = b[lenb - 1] - '0';
            lenb--;
        }
        sum[k] = temp;
        k++;
    }
    //calculate carry
    for (int i = 0; i < len; i++){
        if (sum[i] >= 10){
            sum[i] = sum[i] - 10;
            sum[i + 1] = sum[i + 1] + 1;
        }
    }
    // if the last digit of c is 0, drop it
    if (sum[len] != 0){
        printf("%d", sum[len]);
    }
    //output
    for (int i = len - 1; i >= 0; i--){
        printf("%d", sum[i]);
    }
    return 0;
};