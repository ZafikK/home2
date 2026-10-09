#include <stdio.h>
#include <stdint.h>

int main(){
    uint8_t value;
    uint8_t a;
    scanf("%hhu", &value); // 250
    a = value;
    value = value + 10;
    printf("ADD: %u\n", (unsigned int)value);
    value = a;
    value = value * 2u;
    printf("MUL2: %u\n", (unsigned int)value);
    value = a;
    value = value * value;
    printf("SQR: %u\n", (unsigned int)value);
    return 0;

}
