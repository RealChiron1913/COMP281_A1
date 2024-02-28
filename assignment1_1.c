#include <stdio.h>
#define PI 3.14


int main() {
    //input
    int r1, r2;
    scanf("%d %d", &r1, &r2);
    //if r1 is smaller and equal to r2
    if (r1 <= r2){
        double area = 0, circumference = 0;
        //calculate sum of area and circumference
        for (int i = r1; i <= r2; i++){
            area = PI * i * i + area;
            circumference = 2 * PI * i + circumference;
        }
        //limit the output to 3 decimal places and output
        printf("%.3f\n%.3f", area, circumference);
    }
    return 0;
}
