#include <stdio.h>
#include <stdint.h>

int main(){
    printf("INT8: size=%zu, min=%d, max=%d, values=%d\n",
           sizeof(int8_t), INT8_MIN, INT8_MAX, INT8_MAX - INT8_MIN + 1);
    printf("UINT8: size=%zu, min=%u, max=%u, values=%d\n",
           sizeof(uint8_t), 0, UINT8_MAX, UINT8_MAX - 0 + 1);
    printf("INT16: size=%zu, min=%d, max=%d, values=%ld\n",
           sizeof(int16_t), INT16_MIN, INT16_MAX, (long)INT16_MAX - INT16_MIN + 1);
    printf("UINT16: size=%zu, min=%u, max=%u, values=%d\n",
           sizeof(uint16_t), 0, UINT16_MAX, UINT16_MAX - 0 + 1);
    printf("INT32: size=%zu, min=%ld, max=%ld, values=%ld\n",
           sizeof(int32_t), (long)INT32_MIN, (long)INT32_MAX, (long)INT32_MAX - INT32_MIN + 1);
    printf("UINT32: size=%zu, min=%d, max=%lu, values=%lu\n",
           sizeof(uint32_t), 0, (long)UINT32_MAX, (long)UINT32_MAX - 0 + 1);
    return 0;
}