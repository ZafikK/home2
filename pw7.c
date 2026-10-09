#include <stdio.h>

int main(){
    long double long_d;
    double double_d;
    float float_d;

    scanf("%Lf", &long_d); //123456789.123457
    double_d = (double)long_d;
    float_d = (float)long_d;

    printf("FLOAT: %0.6f\n", float_d);
    printf("DOUBLE: %0.6f\n", double_d);
    printf("LONG: %0.6Lf\n", long_d);

    printf("FLOAT + 1: %0.6f\n", float_d + 1.0); 
    //тк флот может быть до 7 знаков а тут их 15 в примере
    printf("DOUBLE + 1: %0.6lf\n", double_d + 1.0); //15-17 знаков точности
    printf("LONG + 1: %0.6Lf\n", long_d + 1.0); // от 19 знаков точности
    return 0;
}