#include <stdio.h>
#include <stdint.h>

int main() {
    int packet_id;
    unsigned int temp_status;
    uint8_t status_code;
    float vol;
    uint16_t checksum;

    scanf("%x %o %f", &packet_id, &temp_status, &vol);

    status_code = (uint8_t)temp_status;
    checksum = (uint16_t)(packet_id + status_code);

    printf("PACKET_ID: %d\n", packet_id);
    printf("STATUS_CODE: %u\n", (unsigned int)status_code);
    printf("STATUS_CHAR: %c\n", (char)status_code);
    printf("VOLTAGE: %.2f\n", vol);
    printf("CHECKSUM: %u\n", (unsigned int)checksum);

    return 0;
}
