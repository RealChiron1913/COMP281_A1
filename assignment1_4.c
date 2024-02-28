#include <stdio.h>


int main(){
    //input
    int a, b, n;
    scanf("%d%d%d", &a, &b, &n);
    int remainder = a % b;
    //loop n times
    for (int i = 1; i <= n; i++) {
        //output the n-th digit
        if (i == n) {
            int digit = remainder * 10 / b;
            printf("%d\n", digit);
        }
        remainder = remainder * 10 % b;
    }
    return 0;
}